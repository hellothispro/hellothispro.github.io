// Function to create the "pane" div elements
function createPane(programId, programData) {
  const paneDiv = document.createElement('div');
  paneDiv.id = 'pane';
  paneDiv.className = `os-${programId}`;

  const questionDiv = document.createElement('div');
  questionDiv.className = 'question';

  const h1Tag = document.createElement('h1');
  h1Tag.className = 'qnH';
  h1Tag.textContent = programData.ContentToDisplay;

  questionDiv.appendChild(h1Tag);

  const dwnldBtnDiv = document.createElement('div');
  dwnldBtnDiv.className = 'dwnld_btn';

  const aTag = document.createElement('a');
  aTag.href = programData.DownloadLink;
  aTag.className = 'atag';
  aTag.setAttribute('download', '');

  const btn = document.createElement('button');
  btn.className = 'btn';
  btn.textContent = 'Get';

  aTag.appendChild(btn);
  dwnldBtnDiv.appendChild(aTag);
  paneDiv.appendChild(questionDiv);
  paneDiv.appendChild(dwnldBtnDiv);

  return paneDiv;
}

// Fetch the JSON data from the file
fetch('./Resources/progs/index.json')
  .then((response) => response.json())
  .then((jsonData) => {
    // Loop through the JSON data and create "pane" div elements
    for (const programId in jsonData) {
      const programData = jsonData[programId];
      const pane = createPane(programId, programData);
      document.getElementById('container').appendChild(pane); // Append to the container div
    }
  })
  .catch((error) => {
    console.error('Error loading JSON file:', error);
  });
