/* Module: vegas30.exe
   Function: FUN_00581800
   Address: 00581800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00581800(int param_1,HDC param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  int local_178;
  int local_174;
  RECT local_164;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  uint local_144;
  tagRECT local_140;
  tagMENUITEMINFOA local_130 [6];
  
  iVar6 = param_3[1];
  local_164.right = param_3[2];
  iVar1 = param_3[3];
  iVar2 = *(int *)(param_4 + 0x2c);
  if ((*(uint *)(iVar2 + 0x10) & 0x800) != 0) {
    return;
  }
  uVar3 = *(uint *)(param_4 + 0x10);
  local_178 = 0;
  local_144 = uVar3 & 2;
  uVar8 = uVar3 & 1;
  iVar4 = iVar1 - iVar6;
  local_174 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) <= iVar4) {
    local_174 = iVar4;
  }
  if (iVar4 < *(int *)(param_1 + 0x3c)) {
    iVar4 = *(int *)(param_1 + 0x3c);
  }
  SetRect(&local_140,*param_3,iVar6,*param_3 + local_174,iVar4 + iVar6);
  OffsetRect(&local_140,0,((local_140.top - local_140.bottom) - iVar6) + iVar1 >> 1);
  iVar6 = *(int *)(iVar2 + 4);
  if (iVar6 < 0) {
    local_130[0].dwTypeData = (LPSTR)&local_130[0].hbmpItem;
    local_130[0].cbSize = 0x2c;
    local_130[0].fMask = 0x18;
    local_130[0].cch = 0;
    GetMenuItemInfoA(*(HMENU *)(param_4 + 0x14),*(UINT *)(param_4 + 8),0,local_130);
    if ((uVar3 & 8) == 0) goto LAB_00581971;
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (local_130[0].hbmpUnchecked != (HBITMAP)0x0) {
        local_178 = FUN_00581e80(param_2,&local_140,uVar8,local_130[0].hbmpChecked);
      }
      goto LAB_00581971;
    }
    if ((local_130[0].fType & 0x200) == 0) {
      param_1 = param_1 + 0x20;
      iVar6 = 0;
    }
    else {
      param_1 = param_1 + 0x20;
      iVar6 = 1;
    }
  }
  else {
    param_1 = param_1 + 8;
  }
  FUN_00581ad0(param_2,param_1,iVar6,&local_140,param_4);
  local_178 = 1;
LAB_00581971:
  DVar5 = GetSysColor((-(uint)(uVar8 != 0) & 9) + 4);
  if ((uVar8 != 0) || (*(int *)(param_4 + 0xc) == 2)) {
    local_164.left = *param_3;
    local_164.top = param_3[1];
    local_164.right = param_3[2];
    local_164.bottom = param_3[3];
    if (local_178 != 0) {
      local_164.left = local_164.left + 1 + local_174;
    }
    SetBkColor(param_2,DVar5);
    ExtTextOutA(param_2,0,0,2,&local_164,(LPCSTR)0x0,0,(INT *)0x0);
  }
  local_148 = param_3[3];
  local_150 = param_3[1];
  local_154 = *param_3 + 3 + local_174;
  local_14c = param_3[2] - local_174;
  SetBkMode(param_2,1);
  uVar3 = local_144;
  if (local_144 == 0) {
    iVar6 = (-(uint)(uVar8 != 0) & 7) + 7;
  }
  else {
    iVar6 = 0x11;
  }
  DVar7 = GetSysColor(iVar6);
  if ((uVar3 != 0) && ((uVar8 == 0 || (DVar7 == DVar5)))) {
    local_164.top = local_150;
    local_164.left = local_154;
    local_164.right = local_14c;
    local_164.bottom = local_148;
    OffsetRect(&local_164,1,1);
    DVar5 = GetSysColor(0x14);
    FUN_00581da0(param_2,&local_164,iVar2,DVar5);
  }
  FUN_00581da0(param_2,&local_154,iVar2,DVar7);
  return;
}


