/* Module: vidcap30.exe
   Function: FUN_0041aab0
   Address: 0041aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041aab0(int *param_1,HWND param_2)

{
  HWND pHVar1;
  WPARAM WVar2;
  HWND hWnd;
  float10 fVar3;
  undefined8 uVar4;
  double dVar5;
  CHAR *pCVar6;
  BOOL bEnable;
  undefined4 uVar7;
  CHAR local_54 [12];
  CHAR local_48 [40];
  double local_20;
  
  CheckDlgButton(param_2,0x4b3,*(UINT *)(*param_1 + 0xf00));
  SfPrintF(local_54,&DAT_00589f30,*(int *)(*param_1 + 0xf78) / 1000);
  CheckDlgButton(param_2,0x491,*(UINT *)(*param_1 + 0xf74));
  CheckDlgButton(param_2,0x493,*(UINT *)(*param_1 + 0xf7c));
  pHVar1 = GetDlgItem(param_2,0x493);
  EnableWindow(pHVar1,*(BOOL *)(*param_1 + 0xf74));
  pHVar1 = GetDlgItem(param_2,0x4cc);
  EnableWindow(pHVar1,*(BOOL *)(*param_1 + 0xf74));
  SetWindowTextA(pHVar1,local_54);
  pHVar1 = GetDlgItem(param_2,0x4cd);
  EnableWindow(pHVar1,*(BOOL *)(*param_1 + 0xf74));
  pHVar1 = GetDlgItem(param_2,0x4ce);
  EnableWindow(pHVar1,*(BOOL *)(*param_1 + 0xfb8));
  pHVar1 = GetDlgItem(param_2,0x488);
  WVar2 = FUN_0041ad80(*(undefined4 *)(*param_1 + 0xf08),*(undefined4 *)(*param_1 + 0xf0c));
  if (WVar2 == 0xffffffff) {
    SfSetWindowText(pHVar1,&DAT_00589f48,*(undefined4 *)(*param_1 + 0xf08),
                    *(undefined4 *)(*param_1 + 0xf0c));
  }
  else {
    SendMessageA(pHVar1,0x14e,WVar2,0);
  }
  pHVar1 = GetDlgItem(param_2,0x4b4);
  WVar2 = FUN_0041adb0(*(undefined4 *)(*param_1 + 0xf18));
  if (WVar2 == 0xffffffff) {
    WVar2 = 0;
  }
  SendMessageA(pHVar1,0x14e,WVar2,0);
  bEnable = *(BOOL *)(*param_1 + 0xf00);
  pHVar1 = GetDlgItem(param_2,0x488);
  EnableWindow(pHVar1,bEnable);
  pHVar1 = GetDlgItem(param_2,0x495);
  hWnd = GetDlgItem(param_2,0x4ce);
  CheckDlgButton(param_2,0x4fa,*(UINT *)(*param_1 + 0xfb8));
  SfSetWindowText(pHVar1,&DAT_00589f30,*(uint *)(*param_1 + 0xfbc) / 1000);
  SendMessageA(hWnd,0x624,(WPARAM)pHVar1,9);
  SendMessageA(hWnd,0x60e,0,0);
  SendMessageA(hWnd,0x60f,0,60000);
  EnableWindow(pHVar1,*(BOOL *)(*param_1 + 0xfb8));
  local_48[0] = '\0';
  CheckDlgButton(param_2,0x551,*(UINT *)(*param_1 + 0x12c0));
  pHVar1 = GetDlgItem(param_2,0x4d0);
  EnableWindow(pHVar1,*(BOOL *)(*param_1 + 0x12c0));
  fVar3 = (float10)FUN_0042ed90(DAT_005bb838);
  pCVar6 = local_48;
  uVar7 = 0x1e;
  local_20 = (double)fVar3;
  dVar5 = local_20;
  uVar4 = ftol(local_20,pCVar6,0x1e);
  FUN_0045aec0(uVar4,dVar5,pCVar6,uVar7);
  SetWindowTextA(pHVar1,local_48);
  return;
}


