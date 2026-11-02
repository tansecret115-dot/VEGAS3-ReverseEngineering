/* Module: g2plug.dll
   Function: FUN_5f823df0
   Address: 5f823df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f823df0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_10;
  undefined4 *local_c;
  
  local_10 = param_1[5];
  uVar1 = param_1[6];
  puVar3 = (undefined4 *)param_1[2];
  FUN_5f8676b0();
  if (param_1[9] != 0) {
    local_c = (undefined4 *)((local_10 + -1) * uVar1 + (int)puVar3);
    local_10 = local_10 / 2;
    param_1 = puVar3;
    if (0 < local_10) {
      do {
        puVar3 = param_1;
        puVar4 = (undefined4 *)&stack0xffffffe4;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        puVar3 = local_c;
        puVar4 = param_1;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        puVar3 = (undefined4 *)&stack0xffffffe4;
        puVar4 = local_c;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        local_10 = local_10 + -1;
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + uVar1);
        local_c = (undefined4 *)((int)local_c - uVar1);
      } while (local_10 != 0);
    }
  }
  return 0;
}


