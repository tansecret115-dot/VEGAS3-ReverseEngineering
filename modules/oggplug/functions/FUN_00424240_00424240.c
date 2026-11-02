/* Module: oggplug.dll
   Function: FUN_00424240
   Address: 00424240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00424240(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_00516384 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_00511a78)[uVar1 * 2];
      if ((&DAT_00511a7c)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_00511a78)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_0040bbf0(DAT_00510e98,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_00511a7c)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_00516384);
  }
  iVar5 = 0;
  piVar3 = &DAT_00450cc8;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x451017 < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x450ccc);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_0040bbf0(DAT_00510e98,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


