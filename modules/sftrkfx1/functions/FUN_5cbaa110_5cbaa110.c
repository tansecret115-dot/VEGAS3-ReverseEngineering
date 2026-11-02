/* Module: sftrkfx1.dll
   Function: FUN_5cbaa110
   Address: 5cbaa110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaa110(undefined4 *param_1,int param_2,int param_3)

{
  if (*(int *)(param_2 + 0xf0) != 0xffff) {
    *(undefined4 *)(*(int *)(param_2 + 0xf0) * 0x20 + 0x4c + param_2) = 0;
  }
  *(int *)(param_2 + 0xf0) = param_3;
  if (param_3 != 0xffff) {
    *(undefined4 *)(param_3 * 0x20 + 0x4c + param_2) = 1;
  }
  FUN_5cba93f0(param_1);
  return;
}


