/* Module: sftrans1.dll
   Function: FUN_00526220
   Address: 00526220
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00526220(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = 0;
  if (DAT_00620ffc != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_0061c6f0)[uVar1 * 2];
      if ((&DAT_0061c6f4)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            uVar1 = ((int *)(&DAT_0061c6f0)[uVar1 * 2])[uVar2 * 2 + 1];
            if ((uVar1 >> 0x10 == 0) && (uVar1 != 0)) {
              uVar1 = FUN_004ca510(DAT_0057b888,uVar1);
              return uVar1;
            }
            return uVar1;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_0061c6f4)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_00620ffc);
  }
  iVar4 = 0;
  piVar3 = &DAT_00576520;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + 1;
    if ((int *)0x576877 < piVar3) {
      return 0;
    }
  }
  uVar1 = *(uint *)(iVar4 * 8 + 0x576524);
  if ((uVar1 >> 0x10 == 0) && (uVar1 != 0)) {
    uVar1 = FUN_004ca510(DAT_0057b888,uVar1);
    return uVar1;
  }
  return uVar1;
}


