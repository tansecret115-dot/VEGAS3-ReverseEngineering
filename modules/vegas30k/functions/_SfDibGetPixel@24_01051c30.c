/* Module: vegas30k.dll
   Function: _SfDibGetPixel@24
   Address: 01051c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDibGetPixel_24(int *param_1,int *param_2,int param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_c0 [4];
  undefined1 local_bc [12];
  code *local_b0;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_60;
  uint local_5c;
  int local_30;
  
                    /* 0x51c30  858  _SfDibGetPixel@24 */
  iVar2 = _SfGetPixelType_4(param_1);
  if (((((iVar2 < 0x10) || (0x20 < iVar2)) || (param_4 < 0)) ||
      ((param_1[1] <= param_4 || ((int)param_5 < 0)))) || (param_1[2] <= (int)param_5)) {
    return 0x80004001;
  }
  if (param_2 != (int *)0x0) goto LAB_01051cd7;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_01051ccd;
    iVar4 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_01051cd7;
    }
LAB_01051ccd:
    iVar4 = param_1[8];
  }
  param_2 = (int *)(*param_1 + iVar4 * 4 + (int)param_1);
LAB_01051cd7:
  if (param_3 == 0) {
    uVar3 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_3 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  iVar4 = _SfGetPixelBitsPerChannel_8(iVar2,local_c0);
  _SfXCHGGetFunctionPointers_20(iVar2,iVar2,0x13,local_bc,0);
  local_30 = *param_1 + (int)param_1;
  local_5c = iVar4 * param_4;
  local_60 = (int)param_2 +
             ((int)(local_5c + ((int)local_5c >> 0x1f & 7U)) >> 3) +
             ((param_1[2] - (int)param_5) + -1) * param_3;
  local_5c = local_5c & 0x80000007;
  if ((int)local_5c < 0) {
    local_5c = (local_5c - 1 | 0xfffffff8) + 1;
  }
  (*local_b0)(local_bc);
  *param_5 = uStack_84;
  param_5[1] = uStack_80;
  return 0;
}


