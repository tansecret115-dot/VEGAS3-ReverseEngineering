/* Module: vidcap30.exe
   Function: FUN_0043e850
   Address: 0043e850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043e850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HWND pHVar5;
  HBRUSH pHVar6;
  WPARAM wParam;
  LPCSTR lpString;
  LPARAM lParam;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = _SfGetUIFont_4(100);
  _SfGetUIFont_4(0x68);
  uVar3 = _SfGetUIFont_4(0x86);
  _SfGetUIFont_4(0x82);
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  local_4 = 0;
  uVar4 = FUN_00460780(*(undefined4 *)(param_1 + 0xcc),0x1f5,&DAT_00586c70,0x10004201,0,&local_10);
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  FUN_00460850(uVar4,0x30,uVar3,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0xd4),0x605,0xffffff,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0xd4),0x606,0x852f0e,0);
  pHVar5 = CreateWindowExA(0,"SfKrn_Static_Class","",0x54000051,0,0,0,0,*(HWND *)(param_1 + 0xcc),
                           (HMENU)0x0,DAT_005ba298,(LPVOID)0x0);
  *(HWND *)(param_1 + 0xd0) = pHVar5;
  pHVar6 = CreateSolidBrush(0x852f0e);
  lParam = 0;
  *(HBRUSH *)(param_1 + 0x13b8) = pHVar6;
  wParam = _SfGetUIFont_4(100);
  SendMessageA(*(HWND *)(param_1 + 0xd0),0x30,wParam,lParam);
  lpString = (LPCSTR)_SfGetString_8(DAT_005ba2a0,0xc561);
  SetWindowTextA(*(HWND *)(param_1 + 0xd0),lpString);
  SendMessageA(*(HWND *)(param_1 + 0xd0),0x60d,1,0xffffff);
  *(undefined4 *)(param_1 + 0xe4) = 0x10000000;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x1f8;
  FUN_00421670(*(undefined4 *)(param_1 + 0xcc),uVar2,param_1 + 0xd8,0,0);
  iVar1 = param_1 + 0xa48;
  *(undefined4 *)(param_1 + 0xa58) = 0;
  *(undefined4 *)(param_1 + 0xa54) = 0x10000000;
  *(undefined4 *)(param_1 + 0xa6c) = 0x1f9;
  _mbscpy((uchar *)(param_1 + 0x17ac),(uchar *)"No Capture Device");
  _mbscpy((uchar *)(param_1 + 0xa70),(uchar *)(param_1 + 0x17ac));
  _mbscpy((uchar *)(param_1 + 0x19b4),(uchar *)"No Capture Device");
  _mbscpy((uchar *)(param_1 + 0xe50),(uchar *)(param_1 + 0x19b4));
  FUN_00421740(*(undefined4 *)(param_1 + 0xcc),uVar2,iVar1,0,0);
  FUN_00425ff0(iVar1,DAT_005bb560);
  FUN_004262f0(iVar1,DAT_005bb55c);
  FUN_004260a0(iVar1,DAT_005bb448);
  FUN_0042b300(param_1 + 0xd8,iVar1);
  return 1;
}


