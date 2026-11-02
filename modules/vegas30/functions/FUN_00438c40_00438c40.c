/* Module: vegas30.exe
   Function: FUN_00438c40
   Address: 00438c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00438c40(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulong uVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [6];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  if (DAT_00647808 == 0) {
    uVar1 = FUN_00458200(DAT_00647630,param_1);
    return uVar1;
  }
  puVar3 = &DAT_0064b110;
  puVar4 = local_30;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_34 = 0;
  lVar5 = 0;
  local_40 = 0;
  local_3c = 0;
  if (DAT_00647808 == 1) {
    local_48 = 1;
    local_44 = 0;
    FUN_00438f10(1,&local_48,&local_44,&local_40);
    local_30[2] = 0;
    local_30[3] = 0x403e0000;
    local_30[0] = 6;
    switch(local_48) {
    case 1:
      local_30[2] = 0;
      local_30[3] = 0x403e0000;
      local_30[0] = 7;
      break;
    case 2:
      local_30[2] = 0xe2556b28;
      local_30[3] = 0x403df853;
      local_30[0] = 8;
      break;
    case 3:
      local_30[2] = 0;
      local_30[3] = 0x40390000;
      local_30[0] = 9;
      break;
    case 4:
      local_30[2] = 0;
      local_30[3] = 0x40380000;
      local_30[0] = 10;
      break;
    case 5:
      local_30[2] = 0xe2556b28;
      local_30[3] = 0x403df853;
      local_30[0] = 6;
    }
    uVar6 = 1;
  }
  else {
    if (DAT_00647808 != 2) {
      if (DAT_00647808 == 3) {
        local_c = 0x18;
        local_30[0] = 5;
        local_18 = 0;
        local_14 = 0;
        lVar5 = Transport_GetPosEx(8);
      }
      goto LAB_00438eb8;
    }
    local_48 = 1;
    local_44 = 0;
    FUN_00438f10(2,&local_48,&local_44,&local_40);
    local_30[3] = 0x403e0000;
    local_30[0] = 6;
    switch(local_48) {
    case 1:
      local_30[2] = 0;
      local_30[3] = 0x403e0000;
      local_30[0] = 7;
      uVar6 = 2;
      break;
    case 2:
      local_30[2] = 0xe2556b28;
      local_30[3] = 0x403df853;
      local_30[0] = 8;
      uVar6 = 2;
      break;
    case 3:
      local_30[2] = 0;
      local_30[3] = 0x40390000;
      local_30[0] = 9;
      uVar6 = 2;
      break;
    case 4:
      local_30[3] = 0x40380000;
      local_30[0] = 10;
    default:
      local_30[2] = 0;
      uVar6 = 2;
      break;
    case 5:
      local_30[2] = 0xe2556b28;
      local_30[3] = 0x403df853;
      local_30[0] = 6;
      uVar6 = 2;
    }
  }
  local_14 = 0;
  local_18 = 0;
  lVar5 = Transport_GetPosEx(uVar6);
  local_40 = 0;
  local_3c = 0;
LAB_00438eb8:
  local_34 = (undefined4)((ulonglong)lVar5 >> 0x20);
  _SfNanoTimeToText_20(param_1,local_30,lVar5 + CONCAT44(local_3c,local_40),0);
  return (int)lVar5;
}


