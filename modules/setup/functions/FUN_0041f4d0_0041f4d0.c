/* Module: Setup.exe
   Function: FUN_0041f4d0
   Address: 0041f4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_0041f4d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_0044e34c != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_00449a40)[uVar1 * 2];
      if ((&DAT_00449a44)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_00449a40)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = _SfGetString2_8(DAT_00448e00,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_00449a44)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_0044e34c);
  }
  iVar5 = 0;
  piVar3 = &DAT_00444130;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if ((int *)0x444487 < piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x444134);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = _SfGetString2_8(DAT_00448e00,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


