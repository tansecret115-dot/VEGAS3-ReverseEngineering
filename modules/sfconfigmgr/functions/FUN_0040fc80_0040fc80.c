/* Module: sfconfigmgr.dll
   Function: FUN_0040fc80
   Address: 0040fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_0040fc80(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_00427c84 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_00423378)[uVar1 * 2];
      if ((&DAT_0042337c)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_00423378)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_00409ac0(DAT_004230d0,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_0042337c)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_00427c84);
  }
  iVar5 = 0;
  piVar3 = &DAT_00422908;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x422c5f < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x42290c);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_00409ac0(DAT_004230d0,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


