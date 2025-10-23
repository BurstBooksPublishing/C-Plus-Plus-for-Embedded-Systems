void stencil_3d(float* grid, int dim_x, int dim_y, int dim_z) {
for (int z = 1; z < dim_z-1; z++) {
for (int y = 1; y < dim_y-1; y++) {
for (int x = 1; x < dim_x-1; x++) {
grid[z*dim_y*dim_x + y*dim_x + x] =
0.5f * grid[z*dim_y*dim_x + y*dim_x + x] +
0.1f * (grid[(z-1)*dim_y*dim_x + y*dim_x + x] +
grid[(z+1)*dim_y*dim_x + y*dim_x + x] +
grid[z*dim_y*dim_x + (y-1)*dim_x + x] +
grid[z*dim_y*dim_x + (y+1)*dim_x + x]);
}
}
}
}