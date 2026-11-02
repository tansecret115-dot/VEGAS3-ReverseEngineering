/* Module: mp3rw.dll
   Function: FUN_0040d4d0
   Address: 0040d4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d4d0(HWND param_1,HDC param_2,int param_3,int param_4,int param_5,int param_6,
                 LPCSTR param_7)

{
  HFONT pHVar1;
  HGDIOBJ h;
  int mode;
  COLORREF color;
  BYTE *pBVar2;
  LONG LVar3;
  int iVar4;
  uint uVar5;
  tagRECT local_2a4;
  int local_294 [2];
  uchar *local_28c;
  tagSIZE local_288;
  uchar local_280 [128];
  uchar local_200 [512];
  
  pHVar1 = FUN_00427c20(100);
  h = SelectObject(param_2,pHVar1);
  mode = SetBkMode(param_2,1);
  color = SetTextColor(param_2,0xffffff);
  local_294[0] = 0;
  local_294[1] = 0;
  FUN_00412f90(DAT_004a8128,local_294,local_294 + 1,2);
  _mbscpy(local_280,&DAT_004a82d5);
  pHVar1 = FUN_00427c20(0x68);
  SelectObject(param_2,pHVar1);
  if (param_5 == 0) {
    SetTextColor(param_2,0xffffff);
    iVar4 = lstrcmpA(param_7,"");
    if (iVar4 == 0) {
      uVar5 = 0x28c2;
    }
    else {
      uVar5 = 0x273f;
    }
    pBVar2 = FUN_0041f9f0(DAT_004a811c,uVar5);
    FUN_00420fe0(local_200,pBVar2);
    iVar4 = lstrlenA((LPCSTR)local_200);
    GetTextExtentPointA(param_2,(LPCSTR)local_200,iVar4,&local_288);
    local_2a4.bottom = param_4 + -0x55;
    local_2a4.right = param_3 + -0x4b;
    local_2a4.top = 0xeb;
    local_2a4.left = 0x19;
    DrawTextA(param_2,(LPCSTR)local_200,iVar4,&local_2a4,0x10);
    SelectObject(param_2,h);
    SetBkMode(param_2,mode);
    SetTextColor(param_2,color);
    return;
  }
  SetTextColor(param_2,0xffffff);
  if (param_6 == 0) {
    pBVar2 = FUN_0041f9f0(DAT_004a811c,0x2740);
    FUN_00420fe0(local_200,pBVar2);
    LVar3 = GetWindowLongA(param_1,0);
    if (((LVar3 != 0) && (*(int *)(*(int *)(LVar3 + 0x360) + 0x194) == 0)) &&
       (local_28c = (uchar *)FUN_0040d7a0(*(int *)(LVar3 + 0x240)), local_28c != (uchar *)0x0)) {
      iVar4 = lstrlenA((LPCSTR)local_200);
      _mbsncat(local_200,local_28c,0x1ff - iVar4);
    }
  }
  else {
    pBVar2 = FUN_0041f9f0(DAT_004a811c,0x2741);
    FUN_00420fe0(local_200,pBVar2);
  }
  iVar4 = lstrlenA((LPCSTR)local_200);
  GetTextExtentPointA(param_2,(LPCSTR)local_200,iVar4,&local_288);
  local_2a4.bottom = param_4 + -0x55;
  local_2a4.right = param_3 + -0x19;
  local_2a4.top = 0xeb;
  local_2a4.left = 0x19;
  DrawTextA(param_2,(LPCSTR)local_200,iVar4,&local_2a4,0x10);
  SelectObject(param_2,h);
  SetBkMode(param_2,mode);
  SetTextColor(param_2,color);
  return;
}


