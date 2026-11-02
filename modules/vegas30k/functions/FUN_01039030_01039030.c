/* Module: vegas30k.dll
   Function: FUN_01039030
   Address: 01039030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01039030(int param_1,HWND param_2,HDC param_3,int *param_4)

{
  uint uVar1;
  HGDIOBJ pvVar2;
  HDC hdc;
  DWORD DVar3;
  int iVar4;
  LPCSTR lpString;
  UINT c;
  uint uVar5;
  int iVar6;
  RECT local_438;
  HGDIOBJ local_428;
  int local_424;
  HGDIOBJ local_420;
  HGDIOBJ local_41c;
  undefined1 local_418 [4];
  int local_414;
  int local_410;
  CHAR local_400 [1024];
  
  uVar1 = (uint)(param_4[2] - *param_4) >> 3;
  uVar5 = (uint)(param_4[3] - param_4[1]) >> 2;
  pvVar2 = (HGDIOBJ)_SfGetUIBrush_4(5);
  local_41c = SelectObject(param_3,pvVar2);
  pvVar2 = (HGDIOBJ)_SfGetUIPenWithStyle_8(5,0);
  local_420 = SelectObject(param_3,pvVar2);
  Rectangle(param_3,*param_4,param_4[1],param_4[2],param_4[3]);
  pvVar2 = (HGDIOBJ)_SfGetUIBrush_4(3);
  SelectObject(param_3,pvVar2);
  pvVar2 = (HGDIOBJ)_SfGetUIPenWithStyle_8(3,0);
  SelectObject(param_3,pvVar2);
  Rectangle(param_3,*param_4,param_4[1],*param_4 + uVar1,param_4[3]);
  MoveToEx(param_3,*param_4,param_4[1] + uVar5,(LPPOINT)0x0);
  LineTo(param_3,param_4[2],param_4[1] + uVar5);
  pvVar2 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x10,0);
  SelectObject(param_3,pvVar2);
  MoveToEx(param_3,*param_4,param_4[1],(LPPOINT)0x0);
  LineTo(param_3,param_4[2],param_4[1]);
  MoveToEx(param_3,*param_4,param_4[1],(LPPOINT)0x0);
  LineTo(param_3,*param_4,param_4[3]);
  pvVar2 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x14,0);
  SelectObject(param_3,pvVar2);
  MoveToEx(param_3,*param_4,param_4[3] + -1,(LPPOINT)0x0);
  LineTo(param_3,param_4[2],param_4[3] + -1);
  MoveToEx(param_3,param_4[2] + -1,param_4[1],(LPPOINT)0x0);
  LineTo(param_3,param_4[2] + -1,param_4[3]);
  hdc = CreateCompatibleDC(param_3);
  pvVar2 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x18));
  GetObjectA(*(HANDLE *)(param_1 + 0x18),0x18,local_418);
  DVar3 = GetSysColor(3);
  _SfBitmapColorTranslate_12(hdc,local_418,DVar3);
  BitBlt(param_3,(uVar1 - local_414 >> 1) + *param_4,param_4[1] + 0x10,local_414,local_410,hdc,0,0,
         0xcc0020);
  SelectObject(hdc,pvVar2);
  DeleteDC(hdc);
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(0x86);
  local_428 = SelectObject(param_3,pvVar2);
  iVar4 = _SfGetUIFontSize_4(0x86);
  local_424 = *(int *)(iVar4 + 4);
  lpString = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x1062);
  c = lstrlenA(lpString);
  iVar6 = uVar5 - 2;
  local_438.top = param_4[1] + 1;
  local_438.bottom = local_438.top + iVar6;
  local_438.left = *param_4 + uVar1;
  local_438.right = param_4[2] + -1;
  ExtTextOutA(param_3,local_438.left + 8,((uint)(iVar6 - local_424) >> 1) + local_438.top,6,
              &local_438,lpString,c,(INT *)0x0);
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(0x82);
  SelectObject(param_3,pvVar2);
  GetWindowTextA(param_2,local_400,0x400);
  iVar4 = lstrlenA(local_400);
  local_438.bottom = param_4[3] + -1;
  local_438.left = *param_4 + uVar1 + 8;
  local_438.top = param_4[1] + iVar6 + 0xb;
  local_438.right = param_4[2] + -9;
  SetBkMode(param_3,1);
  DrawTextA(param_3,local_400,iVar4,&local_438,0x50);
  SelectObject(param_3,local_428);
  SelectObject(param_3,local_420);
  SelectObject(param_3,local_41c);
  return;
}


