/* Module: sfpaplug.dll
   Function: FUN_00434030
   Address: 00434030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00434030(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00454bc4;
  if (param_1[1] != 0) {
    FUN_00434020();
    FUN_0042b9d0((int *)param_1[1]);
  }
  return;
}


