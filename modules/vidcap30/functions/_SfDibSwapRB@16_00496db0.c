/* Module: vidcap30.exe
   Function: _SfDibSwapRB@16
   Address: 00496db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDibSwapRB_16(int *param_1,int *param_2,RECT *param_3,int param_4)

{
  ushort uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  tagRECT local_40;
  tagRECT local_30;
  int *local_20;
  int *local_1c;
  int *local_18;
  tagRECT *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x96db0  344  _SfDibSwapRB@16 */
  piVar3 = param_1;
  iVar4 = _SfGetPixelType_4(param_1);
  if (iVar4 < 0x17) {
    return 0x80004001;
  }
  if (0x20 < iVar4) {
    return 0x80004001;
  }
  piVar5 = param_2;
  if (param_2 != (int *)0x0) goto LAB_00496e1f;
  if (piVar3[4] == 0) {
    if (((piVar3[8] != 0) || (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00496e13;
    iVar9 = *piVar3 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar3[4] == 3) {
      piVar5 = piVar3 + 0xd;
      goto LAB_00496e1f;
    }
LAB_00496e13:
    iVar9 = *piVar3 + piVar3[8] * 4;
  }
  piVar5 = (int *)(iVar9 + (int)piVar3);
LAB_00496e1f:
  iVar9 = param_4;
  if (param_4 == 0) {
    uVar6 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
    iVar9 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  }
  SetRect(&local_30,0,0,piVar3[1],piVar3[2]);
  if (param_3 == (RECT *)0x0) {
    local_40.left = local_30.left;
    local_40.top = local_30.top;
    local_40.right = local_30.right;
    local_40.bottom = local_30.bottom;
  }
  else {
    IntersectRect(&local_40,&local_30,param_3);
  }
  iVar7 = _SfGetPixelBitsPerChannel_8(iVar4,&param_1);
  if (iVar7 == 0) {
    return 0x80070057;
  }
  local_10 = local_40.right - local_40.left;
  local_c = local_40.bottom - local_40.top;
  if ((local_10 < 1) || (local_c < 1)) {
    return 0;
  }
  pcVar2 = (code *)(&PTR_LAB_0059534c)[iVar4];
  if (pcVar2 == (code *)0x0) {
    return 0x80004001;
  }
  local_14 = &local_40;
  local_20 = piVar3;
  local_1c = piVar5;
  local_18 = piVar5;
  local_8 = iVar9;
  if (piVar3[8] != 0) {
    local_4 = *piVar3 + (int)piVar3;
    uVar8 = (*pcVar2)(&local_20);
    return uVar8;
  }
  local_4 = 0;
  uVar8 = (*pcVar2)(&local_20);
  return uVar8;
}


