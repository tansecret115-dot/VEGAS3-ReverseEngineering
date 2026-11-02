/* Module: erv33260.dll
   Function: FUN_6708d4c0
   Address: 6708d4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl
FUN_6708d4c0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,char *param_5,byte *param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  byte *pbVar10;
  byte local_ac [64];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte abStack_4c [32];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  byte local_6;
  byte local_5;
  
  pbVar3 = param_3;
  local_5 = ~(byte)((uint)param_4 >> 2) & 1;
  local_6 = ~(byte)param_4 & 1;
  local_18 = (byte *)0x0;
  local_14 = (byte *)0x0;
  local_10 = (byte *)0x0;
  local_c = (byte *)0x0;
  local_1c = 0;
  if (local_5 == 0) {
    iVar2 = 4;
    pbVar4 = param_3 + ((int)(abStack_4c + (int)(param_2 + -(int)param_3)) - (int)param_2);
    pbVar10 = param_2 + -(int)param_3;
    do {
      uVar5 = *(undefined4 *)pbVar10;
      *(undefined4 *)(pbVar4 + -0x20) = uVar5;
      *(undefined4 *)(pbVar4 + -0x10) = uVar5;
      *(undefined4 *)pbVar4 = uVar5;
      *(undefined4 *)(pbVar4 + 0x10) = uVar5;
      pbVar4 = pbVar4 + 4;
      local_1c = (uint)pbVar10[1] + (uint)pbVar10[3] + (uint)pbVar10[2] + (uint)*pbVar10 + local_1c;
      iVar2 = iVar2 + -1;
      pbVar10 = pbVar10 + 4;
    } while (iVar2 != 0);
  }
  else {
    local_14 = (byte *)0xffffffff;
  }
  iVar2 = local_1c;
  if (local_6 == 0) {
    pbVar4 = local_ac + 1;
    iVar7 = 0x10;
    pbVar10 = param_2 + -1;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + (int)param_3;
      pbVar4[-1] = bVar1;
      *pbVar4 = bVar1;
      pbVar4[1] = bVar1;
      pbVar4[2] = bVar1;
      pbVar4 = pbVar4 + 4;
      iVar2 = iVar2 + (uint)bVar1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    local_10 = (byte *)0xffffffff;
  }
  if (local_5 == 0) {
LAB_6708d5a9:
    if (local_6 != 0) goto LAB_6708d5ad;
  }
  else {
    if (local_6 != 0) {
      uVar9 = 0x80;
      goto LAB_6708d5b5;
    }
    if (local_5 == 0) goto LAB_6708d5a9;
LAB_6708d5ad:
    iVar2 = iVar2 << 1;
  }
  uVar9 = (undefined1)(iVar2 + 0x10U >> 5);
LAB_6708d5b5:
  local_2c = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
  local_28 = local_2c;
  local_24 = local_2c;
  local_20 = local_2c;
  if ((local_5 == 0) && (local_6 == 0)) {
    FUN_6708d9c0(param_4,(int)param_2,(int)param_3,(int)param_6);
  }
  else {
    local_c = (byte *)0xffffffff;
  }
  uVar8 = 0;
  param_3 = param_1;
  param_4 = param_6;
  pbVar10 = param_6;
  do {
    if ((uVar8 & 3) == 0) {
      param_2 = param_4;
      pbVar10 = param_3;
    }
    iVar2 = FUN_6708c700(pbVar10,(int)pbVar3,(byte *)&local_2c,4);
    local_18 = local_18 + iVar2;
    if (local_5 == 0) {
      iVar2 = FUN_6708c700(pbVar10,(int)pbVar3,(byte *)(&local_6c + (uVar8 & 3)),0x10);
      local_14 = local_14 + iVar2;
    }
    if (local_6 == 0) {
      iVar2 = FUN_6708c700(pbVar10,(int)pbVar3,local_ac + (uVar8 >> 2) * 0x10,4);
      local_10 = local_10 + iVar2;
    }
    if ((local_5 == 0) && (local_6 == 0)) {
      iVar2 = FUN_6708c700(pbVar10,(int)pbVar3,param_2,0x10);
      local_c = local_c + iVar2;
    }
    param_2 = param_2 + 4;
    pbVar10 = pbVar10 + 4;
    uVar8 = uVar8 + 1;
    param_4 = param_4 + 0x10;
    param_3 = param_3 + (int)pbVar3;
  } while (uVar8 < 0x10);
  param_4._0_1_ = local_14 < local_18;
  if ((bool)(char)param_4) {
    local_18 = local_14;
  }
  param_2 = local_18;
  if (local_10 < local_18) {
    param_2 = local_10;
    param_4._0_1_ = '\x02';
  }
  if (local_c < param_2) {
    param_2 = local_c;
    param_4._0_1_ = '\x03';
  }
  if ((char)param_4 == '\0') {
    uVar6 = CONCAT11((char)local_2c,(char)local_2c);
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)param_6 = CONCAT22(uVar6,uVar6);
      param_6 = param_6 + 4;
    }
  }
  else {
    if ((char)param_4 == '\x01') {
      *(undefined4 *)param_6 = local_6c;
      *(undefined4 *)(param_6 + 4) = local_68;
      *(undefined4 *)(param_6 + 8) = local_64;
      *(undefined4 *)(param_6 + 0xc) = local_60;
      pbVar3 = param_6 + 0x10;
      for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pbVar3 = *(undefined4 *)param_6;
        param_6 = param_6 + 4;
        pbVar3 = pbVar3 + 4;
      }
      *param_5 = '\x01';
      return (uint)param_2;
    }
    if ((char)param_4 == '\x02') {
      pbVar3 = local_ac;
      iVar2 = 0x10;
      do {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 4;
        uVar6 = CONCAT11(bVar1,bVar1);
        uVar5 = CONCAT22(uVar6,uVar6);
        iVar2 = iVar2 + -1;
        *(undefined4 *)param_6 = uVar5;
        *(undefined4 *)(param_6 + 4) = uVar5;
        *(undefined4 *)(param_6 + 8) = uVar5;
        *(undefined4 *)(param_6 + 0xc) = uVar5;
        param_6 = param_6 + 0x10;
      } while (iVar2 != 0);
      *param_5 = '\x02';
      return (uint)param_2;
    }
  }
  *param_5 = (char)param_4;
  return (uint)param_2;
}


