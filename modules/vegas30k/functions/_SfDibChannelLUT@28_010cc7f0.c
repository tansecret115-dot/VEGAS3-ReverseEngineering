/* Module: vegas30k.dll
   Function: _SfDibChannelLUT@28
   Address: 010cc7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * _SfDibChannelLUT_28(int *param_1,int *param_2,RECT *param_3,int param_4,int param_5,
                         int param_6,int param_7)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  char cStack_55;
  tagRECT local_50;
  tagRECT local_40;
  int *local_30;
  int local_2c;
  tagRECT *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0xcc7f0  832  _SfDibChannelLUT@28 */
  iVar3 = _SfGetPixelType_4(param_1);
  if (iVar3 < 0x17) {
    return (int *)0x80004001;
  }
  if (0x20 < iVar3) {
    return (int *)0x80004001;
  }
  if (param_2 != (int *)0x0) goto LAB_010cc85d;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_010cc853;
    iVar6 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_010cc85d;
    }
LAB_010cc853:
    iVar6 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar6 + (int)param_1);
LAB_010cc85d:
  uVar4 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
  iVar6 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  SetRect(&local_40,0,0,param_1[1],param_1[2]);
  if (param_3 == (RECT *)0x0) {
    local_50.left = local_40.left;
    local_50.top = local_40.top;
    local_50.right = local_40.right;
    local_50.bottom = local_40.bottom;
  }
  else {
    IntersectRect(&local_50,&local_40,param_3);
  }
  iVar5 = _SfGetPixelBitsPerChannel_8(iVar3,&local_58);
  if (iVar5 != 0) {
    local_24 = local_50.right - local_50.left;
    local_20 = local_50.bottom - local_50.top;
    if ((local_24 < 1) || (local_20 < 1)) {
      return (int *)0x0;
    }
    pcVar2 = *(code **)(&DAT_011e2e14 + iVar3 * 4);
    if (pcVar2 != (code *)0x0) {
      local_30 = param_1;
      local_2c = (int)param_2 +
                 ((int)((local_50.left * iVar5 >> 0x1f & 7U) + local_50.left * iVar5) >> 3) +
                 (param_1[2] - local_50.bottom) * iVar6;
      local_28 = &local_50;
      if (param_1[8] == 0) {
        local_18 = 0;
      }
      else {
        local_18 = *param_1 + (int)param_1;
      }
      local_14 = param_4;
      local_1c = iVar6;
      if (param_4 == 0) {
        local_14 = _SfDibGetStockLUT_8(2,uStack_56);
      }
      param_1 = param_2;
      if (local_14 != 0) {
        local_10 = param_5;
        if (param_5 == 0) {
          local_10 = _SfDibGetStockLUT_8(2,uStack_57);
        }
        if (local_10 != 0) {
          local_c = param_6;
          if (param_6 == 0) {
            local_c = _SfDibGetStockLUT_8(2,local_58);
          }
          if (local_c != 0) {
            local_8 = 0;
            if (cStack_55 != '\0') {
              if (param_7 == 0) {
                local_8 = _SfDibGetStockLUT_8(2,cStack_55);
              }
              else {
                local_8 = param_7;
              }
            }
            param_1 = (int *)(*pcVar2)(&local_30);
            if ((param_7 == 0) && (cStack_55 != '\0')) {
              _SfDibReleaseStockLUT_8(2,cStack_55);
            }
          }
          if (param_6 == 0) {
            _SfDibReleaseStockLUT_8(2,local_58);
          }
        }
        if (param_5 == 0) {
          _SfDibReleaseStockLUT_8(2,uStack_57);
        }
      }
      if (param_4 == 0) {
        _SfDibReleaseStockLUT_8(2,uStack_56);
      }
      return param_1;
    }
  }
  return (int *)0x80004001;
}


