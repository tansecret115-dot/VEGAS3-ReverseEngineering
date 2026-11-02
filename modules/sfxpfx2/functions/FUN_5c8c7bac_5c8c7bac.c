/* Module: sfxpfx2.dll
   Function: FUN_5c8c7bac
   Address: 5c8c7bac
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8c7bac(LPCVOID param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(undefined4 *)((int)param_1 + 8);
  if (*piVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_5c8cbf5d();
      FUN_5c892960(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


