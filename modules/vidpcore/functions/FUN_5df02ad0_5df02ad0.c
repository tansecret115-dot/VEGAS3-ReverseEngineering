/* Module: vidpcore.dll
   Function: FUN_5df02ad0
   Address: 5df02ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5df02ad0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = 0;
  if (DAT_5dff0664 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_5dfebd58)[uVar1 * 2];
      if ((&DAT_5dfebd5c)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            uVar1 = ((int *)(&DAT_5dfebd58)[uVar1 * 2])[uVar2 * 2 + 1];
            if ((uVar1 >> 0x10 == 0) && (uVar1 != 0)) {
              uVar1 = FUN_5deb8a80(DAT_5df42ed8,uVar1);
              return uVar1;
            }
            return uVar1;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_5dfebd5c)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_5dff0664);
  }
  iVar4 = 0;
  piVar3 = &DAT_5df3e8a0;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + 1;
    if ((int *)0x5df3ebf7 < piVar3) {
      return 0;
    }
  }
  uVar1 = *(uint *)(iVar4 * 8 + 0x5df3e8a4);
  if ((uVar1 >> 0x10 == 0) && (uVar1 != 0)) {
    uVar1 = FUN_5deb8a80(DAT_5df42ed8,uVar1);
    return uVar1;
  }
  return uVar1;
}


