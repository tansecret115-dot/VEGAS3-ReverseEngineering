/* Module: qt4plug.dll
   Function: FUN_5f525f30
   Address: 5f525f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f525f30(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined1 local_30 [48];
  
  uVar4 = 0x80004005;
  FUN_5f525c00(local_30,param_1);
  while( true ) {
    iVar1 = FUN_5f525d00(local_30,&local_50,0x18);
    local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
    if ((iVar1 < 0) || (local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38), local_50 != 1))
    goto LAB_5f52625f;
    iVar1 = FUN_5f525cd0(local_30,(undefined1 *)&local_4c,8);
    local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
    if (iVar1 < 0) goto LAB_5f52625f;
    uVar2 = local_4c & 0xff;
    if (uVar2 == 0xb3) break;
    if (uVar2 == 0xba) {
      iVar1 = FUN_5f525c70(local_30,&local_48,2);
      local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
      if (iVar1 < 0) goto LAB_5f52625f;
      FUN_5f525ed0(local_30,&local_40);
      if (local_48 == 0) {
        bVar5 = 0xffffffc1 < local_40;
        local_40 = local_40 + 0x3e;
      }
      else {
        bVar5 = 0xffffffb1 < local_40;
        local_40 = local_40 + 0x4e;
      }
      local_3c = local_3c + (uint)bVar5;
      FUN_5f525ef0(local_30,local_40,local_3c);
    }
    else {
      if (uVar2 == 0xe0) {
        iVar1 = FUN_5f525ca0(local_30,(undefined2 *)&local_48,0x10);
        local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
        if (-1 < iVar1) {
          FUN_5f525ed0(local_30,(undefined4 *)&local_38);
          lVar6 = __allmul(local_48 & 0xffff,0,8,0);
          local_38 = lVar6 + CONCAT44(local_38._4_4_,(undefined4)local_38);
          iVar1 = FUN_5f525cd0(local_30,(undefined1 *)&param_1,8);
          if (-1 < iVar1) {
            goto joined_r0x5f5260ca;
          }
        }
        goto LAB_5f52625f;
      }
      local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
      if ((byte)local_4c < 0xbb) goto LAB_5f52625f;
      iVar1 = FUN_5f525ca0(local_30,(undefined2 *)&param_1,0x10);
      local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
      if (iVar1 < 0) goto LAB_5f52625f;
      FUN_5f525ed0(local_30,&local_40);
      uVar2 = (param_1 & 0xffff) * 8;
      FUN_5f525ef0(local_30,uVar2 + local_40,local_3c + (uint)CARRY4(uVar2,local_40));
    }
  }
  local_40 = 0;
  local_3c = 0;
  uVar4 = 0;
  local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
LAB_5f52625f:
  FUN_5f525c30((int)local_30);
  return uVar4;
joined_r0x5f5260ca:
  if ((char)param_1 != -1) goto LAB_5f5260eb;
  iVar1 = FUN_5f525cd0(local_30,(undefined1 *)&param_1,8);
  if (iVar1 < 0) goto LAB_5f52625f;
  goto joined_r0x5f5260ca;
LAB_5f5260eb:
  FUN_5f525ed0(local_30,&local_40);
  FUN_5f525ef0(local_30,local_40 - 8,local_3c - (uint)(local_40 < 8));
  iVar1 = FUN_5f525cd0(local_30,(undefined1 *)&param_1,2);
  if (-1 < iVar1) {
    if ((char)param_1 == '\x02') {
      FUN_5f525ed0(local_30,&local_40);
      FUN_5f525ef0(local_30,local_40 + 0xe,local_3c + (uint)(0xfffffff1 < local_40));
      iVar1 = FUN_5f525cd0(local_30,(undefined1 *)&local_44,8);
      if (iVar1 < 0) goto LAB_5f52625f;
      FUN_5f525ed0(local_30,&local_40);
      uVar2 = (local_44 & 0xff) * 8;
      bVar5 = CARRY4(local_40,uVar2);
      local_40 = local_40 + uVar2;
      local_3c = local_3c + (uint)bVar5;
    }
    else {
      if ((char)param_1 == '\x01') {
        FUN_5f525ed0(local_30,&local_40);
        iVar3 = local_40 + 0xe;
        iVar1 = local_3c + (uint)(0xfffffff1 < local_40);
      }
      else {
        FUN_5f525ed0(local_30,&local_40);
        iVar3 = local_40 - 2;
        iVar1 = local_3c - (uint)(local_40 < 2);
      }
      FUN_5f525ef0(local_30,iVar3,iVar1);
      iVar1 = FUN_5f525cd0(local_30,(undefined1 *)&param_1,4);
      if (iVar1 < 0) {
        FUN_5f525c30((int)local_30);
        return 0x80004005;
      }
      FUN_5f525ed0(local_30,&local_40);
      if ((char)param_1 == '\x02') {
        bVar5 = 0xffffffdb < local_40;
        local_40 = local_40 + 0x24;
      }
      else if ((char)param_1 == '\x03') {
        bVar5 = 0xffffffb3 < local_40;
        local_40 = local_40 + 0x4c;
      }
      else {
        if ((char)param_1 != '\0') goto LAB_5f52625f;
        bVar5 = 0xfffffffb < local_40;
        local_40 = local_40 + 4;
      }
      local_3c = local_3c + (uint)bVar5;
    }
    FUN_5f525ef0(local_30,local_40,local_3c);
    uVar4 = 0;
    FUN_5f525ef0(local_30,(undefined4)local_38,local_38._4_4_);
  }
  goto LAB_5f52625f;
}


