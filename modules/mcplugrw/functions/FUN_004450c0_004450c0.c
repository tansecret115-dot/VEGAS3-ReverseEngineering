/* Module: mcplugrw.dll
   Function: FUN_004450c0
   Address: 004450c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004450c0(int *param_1,int *param_2,RECT *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  ushort uVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  int iVar8;
  tagRECT local_48;
  tagRECT local_38;
  int *local_28;
  int *local_24;
  int *local_20;
  tagRECT *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = param_1;
  iVar4 = FUN_0043f800((int)param_1);
  if (iVar4 < 0x17) {
    return 0x80004001;
  }
  if (0x20 < iVar4) {
    return 0x80004001;
  }
  piVar5 = param_2;
  if (param_2 != (int *)0x0) goto LAB_0044512f;
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00445123;
    iVar8 = *piVar2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar2[4] == 3) {
      piVar5 = piVar2 + 0xd;
      goto LAB_0044512f;
    }
LAB_00445123:
    iVar8 = *piVar2 + piVar2[8] * 4;
  }
  piVar5 = (int *)(iVar8 + (int)piVar2);
LAB_0044512f:
  iVar8 = param_4;
  if (param_4 == 0) {
    uVar6 = (uint)*(ushort *)((int)piVar2 + 0xe) * piVar2[1] + 0x1f;
    iVar8 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  }
  SetRect(&local_38,0,0,piVar2[1],piVar2[2]);
  if (param_3 == (RECT *)0x0) {
    local_48.left = local_38.left;
    local_48.top = local_38.top;
    local_48.right = local_38.right;
    local_48.bottom = local_38.bottom;
  }
  else {
    IntersectRect(&local_48,&local_38,param_3);
  }
  uVar3 = FUN_0043fa90(iVar4,(undefined1 *)&param_1);
  if (CONCAT31(extraout_var,uVar3) != 0) {
    local_18 = local_48.right - local_48.left;
    local_14 = local_48.bottom - local_48.top;
    if ((0 < local_18) && (0 < local_14)) {
      if (*(code **)("\\VarFileInfo\\Translation" + iVar4 * 4 + 0x10) == (code *)0x0) {
        return 0x80004001;
      }
      local_1c = &local_48;
      local_28 = piVar2;
      if (piVar2[8] == 0) {
        local_c = 0;
      }
      else {
        local_c = *piVar2 + (int)piVar2;
      }
      local_8 = param_5;
      local_4 = param_6;
      local_24 = piVar5;
      local_20 = piVar5;
      local_10 = iVar8;
      uVar7 = (**(code **)("\\VarFileInfo\\Translation" + iVar4 * 4 + 0x10))(&local_28);
      return uVar7;
    }
    return 0;
  }
  return 0x80070057;
}


