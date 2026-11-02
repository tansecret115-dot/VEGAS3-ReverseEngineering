/* Module: vegas30k.dll
   Function: _SfDibLUT@24
   Address: 010e1a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfDibLUT_24(int *param_1,int *param_2,RECT *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_48 [4];
  tagRECT local_44;
  tagRECT local_34;
  int *local_24;
  int local_20;
  tagRECT *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xe1a00  863  _SfDibLUT@24 */
  iVar2 = _SfGetPixelType_4(param_1);
  if (iVar2 < 0x17) {
    return 0x80004001;
  }
  if (0x20 < iVar2) {
    return 0x80004001;
  }
  if (param_2 != (int *)0x0) goto LAB_010e1a6d;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_010e1a63;
    iVar4 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_010e1a6d;
    }
LAB_010e1a63:
    iVar4 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar4 + (int)param_1);
LAB_010e1a6d:
  if (param_4 == 0) {
    uVar3 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  SetRect(&local_34,0,0,param_1[1],param_1[2]);
  if (param_3 == (RECT *)0x0) {
    local_44.left = local_34.left;
    local_44.top = local_34.top;
    local_44.right = local_34.right;
    local_44.bottom = local_34.bottom;
  }
  else {
    IntersectRect(&local_44,&local_34,param_3);
  }
  iVar4 = _SfGetPixelBitsPerChannel_8(iVar2,local_48);
  if (iVar4 != 0) {
    local_18 = local_44.right - local_44.left;
    local_14 = local_44.bottom - local_44.top;
    if ((local_18 < 1) || (local_14 < 1)) {
      return 0;
    }
    if (*(code **)(&DAT_011e2e6c + iVar2 * 4) != (code *)0x0) {
      local_24 = param_1;
      local_20 = (int)param_2 +
                 ((int)((local_44.left * iVar4 >> 0x1f & 7U) + local_44.left * iVar4) >> 3) +
                 (param_1[2] - local_44.bottom) * param_4;
      local_1c = &local_44;
      if (param_1[8] == 0) {
        local_c = 0;
      }
      else {
        local_c = *param_1 + (int)param_1;
      }
      local_8 = param_5;
      local_4 = param_6;
      local_10 = param_4;
      uVar5 = (**(code **)(&DAT_011e2e6c + iVar2 * 4))(&local_24);
      return uVar5;
    }
  }
  return 0x80004001;
}


