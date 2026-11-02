/* Module: vegas30.exe
   Function: FUN_004b33c0
   Address: 004b33c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b33c0(HWND param_1,int *param_2)

{
  HWND pHVar1;
  uint uVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined1 *puVar3;
  undefined1 local_20 [32];
  
  uVar2 = (uint)(*(char *)(*param_2 + 8000) != '\0');
  pHVar1 = GetDlgItem(param_1,0x462);
  EnableWindow(pHVar1,uVar2);
  uVar2 = (uint)(*(char *)(*param_2 + 8000) != '\0');
  pHVar1 = GetDlgItem(param_1,0x489);
  EnableWindow(pHVar1,uVar2);
  uVar2 = (uint)(*(char *)(*param_2 + 8000) != '\0');
  pHVar1 = GetDlgItem(param_1,0x470);
  EnableWindow(pHVar1,uVar2);
  if (*(char *)(*param_2 + 8000) != '\0') {
    lParam = *(LPARAM *)(*param_2 + 0x2080);
    wParam = 0;
    Msg = 0x610;
    pHVar1 = GetDlgItem(param_1,0x470);
    SendMessageA(pHVar1,Msg,wParam,lParam);
    SfPrintF(local_20,&DAT_0061052c,*(undefined4 *)(*param_2 + 0x2080));
    puVar3 = local_20;
    pHVar1 = GetDlgItem(param_1,0x462);
    SfSetWindowText(pHVar1,puVar3);
  }
  return;
}


