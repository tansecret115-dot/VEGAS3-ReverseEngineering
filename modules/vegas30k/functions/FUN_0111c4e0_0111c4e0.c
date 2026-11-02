/* Module: vegas30k.dll
   Function: FUN_0111c4e0
   Address: 0111c4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0111c4e0(int param_1,HDC param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  HBRUSH pHVar4;
  HGDIOBJ pvVar5;
  int w;
  uint uVar6;
  int h;
  int w_00;
  uint local_74;
  HGDIOBJ local_70;
  HBRUSH local_6c;
  HGDIOBJ local_54;
  tagRECT local_10;
  
  if ((*(byte *)(param_1 + 0xc) & 0x41) != 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x68);
  h = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c);
  local_10.left = *piVar1;
  w_00 = *(int *)(param_1 + 0x70) - *piVar1;
  local_10.top = *(LONG *)(param_1 + 0x6c);
  local_10.right = *(LONG *)(param_1 + 0x70);
  local_10.bottom = *(LONG *)(param_1 + 0x74);
  InflateRect(&local_10,-*(int *)(param_1 + 0x7c),-*(int *)(param_1 + 0x80));
  pHVar4 = (HBRUSH)_SfGetUIBrush_4(0xf);
  FillRect(param_2,&local_10,pHVar4);
  pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(6);
  local_54 = SelectObject(param_2,pvVar5);
  PatBlt(param_2,*piVar1,*(int *)(param_1 + 0x6c),w_00,1,0xf00021);
  PatBlt(param_2,*piVar1,*(int *)(param_1 + 0x74) + -1,w_00,1,0xf00021);
  PatBlt(param_2,*piVar1,*(int *)(param_1 + 0x6c),1,h,0xf00021);
  PatBlt(param_2,*(int *)(param_1 + 0x70) + -1,*(int *)(param_1 + 0x6c),1,h,0xf00021);
  if ((*(uint *)(param_1 + 0xc) & 0x2000) == 0) {
    pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x10);
    SelectObject(param_2,pvVar5);
    PatBlt(param_2,*(int *)(param_1 + 0x70) + -2,*(int *)(param_1 + 0x6c) + 1,1,h + -2,0xf00021);
    PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x74) + -2,w_00 + -2,1,0xf00021);
    pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x14);
    SelectObject(param_2,pvVar5);
    PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x6c) + 1,1,h + -2,0xf00021);
    PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x6c) + 1,w_00 + -2,1,0xf00021);
  }
  else {
    GetSysColor(0x10);
    GetSysColor(0xf);
    GetSysColor(0x14);
    pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(6);
    local_54 = SelectObject(param_2,pvVar5);
    w = w_00 + -2;
    PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x6c),w,1,0xf00021);
    PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x74) + -1,w,1,0xf00021);
    PatBlt(param_2,*piVar1,*(int *)(param_1 + 0x6c) + 1,1,h + -2,0xf00021);
    PatBlt(param_2,*(int *)(param_1 + 0x70) + -1,*(int *)(param_1 + 0x6c) + 1,1,h + -2,0xf00021);
    local_6c = CreateSolidBrush(0);
    local_70 = SelectObject(param_2,local_6c);
    local_74 = 0;
    if (h != 2) {
      do {
        uVar6 = ftol();
        uVar2 = ftol();
        uVar3 = ftol();
        SelectObject(param_2,local_70);
        DeleteObject(local_6c);
        pHVar4 = CreateSolidBrush((uint)CONCAT11(uVar3,uVar2) << 8 | uVar6 & 0xff);
        pvVar5 = SelectObject(param_2,pHVar4);
        PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x6c) + 1 + local_74,w,1,0xf00021);
        uVar6 = ftol();
        uVar2 = ftol();
        uVar3 = ftol();
        SelectObject(param_2,pvVar5);
        DeleteObject(pHVar4);
        local_6c = CreateSolidBrush((uint)CONCAT11(uVar3,uVar2) << 8 | uVar6 & 0xff);
        local_70 = SelectObject(param_2,local_6c);
        if ((local_74 != 0) && (local_74 < h - 3U)) {
          PatBlt(param_2,*piVar1 + 2,*(int *)(param_1 + 0x6c) + 1 + local_74,w_00 + -4,1,0xf00021);
        }
        local_74 = local_74 + 1;
      } while (local_74 < h - 2U);
    }
    pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x14);
    SelectObject(param_2,pvVar5);
    PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x6c) + 1,1,h + -3,0xf00021);
    PatBlt(param_2,*piVar1 + 1,*(int *)(param_1 + 0x6c) + 1,w,1,0xf00021);
    SelectObject(param_2,local_70);
    DeleteObject(local_6c);
    SelectObject(param_2,local_54);
  }
  SelectObject(param_2,local_54);
  return 1;
}


