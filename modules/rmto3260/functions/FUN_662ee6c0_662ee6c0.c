/* Module: rmto3260.dll
   Function: FUN_662ee6c0
   Address: 662ee6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ee6c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_66307b8c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_662ee5b0(param_1);
  return;
}


