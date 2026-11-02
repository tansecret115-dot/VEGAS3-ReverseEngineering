/* Module: tokr3260.dll
   Function: FUN_68053980
   Address: 68053980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68053980(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_6805f058 == 0) {
    iVar4 = 0;
    piVar3 = &DAT_6805f030;
    do {
      iVar1 = FUN_680539f0(iVar4);
      iVar1 = iVar1 * 2 + 1;
      iVar2 = 0;
      if (1 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
        } while (1 << ((byte)iVar2 & 0x1f) < iVar1);
      }
      *piVar3 = iVar2;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while ((int)piVar3 < 0x6805f050);
    DAT_6805f058 = 1;
  }
  if ((-1 < param_1) && (param_1 < 8)) {
    return (&DAT_6805f030)[param_1];
  }
  return 0xfff0bdc1;
}


