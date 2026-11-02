/* Module: sdpp3260.dll
   Function: FUN_100025c0
   Address: 100025c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_100025c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_100085e4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_100024b0(param_1);
  return;
}


