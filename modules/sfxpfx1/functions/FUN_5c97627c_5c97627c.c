/* Module: sfxpfx1.dll
   Function: FUN_5c97627c
   Address: 5c97627c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c97627c(LPCVOID param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(undefined4 *)((int)param_1 + 8);
  if (*piVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_5c97a62d();
      FUN_5c942920(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


