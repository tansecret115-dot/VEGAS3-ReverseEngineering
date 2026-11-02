/* Module: sfppack3.dll
   Function: FUN_5cc70960
   Address: 5cc70960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5cc70960(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_5cc9da94 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_5cc99188)[uVar1 * 2];
      if ((&DAT_5cc9918c)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_5cc99188)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_5cc4e750(DAT_5cc98300,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_5cc9918c)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_5cc9da94);
  }
  iVar5 = 0;
  piVar3 = &DAT_5cc97a00;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if (0x5cc97d4f < (int)piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x5cc97a04);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_5cc4e750(DAT_5cc98300,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


