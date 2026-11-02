/* Module: mpegin.dll
   Function: FUN_1000ed62
   Address: 1000ed62
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000ed62(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_100191d8;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x100191dc);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x100192b0);
  return 0;
}


