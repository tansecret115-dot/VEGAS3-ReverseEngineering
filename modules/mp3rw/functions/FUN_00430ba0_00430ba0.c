/* Module: mp3rw.dll
   Function: FUN_00430ba0
   Address: 00430ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00430ba0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_004aedc4 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_004aa4b8)[uVar1 * 2];
      if ((&DAT_004aa4bc)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_004aa4b8)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_0041f9f0(DAT_004a98f8,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_004aa4bc)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_004aedc4);
  }
  iVar5 = 0;
  piVar3 = &DAT_004a6758;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x4a6aaf < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x4a675c);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_0041f9f0(DAT_004a98f8,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


