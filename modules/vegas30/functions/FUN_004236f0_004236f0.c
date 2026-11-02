/* Module: vegas30.exe
   Function: FUN_004236f0
   Address: 004236f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004236f0(int *param_1,HDC param_2,undefined4 param_3,LONG *param_4)

{
  LONG LVar1;
  HGDIOBJ h;
  DWORD DVar2;
  int iVar3;
  uchar *_Source;
  UINT c;
  int iVar4;
  undefined4 uVar5;
  RECT local_88;
  int local_78;
  int local_74;
  RECT local_70;
  HGDIOBJ local_60;
  LPRECT local_5c;
  tagSIZE local_58;
  LONG local_4c;
  int local_48;
  uchar local_40 [64];
  
  uVar5 = *(undefined4 *)(*param_1 + 0x80);
  local_78 = FUN_005ba4b0(uVar5,0);
  local_5c = (LPRECT)(param_1 + 0xe);
  local_88.left = local_5c->left;
  local_88.top = param_1[0xf];
  local_88.right = param_1[0x10];
  local_88.bottom = param_1[0x11];
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  local_60 = SelectObject(param_2,h);
  DVar2 = GetSysColor(0xf);
  SetBkColor(param_2,DVar2);
  DVar2 = GetSysColor(0x12);
  SetTextColor(param_2,DVar2);
  LVar1 = *param_4;
  local_4c = param_4[1];
  local_70.right = local_88.right;
  local_70.bottom = param_4[3];
  local_48 = local_88.right;
  local_70.top = local_88.bottom;
  local_70.left = LVar1;
  ExtTextOutA(param_2,0,0,2,&local_70,(LPCSTR)0x0,0,(INT *)0x0);
  iVar4 = 0;
  local_70.bottom = param_1[10];
  local_70.top = 0;
  local_70.right = local_48;
  local_70.left = LVar1;
  ExtTextOutA(param_2,0,0,2,&local_70,(LPCSTR)0x0,0,(INT *)0x0);
  iVar3 = FUN_005ba5c0(uVar5,local_78,0);
  if (iVar3 == 2) {
    uVar5 = 0x6e56;
  }
  else {
    if (iVar3 == 3) {
      _Source = (uchar *)_SfGetString_8(DAT_00647204,0x6e57);
      goto LAB_00423854;
    }
    if (iVar3 == 4) {
      _Source = (uchar *)_SfGetString_8(DAT_00647204,0x6e58);
      goto LAB_00423854;
    }
    uVar5 = 0x6e55;
  }
  _Source = (uchar *)_SfGetString_8(DAT_00647204,uVar5);
LAB_00423854:
  _mbscpy(local_40,_Source);
  c = lstrlenA((LPCSTR)local_40);
  GetTextExtentPointA(param_2,(LPCSTR)local_40,c,&local_58);
  iVar3 = local_88.right + -0xc;
  local_88.right = local_88.left;
  if (local_88.left <= iVar3) {
    local_88.right = iVar3;
  }
  if ((param_1[7] != 0) && ((param_1[2] & 0xf0000000U) == 0x10000000)) {
    iVar4 = 1;
  }
  ExtTextOutA(param_2,iVar4 + 3 + local_88.left,
              ((local_88.top - local_58.cy) + local_88.bottom) / 2 + iVar4,6,&local_88,
              (LPCSTR)local_40,c,(INT *)0x0);
  local_88.left = local_88.right;
  local_88.right = local_88.right + 0xc;
  ExtTextOutA(param_2,0,0,6,&local_88,"",0,(INT *)0x0);
  local_74 = 5;
  local_78 = 3;
  iVar3 = iVar4 + 3 + local_88.left;
  iVar4 = (local_88.top + -3 + local_88.bottom) / 2 + 1 + iVar4;
  do {
    MoveToEx(param_2,iVar3,iVar4,(LPPOINT)0x0);
    LineTo(param_2,iVar3 + local_74,iVar4);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 1;
    local_74 = local_74 + -2;
    local_78 = local_78 + -1;
  } while (local_78 != 0);
  local_88.top = param_4[1];
  local_88.right = param_4[2];
  local_88.bottom = param_4[3];
  local_88.left = local_88.right;
  if (param_1[0x10] <= local_88.right) {
    local_88.left = param_1[0x10];
  }
  ExtTextOutA(param_2,0,0,6,&local_88,"",0,(INT *)0x0);
  SelectObject(param_2,local_60);
  if ((param_1[2] & 0xf0000000U) == 0x10000000) {
    DrawEdge(param_2,local_5c,(-(uint)(param_1[7] != 0) & 0xfffffffe) + 4,0xf);
  }
  return;
}


