/* Module: erv13260.dll
   Function: FUN_635f5500
   Address: 635f5500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f5500(void *param_1,undefined4 *param_2)

{
  FUN_635fbb60((int)param_1);
  if (*(undefined4 **)((int)param_1 + 0x1ccb) != (undefined4 *)0x0) {
    FUN_635f7e90(*(undefined4 **)((int)param_1 + 0x1ccb));
  }
  if (*(undefined4 **)((int)param_1 + 0x1cc7) != (undefined4 *)0x0) {
    FUN_635f7e90(*(undefined4 **)((int)param_1 + 0x1cc7));
  }
  if (*(undefined4 **)((int)param_1 + 0x1ccf) != (undefined4 *)0x0) {
    FUN_635f7e90(*(undefined4 **)((int)param_1 + 0x1ccf));
  }
  if (*(void **)((int)param_1 + 0x1d34) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x1d34));
  }
  if (*(void **)((int)param_1 + 0x1d38) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x1d38));
  }
  if (*(void **)((int)param_1 + 0x1d3c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x1d3c));
  }
  if (*(void **)((int)param_1 + 0x1d40) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x1d40));
  }
  if (*(void **)((int)param_1 + 0x1d44) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x1d44));
  }
  free(*(void **)((int)param_1 + 0x1d5b));
  free(*(void **)((int)param_1 + 0x2c));
  if (*(int *)((int)param_1 + 0x1d87) != 0) {
    fclose(*(FILE **)((int)param_1 + 0x23bb));
  }
  if (*(int *)((int)param_1 + 0x1d8b) != 0) {
    fclose(*(FILE **)((int)param_1 + 0x23bf));
  }
  if (*(int *)((int)param_1 + 0x1d8f) != 0) {
    fclose(*(FILE **)((int)param_1 + 0x23c3));
  }
  if (*(int *)((int)param_1 + 0x1d93) != 0) {
    fclose(*(FILE **)((int)param_1 + 0x23c7));
  }
  free(param_1);
  if ((void *)*param_2 != (void *)0x0) {
    free((void *)*param_2);
    *param_2 = 0;
  }
  return 1;
}


