/* Module: vegas30.exe
   Function: FUN_004f4890
   Address: 004f4890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f4890(HWND param_1,int *param_2)

{
  byte bVar1;
  SHORT SVar2;
  HWND pHVar3;
  LPARAM LVar4;
  undefined4 uVar5;
  HWND pHVar6;
  WPARAM wParam;
  uint lParam;
  CHAR *pCVar7;
  undefined *puVar8;
  undefined4 uVar9;
  CHAR local_20 [32];
  
  pHVar3 = GetDlgItem(param_1,0x4f3);
  if (*(int *)(*param_2 + 200) == 0) {
    wParam = 0;
  }
  else {
    wParam = *(int *)(*param_2 + 0xcc) + 1;
  }
  SendMessageA(pHVar3,0x14e,wParam,0);
  pHVar3 = GetDlgItem(param_1,0x5ea);
  SendMessageA(pHVar3,0x14e,*(WPARAM *)(*param_2 + 0x7ac),0);
  pHVar3 = GetDlgItem(param_1,0x5e6);
  SfSetWindowText(pHVar3,*param_2 + 0x584);
  pHVar3 = GetDlgItem(param_1,0x440);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,0,LVar4);
  GetDlgItem(param_1,0x43a);
  pCVar7 = local_20;
  uVar9 = 0;
  uVar5 = ftol(pCVar7,0);
  _SfLongToText_12(uVar5,pCVar7,uVar9);
  SetDlgItemTextA(param_1,0x43a,local_20);
  pHVar3 = GetDlgItem(param_1,0x441);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,0,LVar4);
  GetDlgItem(param_1,0x4c1);
  pCVar7 = local_20;
  uVar9 = 0;
  uVar5 = ftol(pCVar7,0);
  _SfLongToText_12(uVar5,pCVar7,uVar9);
  SetDlgItemTextA(param_1,0x4c1,local_20);
  pHVar3 = GetDlgItem(param_1,0x443);
  SendMessageA(pHVar3,0x610,0,*(LPARAM *)(*param_2 + 0x1f08));
  GetDlgItem(param_1,0x4c2);
  _SfLongToText_12(*(undefined4 *)(*param_2 + 0x1f08),local_20,0);
  SetDlgItemTextA(param_1,0x4c2,local_20);
  pHVar3 = GetDlgItem(param_1,0x442);
  SendMessageA(pHVar3,0x610,0,*(LPARAM *)(*param_2 + 0x1f0c));
  GetDlgItem(param_1,0x4c0);
  _SfLongToText_12(*(undefined4 *)(*param_2 + 0x1f0c),local_20,0);
  SetDlgItemTextA(param_1,0x4c0,local_20);
  pHVar6 = GetDlgItem(param_1,0x46f);
  SendMessageA(pHVar6,0xf1,*(WPARAM *)(*param_2 + 0x7b0),0);
  pHVar6 = GetDlgItem(param_1,0x470);
  SendMessageA(pHVar6,0xf1,(uint)(DAT_00647e48 == 0),0);
  SVar2 = GetAsyncKeyState(0x11);
  if (SVar2 < 0) {
    SVar2 = GetAsyncKeyState(0x12);
    bVar1 = 1;
    if (SVar2 < 0) goto LAB_004f4ad3;
  }
  bVar1 = 0;
LAB_004f4ad3:
  pHVar6 = GetDlgItem(param_1,0x4f9);
  ShowWindow(pHVar6,-(uint)bVar1 & 5);
  lParam = *(uint *)(*param_2 + 0x33a0) >> 0x14;
  SendMessageA(pHVar3,0x610,0,lParam);
  puVar8 = &DAT_0061052c;
  pHVar3 = GetDlgItem(param_1,0x4c3);
  SfSetWindowText(pHVar3,puVar8,lParam);
  return;
}


