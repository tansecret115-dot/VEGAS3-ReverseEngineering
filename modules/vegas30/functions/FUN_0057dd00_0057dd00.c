/* Module: vegas30.exe
   Function: FUN_0057dd00
   Address: 0057dd00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057dd00(int param_1)

{
  LPCSTR pCVar1;
  HWND pHVar2;
  HIMAGELIST p_Var3;
  HICON hicon;
  
  _SfWndCenter_16(*(undefined4 *)(param_1 + 4),0,0,0x8001);
  pHVar2 = *(HWND *)(param_1 + 4);
  pCVar1 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e52);
  SetWindowTextA(pHVar2,pCVar1);
  CheckDlgButton(*(HWND *)(param_1 + 4),0x46f,1);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x4a2);
  pCVar1 = (LPCSTR)FUN_005c60c0(DAT_0064b138);
  SetWindowTextA(pHVar2,pCVar1);
  p_Var3 = ImageList_Create(0x10,0x10,1,1,1);
  *(HIMAGELIST *)(param_1 + 0x14) = p_Var3;
  hicon = (HICON)_SfLoadIcon_8(DAT_00647204,0xdf);
  ImageList_ReplaceIcon(*(HIMAGELIST *)(param_1 + 0x14),-1,hicon);
  FUN_0057da20();
  return;
}


