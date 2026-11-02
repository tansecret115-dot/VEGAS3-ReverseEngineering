/* Module: stl2plg.dll
   Function: FUN_00420b60
   Address: 00420b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00420b60(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = 0;
  if (DAT_004781dc != 0) {
    do {
      uVar2 = 0;
      piVar3 = (int *)(&DAT_004738d0)[uVar1 * 2];
      if ((&DAT_004738d4)[uVar1 * 2] != 0) {
        do {
          if (param_1 == *piVar3) {
            puVar4 = (undefined *)((int *)(&DAT_004738d0)[uVar1 * 2])[uVar2 * 2 + 1];
            if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar4 = FUN_0040e730(DAT_00473620,(uint)puVar4);
              return puVar4;
            }
            return puVar4;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < (uint)(&DAT_004738d4)[uVar1 * 2]);
      }
      uVar1 = uVar2 + 1;
    } while (uVar1 < DAT_004781dc);
  }
  iVar5 = 0;
  piVar3 = &DAT_00471c28;
  while (param_1 != *piVar3) {
    piVar3 = piVar3 + 2;
    iVar5 = iVar5 + 1;
    if (0x471f7f < (int)piVar3) {
      return (undefined *)0x0;
    }
  }
  puVar4 = *(undefined **)(iVar5 * 8 + 0x471c2c);
  if (((uint)puVar4 >> 0x10 == 0) && (puVar4 != (undefined *)0x0)) {
    puVar4 = FUN_0040e730(DAT_00473620,(uint)puVar4);
    return puVar4;
  }
  return puVar4;
}


