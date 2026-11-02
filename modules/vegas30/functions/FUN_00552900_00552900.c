/* Module: vegas30.exe
   Function: FUN_00552900
   Address: 00552900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00552900(HWND param_1,int param_2)

{
  HWND pHVar1;
  int *piVar2;
  LRESULT LVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  BOOL BVar7;
  CHAR *lpString;
  CHAR local_14 [20];
  
  LVar6 = -0x40;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0x40;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x188;
  pHVar1 = GetDlgItem(param_1,0x46e);
  WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (WVar5 == 0xffffffff) {
    return 0;
  }
  LVar6 = 0;
  UVar4 = 0x199;
  pHVar1 = GetDlgItem(param_1,0x46e);
  piVar2 = (int *)SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    BVar7 = 1;
    pHVar1 = GetDlgItem(param_1,0x435);
    EnableWindow(pHVar1,BVar7);
    BVar7 = 1;
    pHVar1 = GetDlgItem(param_1,0x498);
    EnableWindow(pHVar1,BVar7);
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x60a;
    pHVar1 = GetDlgItem(param_1,0x435);
    LVar3 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    piVar2[0xd] = LVar3;
    _SfLongToText_12(LVar3,local_14,1);
    lpString = local_14;
    pHVar1 = GetDlgItem(param_1,0x498);
    SetWindowTextA(pHVar1,lpString);
    LVar6 = 0;
    UVar4 = 0x468;
    pHVar1 = GetParent(param_1);
    SendMessageA(pHVar1,UVar4,(WPARAM)param_1,LVar6);
    *(undefined4 *)(param_2 + 8) = 1;
    return 1;
  }
  return 0;
}


