//initialises an 2 Dimensional array on the heap

float** initialise_matrix_on_heap(int n){
    float** mat = (float**)malloc(n*sizeof(float*));
    for (int i=0; i<n; i++){
        mat[i] = (float*) malloc(n*sizeof(float));
    }

    for (int i =0; i < n; i++){
        for (int j = 0; j < n; j++){
            mat[i][j]= rand();
        }
    }

    return mat;
}