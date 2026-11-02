/* Module: vegas30k.dll
   Function: FUN_010c2e00
   Address: 010c2e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010c2e00(uint param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_108;
  undefined4 local_100 [64];
  
  local_108 = param_3 / 2;
  if (0 < local_108) {
    puVar2 = (undefined4 *)((param_3 + -1) * param_1 + (int)param_2);
    do {
      puVar3 = param_2;
      puVar4 = local_100;
      for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar3 = puVar2;
      puVar4 = param_2;
      for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar3 = local_100;
      puVar4 = puVar2;
      for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 - param_1);
      local_108 = local_108 + -1;
      param_2 = (undefined4 *)((int)param_2 + param_1);
    } while (local_108 != 0);
  }
  return;
}


