/* Module: vidcap30.exe
   Function: FUN_0045d2a0
   Address: 0045d2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045d2a0(int *param_1,HWND param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  UINT Msg;
  int lParam;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  lParam = param_1[4];
  pHVar1 = GetDlgItem(param_2,0x4d2);
  SfSetWindowText(pHVar1,&DAT_0058c34c,*(undefined4 *)(*param_1 + 0xbc0));
  pHVar2 = GetDlgItem(param_2,0x4d3);
  SendMessageA(pHVar2,0x624,(WPARAM)pHVar1,9);
  SendMessageA(pHVar2,0x60e,0,5);
  SendMessageA(pHVar2,0x60f,0,0x400);
  pHVar1 = GetDlgItem(param_2,0x505);
  SfSetWindowText(pHVar1,&DAT_0058c34c,*(undefined4 *)(*param_1 + 0xbc8));
  CheckDlgButton(param_2,0x504,*(UINT *)(*param_1 + 0xbc4));
  EnableWindow(pHVar1,*(BOOL *)(*param_1 + 0xbc4));
  pHVar2 = GetDlgItem(param_2,0x4d4);
  SendMessageA(pHVar2,0x624,(WPARAM)pHVar1,0xf);
  SendMessageA(pHVar2,0x60e,0,1);
  SendMessageA(pHVar2,0x60f,0,0xfffffff);
  EnableWindow(pHVar2,*(BOOL *)(*param_1 + 0xbc4));
  pHVar1 = GetDlgItem(param_2,0x4d1);
  iVar3 = FUN_0045ca60(pHVar1,param_1);
  if (iVar3 == 0) {
    _SfMessageBox_16(param_2,"Not all of the capture folders could be displayed.",
                     "Error displaying folders",0x10);
  }
  SendMessageA(pHVar1,0x1043,0,0);
  local_18 = 3;
  local_1c = 3;
  SendMessageA(pHVar1,0x102b,0,(LPARAM)local_28);
  FUN_0045d450(param_2,pHVar1,*(undefined4 *)(*param_1 + 0xbc0));
  param_1[4] = lParam;
  if (lParam == 0) {
    Msg = 0x46d;
    pHVar1 = GetParent(param_2);
    SendMessageA(pHVar1,Msg,(WPARAM)param_2,lParam);
  }
  return;
}


