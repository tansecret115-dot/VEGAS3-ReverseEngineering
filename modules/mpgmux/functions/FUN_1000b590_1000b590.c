/* Module: mpgmux.dll
   Function: FUN_1000b590
   Address: 1000b590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_1000b590(uint param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5,uint param_6,
            int param_7,byte param_8,byte param_9,byte *param_10,undefined4 param_11,byte param_12,
            uint param_13,uint param_14,uint param_15,uint param_16,char param_17,byte param_18,
            int param_19,int *param_20,int param_21,int param_22,int param_23)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte *local_c;
  int local_8;
  int local_4;
  
  uVar3 = param_1;
  if (param_20 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *param_20;
  }
  param_2[0x1000] = 0;
  param_2[0x1001] = 0;
  param_2[0x1002] = 0;
  param_2[0x1003] = 0;
  local_8 = 0;
  local_c = param_2;
  if (param_3 != (byte *)0x0) {
    uVar11 = ((*(int *)(param_1 + 0x2c) < 2) - 1 & 2) + 0xc;
    pbVar10 = param_2;
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar9 = uVar11 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar10 = *param_3;
      param_3 = param_3 + 1;
      pbVar10 = pbVar10 + 1;
    }
    local_c = param_2 + uVar11;
    *(uint *)(param_2 + 0x1000) = *(int *)(param_2 + 0x1000) + uVar11;
  }
  if (param_4 != (byte *)0x0) {
    uVar9 = 0x15;
    if ((param_18 & 1) == 0) {
      uVar9 = 0x12;
    }
    if ((param_18 & 2) == 0) {
      uVar9 = uVar9 - 3;
    }
    if ((param_18 & 4) == 0) {
      uVar9 = uVar9 - 3;
    }
    pbVar10 = local_c;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)param_4;
      param_4 = param_4 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar11 = uVar9 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar10 = *param_4;
      param_4 = param_4 + 1;
      pbVar10 = pbVar10 + 1;
    }
    local_c = local_c + uVar9;
    *(uint *)(param_2 + 0x1000) = *(int *)(param_2 + 0x1000) + uVar9;
  }
  *local_c = 0;
  local_c[1] = 0;
  local_c[2] = 1;
  local_c[3] = param_8;
  pbVar10 = local_c + 4;
  iVar1 = param_19;
  if (param_8 == 0xbe) {
    if (*(int *)(param_1 + 0x2c) < 2) {
      uVar9 = param_5 + 1;
    }
    else {
      uVar9 = param_5 + 3;
    }
    *pbVar10 = (byte)(uVar9 >> 8);
    local_c[5] = (byte)uVar9;
    pbVar10 = local_c + 6;
    if (*(int *)(param_1 + 0x2c) < 2) {
      *pbVar10 = 0xf;
      iVar4 = uVar9 - 1;
      local_c = local_c + 7;
      if (0 < iVar4) {
        do {
          *local_c = 0xff;
          local_c = local_c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      uVar11 = uVar9;
      local_c = pbVar10;
      if (0 < (int)uVar9) {
        do {
          *local_c = 0xff;
          local_c = local_c + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    goto joined_r0x1000bfcd;
  }
  if (param_5 == param_6) {
    param_1 = param_5;
    if ((param_8 == 0xbd) && ((param_9 == 0xa1 || (param_9 == 0xa2)))) {
      if (param_12 == 0) {
        param_5 = param_5 + 5;
        param_3 = (byte *)0x5;
      }
      else {
        param_5 = param_5 + 2;
        param_3 = (byte *)0x2;
      }
    }
    else {
      param_3 = (byte *)0x0;
    }
  }
  else {
    param_1 = param_6;
    if ((param_8 == 0xbd) && ((param_9 == 0xa1 || (param_9 == 0xa2)))) {
      param_5 = param_5 + 5;
    }
    param_3 = (byte *)(param_5 - param_6);
  }
  if ((param_23 == 0) || (iVar4 = *(int *)(uVar3 + 0x12c0), iVar4 == 0)) {
    iVar4 = 0;
  }
  else if (0 < iVar4) {
    puVar5 = (undefined1 *)(uVar3 + 0x14d0);
    do {
      *puVar5 = puVar5[-0x20c];
      puVar5 = puVar5 + 1;
    } while ((int)(puVar5 + (-0x14d0 - uVar3)) < iVar4);
  }
  local_c = pbVar10;
  if (local_4 < 0) {
    iVar13 = -local_4;
    local_4 = iVar13;
    iVar6 = (**(code **)(param_7 + 4))(param_7,iVar13);
    if (iVar6 == 0) goto LAB_1000b8e0;
    iVar6 = (**(code **)(param_7 + 0xc))(param_7,iVar4 + 0x14d0 + uVar3,iVar13);
    iVar12 = iVar4 + iVar6;
    if (iVar6 == iVar13) {
      *(undefined1 *)(iVar12 + 0x14d0 + uVar3) = 0;
      *(undefined1 *)(iVar12 + 0x14d1 + uVar3) = 0;
      *(undefined1 *)(iVar12 + 0x14d2 + uVar3) = 1;
      *(undefined1 *)(iVar12 + 0x14d3 + uVar3) = 0xb2;
      *(undefined1 *)(iVar12 + 0x14d4 + uVar3) = 0x10;
      *(undefined1 *)(iVar12 + 0x14d5 + uVar3) = 0xe;
      *(undefined1 *)(iVar12 + 0x14d6 + uVar3) = 0;
      *(undefined1 *)(iVar12 + 0x14d7 + uVar3) = 0x80;
      *(undefined1 *)(iVar12 + 0x14d8 + uVar3) = 0x80;
      *(undefined1 *)(iVar12 + 0x14d9 + uVar3) = 0;
      *(undefined1 *)(iVar12 + 0x14da + uVar3) = 0x80;
      *(undefined1 *)(iVar12 + 0x14db + uVar3) = 0x80;
      *(undefined1 *)(iVar12 + 0x14dc + uVar3) = 0;
      *(undefined1 *)(iVar12 + 0x14dd + uVar3) = 0x80;
      *(undefined1 *)(iVar12 + 0x14de + uVar3) = 0x80;
      *(undefined1 *)(iVar12 + 0x14df + uVar3) = 0;
      iVar4 = iVar12 + 0x12;
      *(undefined1 *)(iVar12 + 0x14e0 + uVar3) = 0x80;
      *(undefined1 *)(iVar12 + 0x14e1 + uVar3) = 0x80;
    }
    else {
      param_3 = param_3 + (param_1 - iVar6);
      iVar4 = iVar12;
    }
  }
  iVar6 = (**(code **)(param_7 + 4))(param_7,param_1 - iVar4);
  if (iVar6 == 0) {
LAB_1000b8e0:
    FUN_100050f0(uVar3,(byte *)s_Error_reading_from_an_input_file_10017a80);
    return 0x10;
  }
  iVar6 = (**(code **)(param_7 + 0xc))(param_7,iVar4 + 0x14d0 + uVar3,param_1 - iVar4);
  uVar9 = iVar4 + iVar6;
  if (uVar9 != param_1) {
    param_3 = param_3 + (param_1 - uVar9);
  }
  if ((param_22 != 0) && (4 < (int)param_3)) {
    *(undefined1 *)(uVar9 + 0x14d0 + uVar3) = 0;
    *(undefined1 *)(uVar9 + 0x14d1 + uVar3) = 0;
    *(undefined1 *)(uVar9 + 0x14d2 + uVar3) = 1;
    *(undefined1 *)(uVar9 + 0x14d3 + uVar3) = 0xb7;
    uVar9 = uVar9 + 4;
    param_3 = param_3 + -4;
  }
  param_1 = (uint)param_3;
  if (param_21 != 0) {
    iVar4 = 0;
    uVar11 = 0xffffffff;
    do {
      if ((int)uVar9 <= iVar4) {
        if (uVar11 != 0x1b8) goto LAB_1000b995;
        break;
      }
      uVar11 = uVar11 << 8 | (uint)*(byte *)(iVar4 + 0x14d0 + uVar3);
      iVar4 = iVar4 + 1;
    } while (uVar11 != 0x1b8);
    pbVar10 = (byte *)(iVar4 + 0x14d3 + uVar3);
    *pbVar10 = *pbVar10 | 0x20;
  }
LAB_1000b995:
  if (param_8 == 0xbd) {
    if ((param_9 == 0x81) || (param_9 == 0x82)) {
      uVar9 = uVar9 + 4;
    }
    else {
      uVar9 = uVar9 + 7;
    }
  }
  if ((int)param_3 < 7) {
    param_3 = (byte *)0x0;
  }
  else {
    param_1 = 0;
  }
  iVar4 = *(int *)(uVar3 + 0x2c);
  bVar8 = (byte)((uint)param_11 >> 8);
  if (iVar4 < 2) {
    if (param_17 == '\0') {
      if ((iVar4 == 1) && (param_8 == 0xe0)) {
        param_1 = param_1 + 9;
      }
      local_8 = 1;
    }
    else if (param_17 == '\x01') {
      if ((iVar4 == 1) && (param_8 == 0xe0)) {
        param_1 = param_1 + 5;
      }
      local_8 = 5;
    }
    else if (param_17 == '\x02') {
      local_8 = 10;
    }
    if (param_12 != 0) {
      local_8 = local_8 + 2;
    }
    iVar4 = param_1 + uVar9 + local_8;
    *local_c = (byte)((uint)iVar4 >> 8);
    local_c[1] = (byte)iVar4;
    local_c = local_c + 2;
    for (; param_1 != 0; param_1 = param_1 - 1) {
      *local_c = 0xff;
      local_c = local_c + 1;
    }
    if (param_12 != 0) {
      *local_c = ((byte)param_10 | 2) << 5 | bVar8;
      local_c[1] = (byte)param_11;
      local_c = local_c + 2;
    }
    if (param_17 != '\0') {
      if (param_17 == '\x01') {
        FUN_1000c280(uVar3,param_13,param_14,'\x02',(int *)&local_c);
        *(uint *)(param_2 + 0x1008) = param_13;
        *(uint *)(param_2 + 0x100c) = param_14;
        if ((*(int *)(uVar3 + 0x2c) == 1) && (param_8 == 0xe0)) {
          local_8 = local_8 + 5;
          goto LAB_1000be43;
        }
      }
      else if (param_17 == '\x02') {
        FUN_1000c280(uVar3,param_13,param_14,'\x03',(int *)&local_c);
        FUN_1000c280(uVar3,param_15,param_16,'\x01',(int *)&local_c);
        *(uint *)(param_2 + 0x1008) = param_15;
        *(uint *)(param_2 + 0x100c) = param_16;
      }
      goto LAB_1000bd21;
    }
    *local_c = 0xf;
    local_c = local_c + 1;
    if ((*(int *)(uVar3 + 0x2c) != 1) || (param_8 != 0xe0)) goto LAB_1000bd21;
    local_8 = local_8 + 9;
  }
  else {
    if (param_17 == '\x02') {
      local_8 = 5;
    }
    else if (param_17 == '\x03') {
      local_8 = 10;
    }
    if (param_12 != 0) {
      local_8 = local_8 + 3;
    }
    iVar4 = param_1 + 3 + uVar9 + local_8;
    *local_c = (byte)((uint)iVar4 >> 8);
    local_c[1] = (byte)iVar4;
    if (*(int *)(uVar3 + 0x2c) == 3) {
      local_c[2] = 0x81;
    }
    else {
      local_c[2] = 0x80;
    }
    if (param_17 == '\0') {
      local_c[3] = param_12;
    }
    else {
      local_c[3] = param_17 << 6 | param_12;
    }
    local_c[4] = (char)param_1 + (char)local_8;
    local_c = local_c + 5;
    if (param_17 == '\x02') {
      FUN_1000c280(uVar3,param_13,param_14,'\x02',(int *)&local_c);
      *(uint *)(param_2 + 0x1008) = param_13;
      *(uint *)(param_2 + 0x100c) = param_14;
    }
    else if (param_17 == '\x03') {
      FUN_1000c280(uVar3,param_13,param_14,'\x03',(int *)&local_c);
      FUN_1000c280(uVar3,param_15,param_16,'\x04',(int *)&local_c);
      *(uint *)(param_2 + 0x1008) = param_15;
      *(uint *)(param_2 + 0x100c) = param_16;
    }
    if (param_12 != 0) {
      *local_c = 0x1e;
      local_c[1] = ((byte)param_10 | 2) << 5 | bVar8;
      local_c[2] = (byte)param_11;
      local_c = local_c + 3;
    }
    if (0 < (int)param_1) {
      do {
        *local_c = 0xff;
        local_c = local_c + 1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
LAB_1000bd21:
    if (param_8 == 0xbd) {
      if ((param_9 == 0x81) || (param_9 == 0x82)) {
        *local_c = param_9;
        param_10 = local_c + 1;
        *param_10 = 0;
        local_c[2] = 0;
        local_c[3] = 0;
        local_c = local_c + 4;
        uVar9 = uVar9 - 4;
      }
      else {
        uVar9 = uVar9 - 7;
        *local_c = param_9;
        iVar6 = uVar9 - *(int *)(uVar3 + 0x2e9c);
        iVar4 = iVar6 / *(int *)(uVar3 + 0x2e98);
        if (iVar6 % *(int *)(uVar3 + 0x2e98) != 0) {
          iVar4 = iVar4 + 1;
        }
        local_c[1] = (byte)iVar4;
        local_c[2] = (byte)((uint)(*(int *)(uVar3 + 0x2e9c) + 4) >> 8);
        local_c[3] = *(char *)(uVar3 + 0x2e9c) + 4;
        local_c[4] = *(byte *)(uVar3 + 0x2eb0) & 0x1f | *(byte *)(uVar3 + 0x2ea0);
        local_c[5] = *(byte *)(uVar3 + 0x2ea4);
        local_c[6] = *(byte *)(uVar3 + 0x2ea8);
        local_c = local_c + 7;
        *(uint *)(uVar3 + 0x2e9c) =
             *(int *)(uVar3 + 0x2e9c) + (*(int *)(uVar3 + 0x2e98) * iVar4 - uVar9);
      }
    }
  }
LAB_1000be43:
  if (local_4 != 0) {
    *param_20 = (int)(local_c + (local_4 - (int)param_2));
  }
  pbVar10 = (byte *)(uVar3 + 0x14d0);
  pbVar7 = local_c;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar11 = uVar9 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pbVar7 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar7 = pbVar7 + 1;
  }
  if ((param_8 == 0xbd) && ((param_9 == 0x81 || (param_9 == 0x82)))) {
    iVar6 = 0;
    bVar2 = false;
    _param_12 = 0;
    iVar4 = 0;
    _param_12 = 0;
    if (0 < (int)uVar9) {
      do {
        if (bVar2) {
          if (bVar2) {
            if ((local_c[iVar4] == 0x77) && (iVar6 = iVar6 + 1, iVar6 == 1)) {
              _param_12 = iVar4;
            }
            bVar2 = false;
          }
        }
        else if (local_c[iVar4] == 0xb) {
          bVar2 = true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar9);
    }
    param_10[1] = (byte)((ushort)_param_12 >> 8);
    *param_10 = (byte)iVar6;
    param_10[2] = (byte)_param_12;
  }
  pbVar10 = local_c + uVar9;
  if (param_8 == 0xbd) {
    if ((param_9 == 0x81) || (param_9 == 0x82)) {
      param_5 = param_5 + 4;
      uVar9 = uVar9 + 4;
    }
    else {
      param_5 = param_5 + 7;
      uVar9 = uVar9 + 7;
    }
  }
  local_c = pbVar10;
  if (param_3 != (byte *)0x0) {
    *pbVar10 = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 1;
    pbVar10[3] = 0xbe;
    pbVar7 = param_3 + -6;
    pbVar10[4] = (byte)((uint)pbVar7 >> 8);
    pbVar10[5] = (char)param_3 - 6;
    local_c = pbVar10 + 6;
    if (*(int *)(uVar3 + 0x2c) < 2) {
      *local_c = 0xf;
      pbVar7 = param_3 + -7;
      local_c = pbVar10 + 7;
      if (0 < (int)pbVar7) {
        do {
          *local_c = 0xff;
          local_c = local_c + 1;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
    }
    else if (0 < (int)pbVar7) {
      do {
        *local_c = 0xff;
        local_c = local_c + 1;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
  }
joined_r0x1000bfcd:
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *local_c = 0;
    local_c = local_c + 1;
  }
  if (*(int *)(uVar3 + 0x2c) < 2) {
    if (local_8 != 0) {
      local_8 = local_8 + -1;
    }
    iVar1 = local_8 + param_5 + 7;
  }
  else {
    iVar1 = local_8 + param_5 + 9;
  }
  *(uint *)(param_2 + 0x1004) = uVar9;
  *(int *)(param_2 + 0x1000) = *(int *)(param_2 + 0x1000) + iVar1 + param_19;
  return 0;
}


