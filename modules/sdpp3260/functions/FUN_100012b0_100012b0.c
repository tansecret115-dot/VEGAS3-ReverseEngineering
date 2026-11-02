/* Module: sdpp3260.dll
   Function: FUN_100012b0
   Address: 100012b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_100012b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_10008518;
  param_1[1] = &PTR_LAB_10008500;
  param_1[2] = &PTR_LAB_100084e8;
  DAT_10009740 = DAT_10009740 + -1;
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  return;
}


