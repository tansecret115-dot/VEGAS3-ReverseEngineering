/* Module: vegas30k.dll
   Function: _SfDibComposite@40
   Address: 010df970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfDibComposite_40(int *param_1,int *param_2,uint *param_3,int param_4,int *param_5,int *param_6,
                  uint *param_7,int param_8,int param_9,uint param_10)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
                    /* 0xdf970  836  _SfDibComposite@40 */
  uVar6 = param_10 & 0x1000000;
  iVar4 = *(int *)(param_9 + 4);
  iVar7 = (-(uint)(uVar6 != 0) & 0x3fff) + 1;
  if (param_3 == (uint *)0x0) {
    local_30 = 0;
    local_2c = 0;
    local_28 = param_1[1] * iVar7;
    local_24 = param_1[2] * iVar7;
  }
  else {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_24 = param_3[3];
  }
  if (param_7 == (uint *)0x0) {
    local_40 = 0;
    local_3c = 0;
    local_38 = param_5[1] * iVar7;
    local_34 = param_5[2] * iVar7;
  }
  else {
    local_40 = *param_7;
    local_38 = param_7[2];
    local_34 = param_7[3];
    local_3c = param_7[1];
  }
  if ((local_28 - local_30 == local_38 - local_40) && (local_24 - local_2c == local_34 - local_3c))
  {
    if ((uVar6 != 0) &&
       (((local_3c | local_34 | local_2c | local_24 | local_40 | local_38 | local_30 | local_28) &
        0x3fff) == 0)) {
      local_2c = (int)(local_2c + ((int)local_2c >> 0x1f & 0x3fffU)) >> 0xe;
      local_24 = (int)(local_24 + ((int)local_24 >> 0x1f & 0x3fffU)) >> 0xe;
      local_30 = (int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe;
      local_28 = (int)(local_28 + ((int)local_28 >> 0x1f & 0x3fffU)) >> 0xe;
      local_3c = (int)(local_3c + ((int)local_3c >> 0x1f & 0x3fffU)) >> 0xe;
      local_34 = (int)(local_34 + ((int)local_34 >> 0x1f & 0x3fffU)) >> 0xe;
      local_40 = (int)(local_40 + ((int)local_40 >> 0x1f & 0x3fffU)) >> 0xe;
      local_38 = (int)(local_38 + ((int)local_38 >> 0x1f & 0x3fffU)) >> 0xe;
      param_10 = param_10 & 0xfeffffff;
    }
  }
  else if (uVar6 == 0) {
    local_40 = local_40 << 0xe;
    local_2c = local_2c << 0xe;
    local_3c = local_3c << 0xe;
    local_38 = local_38 << 0xe;
    local_34 = local_34 << 0xe;
    local_30 = local_30 << 0xe;
    local_28 = local_28 << 0xe;
    local_24 = local_24 << 0xe;
    param_10 = param_10 | 0x1000000;
  }
  iVar7 = _SfGetPixelType_4(param_5);
  iVar2 = _SfGetPixelType_4(param_1);
  iVar3 = _SfGetPixelBitsPerChannel_8(iVar7,&param_7);
  if (iVar4 == -1) {
    if (*(int *)(param_9 + 0xc) == 0) {
      return &DAT_80070057;
    }
    if (iVar7 == 0x20) {
      return (undefined1 *)0x80004001;
    }
  }
  iVar4 = param_8;
  if (param_8 == 0) {
    uVar6 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
    iVar4 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  }
  if (param_4 == 0) {
    uVar6 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  }
  local_14 = param_5[2];
  local_18 = param_5[1];
  local_4 = param_1[2];
  local_8 = param_1[1];
  local_20 = 0;
  local_1c = 0;
  local_10 = 0;
  local_c = 0;
  if ((param_10 & 0x1000000) == 0) {
LAB_010dfd83:
    if ((((iVar7 != 0x1d) && (iVar7 != 0x1c)) || ((iVar2 != 0x1d && (iVar2 != 0x1c)))) &&
       ((iVar7 != 0x20 || (iVar2 != 0x20)))) {
LAB_010dfda0:
      return &DAT_80070057;
    }
    if (param_6 == (int *)0x0) {
      if (param_5[4] == 0) {
        if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_010dfdeb;
        iVar7 = *param_5 + (1 << ((byte)uVar1 & 0x1f)) * 4;
      }
      else {
        if (param_5[4] == 3) {
          param_6 = param_5 + 0xd;
          goto LAB_010dfdf5;
        }
LAB_010dfdeb:
        iVar7 = *param_5 + param_5[8] * 4;
      }
      param_6 = (int *)(iVar7 + (int)param_5);
    }
LAB_010dfdf5:
    if (param_2 != (int *)0x0) goto LAB_010dfe41;
    if (param_1[4] == 0) {
      if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_010dfe35;
      iVar7 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_1[4] == 3) {
        param_2 = param_1 + 0xd;
        goto LAB_010dfe41;
      }
LAB_010dfe35:
      iVar7 = *param_1 + param_1[8] * 4;
    }
    param_2 = (int *)(iVar7 + (int)param_1);
LAB_010dfe41:
    puVar5 = (undefined1 *)
             _SfDibCompositeUnscaled_44
                       ((int *)((local_4 + -1) * param_4 + (int)param_2),&local_10,-param_4,
                        &local_30,(int *)((local_14 + -1) * iVar4 + (int)param_6),&local_20,-iVar4,
                        &local_40,(int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3,param_9,3);
    return puVar5;
  }
  if (((iVar7 != 0x1d) && (iVar7 != 0x1c)) || ((iVar2 != 0x1d && (iVar2 != 0x1c)))) {
    if (iVar7 != 0x20) goto LAB_010dfd83;
    if (iVar2 != 0x20) goto LAB_010dfda0;
  }
  if (param_6 == (int *)0x0) {
    if (param_5[4] == 0) {
      if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_010dfcd0;
      iVar7 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (param_5[4] == 3) {
        param_6 = param_5 + 0xd;
        goto LAB_010dfcda;
      }
LAB_010dfcd0:
      iVar7 = param_5[8];
    }
    param_6 = (int *)(*param_5 + iVar7 * 4 + (int)param_5);
  }
LAB_010dfcda:
  if (param_2 != (int *)0x0) goto LAB_010dfd21;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_010dfd15;
    iVar7 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_010dfd21;
    }
LAB_010dfd15:
    iVar7 = param_1[8];
  }
  param_2 = (int *)(*param_1 + iVar7 * 4 + (int)param_1);
LAB_010dfd21:
  puVar5 = (undefined1 *)
           _SfDibCompositeSP_44
                     ((int *)((local_4 + -1) * param_4 + (int)param_2),&local_10,-param_4,&local_30,
                      (int *)((local_14 + -1) * iVar4 + (int)param_6),&local_20,-iVar4,&local_40,
                      (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3,param_9,param_10);
  return puVar5;
}


