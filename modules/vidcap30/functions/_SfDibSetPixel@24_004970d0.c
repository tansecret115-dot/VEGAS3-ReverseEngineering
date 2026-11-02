/* Module: vidcap30.exe
   Function: _SfDibSetPixel@24
   Address: 004970d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfDibSetPixel_24(int *param_1,int *param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_c0 [4];
  undefined1 local_bc [16];
  code *local_ac;
  undefined4 local_80;
  undefined4 local_7c;
  int local_58;
  uint local_54;
  int local_30;
  
                    /* 0x970d0  340  _SfDibSetPixel@24 */
  iVar2 = _SfGetPixelType_4(param_1);
  if ((iVar2 < 0x10) || (0x20 < iVar2)) {
    return 0x80004001;
  }
  if ((((param_4 < 0) || (param_1[1] <= param_4)) || (param_5 < 0)) || (param_1[2] <= param_5)) {
    return 0x80070057;
  }
  if (param_2 != (int *)0x0) goto LAB_00497177;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0049716d;
    iVar4 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_00497177;
    }
LAB_0049716d:
    iVar4 = param_1[8];
  }
  param_2 = (int *)(*param_1 + iVar4 * 4 + (int)param_1);
LAB_00497177:
  if (param_3 == 0) {
    uVar3 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_3 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  iVar4 = _SfGetPixelBitsPerChannel_8(iVar2,local_c0);
  _SfXCHGGetFunctionPointers_20(iVar2,iVar2,0x13,local_bc,0);
  local_30 = *param_1 + (int)param_1;
  local_54 = iVar4 * param_4;
  local_58 = (int)param_2 +
             ((int)(local_54 + ((int)local_54 >> 0x1f & 7U)) >> 3) +
             ((param_1[2] - param_5) + -1) * param_3;
  local_54 = local_54 & 0x80000007;
  if ((int)local_54 < 0) {
    local_54 = (local_54 - 1 | 0xfffffff8) + 1;
  }
  local_80 = *param_6;
  local_7c = param_6[1];
  (*local_ac)(local_bc);
  return 0;
}


