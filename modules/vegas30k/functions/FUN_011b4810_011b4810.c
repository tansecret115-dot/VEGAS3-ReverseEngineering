/* Module: vegas30k.dll
   Function: FUN_011b4810
   Address: 011b4810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b4810(int param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  if ((param_4 != (uint *)0x0) && (param_3 == (undefined4 *)0x0)) {
    *param_4 = *(uint *)(param_1 + 600);
    return 0;
  }
  if (((*(undefined4 **)(param_1 + 0x254) != (undefined4 *)0x0) &&
      (((uVar1 = *(uint *)(param_1 + 600), uVar1 != 0 && (param_3 != (undefined4 *)0x0)) &&
       (param_4 != (uint *)0x0)))) && (uVar2 = *param_4, uVar2 != 0)) {
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x254);
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
  }
  return 0;
}


