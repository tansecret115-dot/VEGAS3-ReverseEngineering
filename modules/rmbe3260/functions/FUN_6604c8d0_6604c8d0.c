/* Module: rmbe3260.dll
   Function: FUN_6604c8d0
   Address: 6604c8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6604c8d0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_20 [5];
  int *local_c;
  int *local_8;
  
  puVar3 = (undefined4 *)0x74;
  if (param_2 != 0) {
    puVar3 = param_1;
  }
  if (param_2 == 1) {
    puVar3 = (undefined4 *)0x98;
  }
  if (param_2 == 2) {
    puVar3 = (undefined4 *)0x94;
  }
  if (param_2 == 3) {
    puVar3 = (undefined4 *)0xa0;
  }
  uVar2 = (int)puVar3 >> 0x1f;
  if ((((uint)puVar3 ^ uVar2) - uVar2 & 7 ^ uVar2) != uVar2) {
    param_2 = 0;
    local_8 = (int *)0x0;
    local_c = &DAT_6606e9b8;
    do {
      if (param_2 < *local_c) {
        uVar2 = (int)puVar3 * *local_c;
        FUN_6604cc00((int)local_20,(int)param_1,0,uVar2,(uint)puVar3);
        FUN_6604cc00((int)param_1,(int)param_1,uVar2,(uint)local_8,(uint)puVar3);
        FUN_6604cc00((int)param_1,(int)local_20,(uint)local_8,0,(uint)puVar3);
      }
      local_c = local_c + 1;
      param_2 = param_2 + 1;
      local_8 = (int *)((int)local_8 + (int)puVar3);
    } while ((int)local_c < 0x6606eb38);
    return;
  }
  param_2 = 0;
  uVar2 = (int)puVar3 >> 3;
  local_8 = &DAT_6606e9b8;
  puVar3 = param_1;
  do {
    if (param_2 < *local_8) {
      local_c = (int *)((int)param_1 + uVar2 * *local_8);
      puVar4 = local_c;
      puVar5 = local_20;
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar4 = puVar3;
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *local_c = *puVar4;
        puVar4 = puVar4 + 1;
        local_c = local_c + 1;
      }
      for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)local_c = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        local_c = (undefined4 *)((int)local_c + 1);
      }
      puVar4 = local_20;
      puVar5 = puVar3;
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    local_8 = local_8 + 1;
    param_2 = param_2 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + uVar2);
  } while ((int)local_8 < 0x6606eb38);
  return;
}


