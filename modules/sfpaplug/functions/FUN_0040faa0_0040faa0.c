/* Module: sfpaplug.dll
   Function: FUN_0040faa0
   Address: 0040faa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040faa0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_0044ee6c;
  FUN_00410490(param_1,param_1[4]);
  FUN_00410490(param_1,param_1[6]);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


