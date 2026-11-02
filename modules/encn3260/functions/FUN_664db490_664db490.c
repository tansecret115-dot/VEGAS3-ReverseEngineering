/* Module: encn3260.dll
   Function: FUN_664db490
   Address: 664db490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664db490(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar2 = param_1;
  if (1 < (int)param_1[2]) {
    return 0x80040009;
  }
  if ((uint)param_1[4] < param_2) {
    piVar1 = param_1 + 3;
    param_1 = (undefined4 *)0x0;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      param_1 = (undefined4 *)*piVar1;
    }
    puVar3 = operator_new(param_2);
    puVar2[3] = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar2[3] = param_1;
      return 0x8007000e;
    }
    if (param_1 != (undefined4 *)0x0) {
      uVar5 = puVar2[4];
      puVar6 = param_1;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      operator_delete(param_1);
    }
  }
  puVar2[4] = param_2;
  return 0;
}


