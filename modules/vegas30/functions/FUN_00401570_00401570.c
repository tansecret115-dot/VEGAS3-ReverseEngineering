/* Module: vegas30.exe
   Function: FUN_00401570
   Address: 00401570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401570(HDC param_1,int param_2,int param_3)

{
  HGDIOBJ pvVar1;
  LPCSTR pCVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  tagSIZE local_124;
  int local_11c;
  COLORREF local_118;
  HGDIOBJ local_114;
  int local_110;
  uint local_10c;
  undefined1 local_108 [4];
  uchar local_104 [260];
  
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
  local_114 = SelectObject(param_1,pvVar1);
  local_11c = SetBkMode(param_1,1);
  local_118 = SetTextColor(param_1,0xffffff);
  pcVar5 = "Copyright (C) 1997-2001 Sonic Foundry, Inc.";
  pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x31);
  iVar3 = wsprintfA((LPSTR)local_104,pCVar2,pcVar5);
  GetTextExtentPointA(param_1,(LPCSTR)local_104,iVar3,&local_124);
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  SelectObject(param_1,pvVar1);
  SetTextColor(param_1,0xffffff);
  TextOutA(param_1,0x19,param_3 + -0x14,(LPCSTR)local_104,iVar3);
  local_110 = FUN_006004b0();
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(0x86);
  SelectObject(param_1,pvVar1);
  FUN_00601ab0(&local_10c,local_108,2);
  if (((local_10c < 0x80000000) || (DAT_0064b4f0 != 0)) && (local_110 == 0)) {
    if (DAT_0064b4f0 == 0) {
      uVar4 = _SfGetString_8(DAT_00647204,0x50f4);
      iVar3 = SfPrintF(local_104,uVar4,local_10c);
    }
    else {
      uVar4 = _SfGetString_8(DAT_00647204,0x6e0e);
      iVar3 = SfPrintF(local_104,uVar4);
    }
    GetTextExtentPoint32A(param_1,(LPCSTR)local_104,iVar3,&local_124);
    FUN_00401510(param_1,(param_2 - local_124.cx) + -0x19,local_124.cy / 2 + 4,0,0xffff,local_104,
                 iVar3,1);
  }
  SetTextColor(param_1,0xffffff);
  _mbscpy(local_104,&DAT_00647210);
  iVar3 = lstrlenA((LPCSTR)local_104);
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(0x68);
  SelectObject(param_1,pvVar1);
  GetTextExtentPointA(param_1,(LPCSTR)local_104,iVar3,&local_124);
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_1,pvVar1);
  TextOutA(param_1,0x19,param_3 + local_124.cy * -6 + -0x1c,(LPCSTR)local_104,iVar3);
  _mbscpy(local_104,(uchar *)"Version 3.0 (Build 76)");
  iVar3 = lstrlenA((LPCSTR)local_104);
  TextOutA(param_1,0x19,param_3 + local_124.cy * -5 + -0x1c,(LPCSTR)local_104,iVar3);
  SetTextColor(param_1,0xffffff);
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(0x68);
  SelectObject(param_1,pvVar1);
  _SfLoadString_16(DAT_00647204,0x5102,local_104,0x104);
  iVar3 = lstrlenA((LPCSTR)local_104);
  TextOutA(param_1,0x19,param_3 - (local_124.cy * 4 + 0x18),(LPCSTR)local_104,iVar3);
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_1,pvVar1);
  _mbscpy(local_104,&DAT_00647290);
  iVar3 = lstrlenA((LPCSTR)local_104);
  TextOutA(param_1,0x23,param_3 - (local_124.cy * 3 + 0x18),(LPCSTR)local_104,iVar3);
  _mbscpy(local_104,&DAT_00647310);
  iVar3 = lstrlenA((LPCSTR)local_104);
  TextOutA(param_1,0x23,param_3 - (local_124.cy * 2 + 0x18),(LPCSTR)local_104,iVar3);
  iVar3 = FUN_00605ba0(&DAT_00647390);
  if (iVar3 == 0) {
    _mbscpy(local_104,&DAT_00647390);
    iVar3 = lstrlenA((LPCSTR)local_104);
    TextOutA(param_1,0x23,(param_3 - local_124.cy) + -0x18,(LPCSTR)local_104,iVar3);
  }
  SelectObject(param_1,local_114);
  SetBkMode(param_1,local_11c);
  SetTextColor(param_1,local_118);
  return;
}


