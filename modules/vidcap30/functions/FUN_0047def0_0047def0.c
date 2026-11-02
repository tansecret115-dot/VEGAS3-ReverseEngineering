/* Module: vidcap30.exe
   Function: FUN_0047def0
   Address: 0047def0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0047def0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = 0;
  if (DAT_005c149c != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_005bcb90)[uVar1 * 2];
      if ((&DAT_005bcb94)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            uVar1 = ((int *)(&DAT_005bcb90)[uVar1 * 2])[uVar2 * 2 + 1];
            if ((uVar1 >> 0x10 == 0) && (uVar1 != 0)) {
              uVar1 = _SfGetString2_8(DAT_005c16d8,uVar1);
              return uVar1;
            }
            return uVar1;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_005bcb94)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_005c149c);
  }
  iVar4 = 0;
  piVar3 = &DAT_005b6928;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + 1;
    if ((int *)0x5b6c7f < piVar3) {
      return 0;
    }
  }
  uVar1 = *(uint *)(iVar4 * 8 + 0x5b692c);
  if ((uVar1 >> 0x10 == 0) && (uVar1 != 0)) {
    uVar1 = _SfGetString2_8(DAT_005c16d8,uVar1);
    return uVar1;
  }
  return uVar1;
}


