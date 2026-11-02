/* Module: sfxpfx2.dll
   Function: FUN_5c8c6250
   Address: 5c8c6250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5c8c6250(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_5c8eeb8c != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_5c8ea280)[uVar1 * 2];
      if ((&DAT_5c8ea284)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_5c8ea280)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_5c8a8180(DAT_5c8e93f8,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_5c8ea284)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_5c8eeb8c);
  }
  iVar5 = 0;
  piVar3 = &DAT_5c8e8ac8;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if (0x5c8e8e17 < (int)piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x5c8e8acc);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_5c8a8180(DAT_5c8e93f8,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


