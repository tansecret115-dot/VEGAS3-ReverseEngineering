/* Module: mpgmux.dll
   Function: FUN_10010e23
   Address: 10010e23
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10010e23(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_10019ff0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x10019ff4);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x1001a0c8);
  return 0;
}


