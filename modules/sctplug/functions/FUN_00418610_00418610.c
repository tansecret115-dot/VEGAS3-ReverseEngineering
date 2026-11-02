/* Module: sctplug.dll
   Function: FUN_00418610
   Address: 00418610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00418610(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_00441ae4 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_0043d1d8)[uVar1 * 2];
      if ((&DAT_0043d1dc)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_0043d1d8)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_0040dea0(DAT_0043cd30,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_0043d1dc)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_00441ae4);
  }
  iVar5 = 0;
  piVar3 = &DAT_0043c330;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x43c67f < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x43c334);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_0040dea0(DAT_0043cd30,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


