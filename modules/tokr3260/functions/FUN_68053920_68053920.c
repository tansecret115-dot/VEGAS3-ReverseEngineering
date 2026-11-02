/* Module: tokr3260.dll
   Function: FUN_68053920
   Address: 68053920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68053920(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_6805f054 == 0) {
    iVar3 = 0;
    piVar2 = &DAT_6805c010;
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + iVar1;
    } while ((int)piVar2 < 0x6805c090);
    if (iVar3 != 0x400) {
      return 0xfff0bdc1;
    }
    DAT_6805f054 = 1;
  }
  if (0x1f < param_1) {
    return 0xfff0bdc1;
  }
  return (&DAT_6805c010)[param_1];
}


