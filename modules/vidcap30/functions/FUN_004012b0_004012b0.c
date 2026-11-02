/* Module: vidcap30.exe
   Function: FUN_004012b0
   Address: 004012b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004012b0(HDC param_1,undefined4 param_2,int param_3)

{
  HGDIOBJ pvVar1;
  int mode;
  COLORREF color;
  LPCSTR pCVar2;
  int iVar3;
  HGDIOBJ pvVar4;
  char *pcVar5;
  tagSIZE local_58;
  uchar local_50 [80];
  
  pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
  pvVar1 = SelectObject(param_1,pvVar1);
  mode = SetBkMode(param_1,1);
  color = SetTextColor(param_1,0xffffff);
  pcVar5 = "Copyright (C) 1997-2001 Sonic Foundry, Inc.";
  pCVar2 = (LPCSTR)_SfGetString_8(DAT_005ba2a0,0xbd);
  iVar3 = wsprintfA((LPSTR)local_50,pCVar2,pcVar5);
  pvVar4 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  SelectObject(param_1,pvVar4);
  GetTextExtentPointA(param_1,(LPCSTR)local_50,iVar3,&local_58);
  SetTextColor(param_1,0xffffff);
  TextOutA(param_1,0x19,(param_3 - local_58.cy) + -3,(LPCSTR)local_50,iVar3);
  SetTextColor(param_1,0xffffff);
  pvVar4 = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_1,pvVar4);
  _mbscpy(local_50,&DAT_005ba2ac);
  iVar3 = lstrlenA((LPCSTR)local_50);
  GetTextExtentPointA(param_1,(LPCSTR)local_50,iVar3,&local_58);
  TextOutA(param_1,0x19,param_3 + local_58.cy * -6 + -0x19,(LPCSTR)local_50,iVar3);
  _mbscpy(local_50,(uchar *)"Version 3.0 (Build 63)");
  iVar3 = lstrlenA((LPCSTR)local_50);
  TextOutA(param_1,0x19,param_3 - (local_58.cy * 5 + 0x19),(LPCSTR)local_50,iVar3);
  pvVar4 = (HGDIOBJ)_SfGetUIFont_4(0x68);
  SelectObject(param_1,pvVar4);
  _SfLoadString_16(DAT_005ba2a0,0x8f,local_50,0x50);
  iVar3 = lstrlenA((LPCSTR)local_50);
  TextOutA(param_1,0x19,param_3 - (local_58.cy * 4 + 0x14),(LPCSTR)local_50,iVar3);
  pvVar4 = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_1,pvVar4);
  _mbscpy(local_50,&DAT_005ba32c);
  iVar3 = lstrlenA((LPCSTR)local_50);
  TextOutA(param_1,0x23,param_3 + local_58.cy * -3 + -0x14,(LPCSTR)local_50,iVar3);
  _mbscpy(local_50,&DAT_005ba3ac);
  iVar3 = lstrlenA((LPCSTR)local_50);
  TextOutA(param_1,0x23,param_3 - (local_58.cy * 2 + 0x14),(LPCSTR)local_50,iVar3);
  _mbscpy(local_50,&DAT_005ba42c);
  iVar3 = lstrlenA((LPCSTR)local_50);
  TextOutA(param_1,0x23,(param_3 - local_58.cy) + -0x14,(LPCSTR)local_50,iVar3);
  SelectObject(param_1,pvVar1);
  SetBkMode(param_1,mode);
  SetTextColor(param_1,color);
  return;
}


