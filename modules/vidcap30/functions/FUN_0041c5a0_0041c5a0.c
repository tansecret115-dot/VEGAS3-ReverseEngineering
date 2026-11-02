/* Module: vidcap30.exe
   Function: FUN_0041c5a0
   Address: 0041c5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c5a0(int *param_1,HWND param_2)

{
  int iVar1;
  HWND pHVar2;
  HWND pHVar3;
  
  iVar1 = *param_1;
  pHVar2 = GetDlgItem(param_2,0x494);
  pHVar3 = GetDlgItem(param_2,0x4cb);
  SfSetWindowText(pHVar2,&DAT_00589f30,*(undefined4 *)(iVar1 + 0xf6c));
  SendMessageA(pHVar3,0x624,(WPARAM)pHVar2,9);
  SendMessageA(pHVar3,0x60e,0,0);
  SendMessageA(pHVar3,0x60f,0,20000);
  pHVar2 = GetDlgItem(param_2,0x472);
  pHVar3 = GetDlgItem(param_2,0x484);
  SfSetWindowText(pHVar2,&DAT_00589f30,*(undefined4 *)(*param_1 + 0xf70));
  SendMessageA(pHVar3,0x624,(WPARAM)pHVar2,9);
  SendMessageA(pHVar3,0x60e,0,0);
  SendMessageA(pHVar3,0x60f,0,600);
  return;
}


