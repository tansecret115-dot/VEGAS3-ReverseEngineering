/* Module: vegas30k.dll
   Function: _DibPreparePluginParam@48
   Address: 0109ac70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_DibPreparePluginParam_48
          (int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
          int param_7,undefined4 param_8,int param_9,int param_10,undefined4 *param_11,
          undefined4 *param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x9ac70  632  _DibPreparePluginParam@48 */
  if (((param_2 == 0) || (param_6 == 0)) || (param_1 == (int *)0x0)) {
    return (undefined1 *)0x80004003;
  }
  *param_11 = 0;
  *param_12 = 0;
  piVar7 = param_1;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  iVar3 = _SfGetPixelType_4(param_6);
  local_24 = _SfGetPixelType_4(param_2);
  if (iVar3 != local_24) {
    return &DAT_80070057;
  }
  if ((iVar3 == 0x1c) || (iVar3 == 0x1d)) {
    if (iVar3 != 0x20) {
      *param_11 = 0;
      goto LAB_0109ad18;
    }
  }
  else if (iVar3 != 0x20) {
    return &DAT_80070057;
  }
  *param_11 = 1;
LAB_0109ad18:
  if (param_9 == 0) {
    uVar1 = (uint)*(ushort *)(param_6 + 0xe) * *(int *)(param_6 + 4) + 0x1f;
    param_9 = (int)((uVar1 & 0xffffffe0) + ((int)uVar1 >> 0x1f & 7U)) >> 3;
  }
  if (param_5 == 0) {
    uVar1 = (uint)*(ushort *)(param_2 + 0xe) * *(int *)(param_2 + 4) + 0x1f;
    param_5 = (int)((uVar1 & 0xffffffe0) + ((int)uVar1 >> 0x1f & 7U)) >> 3;
  }
  _SfDibPrepareRects_28(param_2,&local_20,param_4,param_6,&local_10,param_8,param_1 + 0x10);
  local_8 = local_8 - local_10;
  local_c = local_4 - local_c;
  if ((local_8 < 1) || (local_c < 1)) {
    *param_12 = 1;
    return (undefined1 *)0x0;
  }
  iVar5 = local_18 - local_20;
  iVar6 = local_14 - local_1c;
  if ((iVar5 < 1) || (iVar6 < 1)) {
    *param_12 = 1;
    return (undefined1 *)0x0;
  }
  if ((local_8 == iVar5) && (local_c == iVar6)) {
    iVar3 = _SfGetPixelBitsPerChannel_8(iVar3,local_28);
    iVar2 = _SfGetPixelBitsPerChannel_8(local_24,local_28);
    *param_1 = param_2;
    uVar1 = iVar2 * local_20;
    param_1[1] = param_3;
    uVar4 = uVar1 & 0x80000007;
    param_1[2] = ((int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3) +
                 param_3 + (*(int *)(param_2 + 8) - local_14) * param_5;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    param_1[3] = uVar4;
    param_1[6] = iVar6;
    param_1[4] = (int)&local_20;
    param_1[5] = iVar5;
    uVar1 = iVar3 * local_10;
    param_1[7] = param_5;
    param_1[8] = param_6;
    param_1[9] = param_7;
    uVar4 = uVar1 & 0x80000007;
    param_1[10] = ((int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3) +
                  param_7 + (*(int *)(param_6 + 8) - local_4) * param_9;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    param_1[0xb] = uVar4;
    param_1[0xc] = (int)&local_10;
    param_1[0xd] = local_8;
    param_1[0xe] = local_c;
    param_1[0xf] = param_9;
    param_1[0x14] = param_10;
    return (undefined1 *)0x0;
  }
  return &DAT_80070057;
}


