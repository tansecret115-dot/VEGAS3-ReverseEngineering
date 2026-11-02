/* Module: g2plug.dll
   Function: FUN_5f862150
   Address: 5f862150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f862150(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_5f89ca44 != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_5f898138)[uVar1 * 2];
      if ((&DAT_5f89813c)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_5f898138)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_5f818540(DAT_5f877520,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_5f89813c)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_5f89ca44);
  }
  iVar5 = 0;
  piVar3 = &DAT_5f876f78;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x5f8772c7 < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x5f876f7c);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_5f818540(DAT_5f877520,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


