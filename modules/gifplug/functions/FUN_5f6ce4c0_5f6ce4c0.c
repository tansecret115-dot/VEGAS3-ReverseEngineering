/* Module: gifplug.dll
   Function: FUN_5f6ce4c0
   Address: 5f6ce4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f6ce4c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_5f710aa4 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_5f70c198)[uVar1 * 2];
      if ((&DAT_5f70c19c)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_5f70c198)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_5f6cce60(DAT_5f70bef0,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_5f70c19c)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_5f710aa4);
  }
  iVar5 = 0;
  piVar3 = &DAT_5f70b6f8;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x5f70ba47 < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x5f70b6fc);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_5f6cce60(DAT_5f70bef0,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


