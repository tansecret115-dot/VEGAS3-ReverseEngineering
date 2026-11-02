/* Module: vidcap30.exe
   Function: FUN_0045ac50
   Address: 0045ac50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045ac50(HWND param_1,LPSTR param_2)

{
  HWND hWnd;
  undefined4 uVar1;
  int iVar2;
  UINT UVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char local_104 [260];
  
  iVar5 = 0;
  hWnd = GetDlgItem(param_1,0x9c43);
  GetDlgItemTextA(param_1,0x9c43,local_104,0x104);
  if (local_104[0] == '\0') {
    uVar1 = _SfGetString_8(DAT_005ba2a0,0xc51e);
    SfMsgBox(param_1,0x10,uVar1);
  }
  else {
    iVar2 = FUN_0045b320(local_104);
    if (iVar2 == 0) {
      pcVar6 = "\\ / : * ? < > | \"";
      uVar1 = _SfGetString_8(DAT_005ba2a0,0xc55b);
      SfMsgBox(param_1,0x10,uVar1,pcVar6);
    }
    else {
      iVar5 = 1;
    }
  }
  UVar3 = IsDlgButtonChecked(param_1,0x4f3);
  if (UVar3 == 0) {
    UVar3 = IsDlgButtonChecked(param_1,0x4f2);
    uVar4 = (uint)(UVar3 != 0);
  }
  else {
    uVar4 = 2;
  }
  if (iVar5 != 0) {
    *(uint *)(param_2 + 0x108) = uVar4;
    lstrcpynA(param_2,local_104,0x104);
    param_2[0x103] = '\0';
    return iVar5;
  }
  SetWindowTextA(hWnd,param_2);
  return 0;
}


