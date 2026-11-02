/* Module: sfcdi.dll
   Function: FUN_5bf0c620
   Address: 5bf0c620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0c620(int param_1,undefined1 *param_2,uint param_3)

{
  HANDLE hHandle;
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  uint local_44;
  undefined4 *local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 local_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_2[0x50] == '\0') {
    bVar4 = 0x10;
  }
  else {
    if (param_2[0x50] != '\x01') {
      return 0x80070057;
    }
    bVar4 = 8;
  }
  puVar5 = &local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)(param_2 + 8);
  puVar6 = local_20;
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  local_50._0_1_ = 2;
  local_50._1_1_ = '\0';
  local_50._2_1_ = *(undefined1 *)(param_1 + 8);
  hHandle = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  local_40 = *(undefined4 **)(param_1 + 0x14);
  local_48 = *param_2;
  local_44 = *(uint *)(param_2 + 0x4c);
  local_38 = SUB42(hHandle,0);
  uStack_36 = (undefined1)((uint)hHandle >> 0x10);
  uStack_35 = (undefined1)((uint)hHandle >> 0x18);
  local_50._3_1_ = bVar4 | 0x40;
  local_3b = (undefined1)param_3;
  local_4c = 0;
  local_47 = 0;
  local_46 = 0;
  local_3c = 0xe;
  local_3a = 0;
  local_39 = 0;
  if (local_40 != *(undefined4 **)(param_2 + 0x48)) {
    puVar5 = *(undefined4 **)(param_2 + 0x48);
    puVar6 = local_40;
    for (uVar2 = local_44 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = local_44 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  (*DAT_5bf631d0)(&local_50);
  if (local_50._1_1_ == '\0') {
    WaitForSingleObject(hHandle,0xffffffff);
  }
  CloseHandle(hHandle);
  *(uint *)(param_2 + 0x58) =
       ((CONCAT12(local_50._3_1_,CONCAT11(local_50._2_1_,local_50._1_1_)) & 0xff) << 8 |
       CONCAT21(local_38,local_39) & 0xff) << 8 | CONCAT11(local_39,local_3a) & 0xff;
  *(undefined4 *)(param_2 + 0x14) = uStack_10;
  *(undefined4 *)(param_2 + 0x18) = uStack_c;
  *(undefined4 *)(param_2 + 0x1c) = uStack_8;
  *(undefined4 *)(param_2 + 0x20) = uStack_4;
  if (local_50._1_1_ != '\x01') {
    return 0x80004005;
  }
  if (*(undefined4 **)(param_1 + 0x14) != *(undefined4 **)(param_2 + 0x48)) {
    uVar2 = *(uint *)(param_2 + 0x4c);
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    puVar6 = *(undefined4 **)(param_2 + 0x48);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return 0;
}


