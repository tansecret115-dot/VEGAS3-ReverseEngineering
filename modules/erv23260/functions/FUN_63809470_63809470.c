/* Module: erv23260.dll
   Function: FUN_63809470
   Address: 63809470
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63809470(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_637f1080((void *)*param_1);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if ((void *)param_1[7] != (void *)0x0) {
    FUN_637f1080((void *)param_1[7]);
    param_1[7] = 0;
  }
  return;
}


