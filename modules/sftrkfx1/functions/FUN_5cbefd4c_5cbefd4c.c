/* Module: sftrkfx1.dll
   Function: FUN_5cbefd4c
   Address: 5cbefd4c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbefd4c(LPCVOID param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(undefined4 *)((int)param_1 + 8);
  if (*piVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_5cbf40fd();
      FUN_5cba1ab0(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


