/* Module: sdpp3260.dll
   Function: FUN_10005ab0
   Address: 10005ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10005ab0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  *param_1 = &PTR_FUN_10008a70;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_100059a0(param_1);
  return;
}


