/* Module: vidcap30.exe
   Function: FUN_00448a10
   Address: 00448a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00448a10(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_005b5bd8;
  do {
    if (*piVar2 == param_1) {
      return &DAT_005b5bd8 + iVar1 * 4;
    }
    piVar2 = piVar2 + 4;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_005b5d28);
  return (undefined4 *)0x0;
}


