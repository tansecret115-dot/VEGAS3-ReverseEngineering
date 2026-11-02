/* Module: rmto3260.dll
   Function: FUN_662fddd0
   Address: 662fddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662fddd0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_3c [6];
  undefined4 local_24 [5];
  undefined4 *local_10;
  int *local_c;
  undefined4 *local_8;
  
  puVar6 = (undefined4 *)0x74;
  if (param_2 != 0) {
    puVar6 = param_3;
  }
  if (param_2 == 1) {
    puVar6 = (undefined4 *)0x98;
  }
  if (param_2 == 2) {
    puVar6 = (undefined4 *)0x94;
  }
  if (param_2 == 3) {
    puVar6 = (undefined4 *)0xa0;
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar5 = 6;
    puVar2 = param_3;
    do {
      uVar1 = *puVar2;
      *puVar2 = 0;
      *(undefined4 *)(((int)local_3c - (int)param_3) + (int)puVar2) = uVar1;
      puVar2 = puVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = (int)puVar6 >> 0x1f;
  if ((((uint)puVar6 ^ uVar4) - uVar4 & 7 ^ uVar4) != uVar4) {
    param_2 = 0;
    local_8 = (undefined4 *)0x0;
    local_c = &DAT_66311440;
    do {
      iVar5 = *local_c;
      if (param_2 < iVar5) {
        FUN_662fdfb0((int)local_24,(int)param_1,0,iVar5 * (int)puVar6,(uint)puVar6);
        FUN_662fdfb0((int)param_1,(int)param_1,iVar5 * (int)puVar6,(uint)local_8,(uint)puVar6);
        FUN_662fdfb0((int)param_1,(int)local_24,(uint)local_8,0,(uint)puVar6);
      }
      if ((param_3 != (undefined4 *)0x0) && (local_3c[param_2 >> 4] != 0)) {
        param_3[iVar5 >> 4] = param_3[iVar5 >> 4] | 1 << ((byte)iVar5 & 0xf);
      }
      local_c = local_c + 1;
      param_2 = param_2 + 1;
      local_8 = (undefined4 *)((int)local_8 + (int)puVar6);
    } while ((int)local_c < 0x663115c0);
    return;
  }
  uVar4 = (int)puVar6 >> 3;
  param_2 = 0;
  local_8 = param_1;
  local_c = &DAT_66311440;
  do {
    iVar5 = *local_c;
    if (param_2 < iVar5) {
      local_10 = (undefined4 *)((int)param_1 + iVar5 * uVar4);
      puVar6 = local_10;
      puVar2 = local_24;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar6 = local_8;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *local_10 = *puVar6;
        puVar6 = puVar6 + 1;
        local_10 = local_10 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)local_10 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      puVar6 = local_24;
      puVar2 = local_8;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    if ((param_3 != (undefined4 *)0x0) && (local_3c[param_2 >> 4] != 0)) {
      param_3[iVar5 >> 4] = param_3[iVar5 >> 4] | 1 << ((byte)iVar5 & 0xf);
    }
    local_c = local_c + 1;
    param_2 = param_2 + 1;
    local_8 = (undefined4 *)((int)local_8 + uVar4);
  } while ((int)local_c < 0x663115c0);
  return;
}


