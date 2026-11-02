/* Module: vfplugs.dll
   Function: FUN_0046de10
   Address: 0046de10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_0046de10(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_0053a1fc != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_005358f0)[uVar1 * 2];
      if ((&DAT_005358f4)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_005358f0)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_0042da70(DAT_00494a78,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_005358f4)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_0053a1fc);
  }
  iVar5 = 0;
  piVar3 = &DAT_004940c0;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x494417 < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x4940c4);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_0042da70(DAT_00494a78,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


