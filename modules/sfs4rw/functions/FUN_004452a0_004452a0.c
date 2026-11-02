/* Module: sfs4rw.dll
   Function: FUN_004452a0
   Address: 004452a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004452a0(int *param_1,int *param_2,RECT *param_3,int param_4)

{
  ushort uVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined3 extraout_var;
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
  
  piVar3 = param_1;
  iVar5 = FUN_0043f780((int)param_1);
  if (iVar5 < 0x17) {
    return 0x80004001;
  }
  if (0x20 < iVar5) {
    return 0x80004001;
  }
  piVar6 = param_2;
  if (param_2 != (int *)0x0) goto LAB_0044530f;
  if (piVar3[4] == 0) {
    if (((piVar3[8] != 0) || (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00445303;
    iVar9 = *piVar3 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar3[4] == 3) {
      piVar6 = piVar3 + 0xd;
      goto LAB_0044530f;
    }
LAB_00445303:
    iVar9 = *piVar3 + piVar3[8] * 4;
  }
  piVar6 = (int *)(iVar9 + (int)piVar3);
LAB_0044530f:
  iVar9 = param_4;
  if (param_4 == 0) {
    uVar7 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
    iVar9 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
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
  uVar4 = FUN_0043fa10(iVar5,(undefined1 *)&param_1);
  if (CONCAT31(extraout_var,uVar4) == 0) {
    return 0x80070057;
  }
  local_10 = local_40.right - local_40.left;
  local_c = local_40.bottom - local_40.top;
  if ((local_10 < 1) || (local_c < 1)) {
    return 0;
  }
  pcVar2 = *(code **)("DllUnregisterServer" + iVar5 * 4 + 8);
  if (pcVar2 == (code *)0x0) {
    return 0x80004001;
  }
  local_14 = &local_40;
  local_20 = piVar3;
  local_1c = piVar6;
  local_18 = piVar6;
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


