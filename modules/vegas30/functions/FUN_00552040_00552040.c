/* Module: vegas30.exe
   Function: FUN_00552040
   Address: 00552040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00552040(HWND param_1)

{
  HWND pHVar1;
  int *piVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  BOOL BVar6;
  CHAR *pCVar7;
  int lParam;
  CHAR local_14 [20];
  
  LVar5 = -0x40;
  WVar4 = 0;
  UVar3 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0x40;
  WVar4 = 1;
  UVar3 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x188;
  pHVar1 = GetDlgItem(param_1,0x46e);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (WVar4 != 0xffffffff) {
    LVar5 = 0;
    UVar3 = 0x199;
    pHVar1 = GetDlgItem(param_1,0x46e);
    piVar2 = (int *)SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      BVar6 = 1;
      pHVar1 = GetDlgItem(param_1,0x435);
      EnableWindow(pHVar1,BVar6);
      BVar6 = 1;
      pHVar1 = GetDlgItem(param_1,0x498);
      EnableWindow(pHVar1,BVar6);
      _SfLongToText_12(piVar2[0xd],local_14,1);
      pCVar7 = local_14;
      pHVar1 = GetDlgItem(param_1,0x498);
      SetWindowTextA(pHVar1,pCVar7);
      lParam = piVar2[0xd];
      goto LAB_00552147;
    }
  }
  BVar6 = 0;
  pHVar1 = GetDlgItem(param_1,0x435);
  EnableWindow(pHVar1,BVar6);
  BVar6 = 0;
  pHVar1 = GetDlgItem(param_1,0x498);
  EnableWindow(pHVar1,BVar6);
  _SfLongToText_12(0,local_14,1);
  pCVar7 = local_14;
  pHVar1 = GetDlgItem(param_1,0x498);
  SetWindowTextA(pHVar1,pCVar7);
  lParam = 0;
LAB_00552147:
  WVar4 = 1;
  UVar3 = 0x610;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar3,WVar4,lParam);
  return;
}


