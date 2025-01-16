  int arr[3][4];
  int rows = 3;
  int cols = 4;

  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin >> arr[i][j];
    }
  }

  printWave(arr, rows, cols);