/* Module: vegas30k.dll
   Function: FUN_011b9c40
   Address: 011b9c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b9c40(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar2 = 1;
  if (((*(int *)(param_1 + 0xc) != 0) && (param_2 < *(int *)(param_1 + 8))) &&
     (puVar4 = *(uint **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + param_2 * 4),
     puVar4 != (uint *)0x0)) {
    uVar1 = *param_3;
    puVar5 = param_3;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar5 = (char)*puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    *param_3 = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}


