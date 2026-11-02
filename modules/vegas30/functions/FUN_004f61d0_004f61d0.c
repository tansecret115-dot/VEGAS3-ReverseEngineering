/* Module: vegas30.exe
   Function: FUN_004f61d0
   Address: 004f61d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f61d0(HWND param_1,int *param_2)

{
  undefined4 uVar1;
  HWND pHVar2;
  HWND wParam;
  WPARAM wParam_00;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  double dVar6;
  ulonglong uVar7;
  LPARAM lParam;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CHAR local_20 [32];
  
  CheckDlgButton(param_1,0x5ed,*(UINT *)(*param_2 + 0x2e88));
  CheckDlgButton(param_1,0x5ee,*(UINT *)(*param_2 + 0x2eb0));
  CheckDlgButton(param_1,0x46f,(uint)(*(int *)(*param_2 + 0xf4) == 2));
  CheckDlgButton(param_1,0x4e3,*(UINT *)(*param_2 + 0x22d8));
  local_2c = 0x4e4;
  local_28 = 0x4e5;
  local_24 = 0x4e6;
  _SfDlgEnableControls_16(param_1,&local_2c,3,*(undefined4 *)(*param_2 + 0x22d8));
  uVar1 = __alldiv(*(undefined4 *)(*param_2 + 0x22e0),*(undefined4 *)(*param_2 + 0x22e4),10000,0);
  uVar5 = CONCAT44(uVar1,&DAT_00619b24);
  pHVar2 = GetDlgItem(param_1,0x4e4);
  SfSetWindowText(pHVar2,uVar5);
  dVar6 = (double)*(longlong *)(*param_2 + 0x7b8) * _DAT_006106c8;
  puVar3 = &DAT_00619ba4;
  pHVar2 = GetDlgItem(param_1,0x609);
  SfSetWindowText(pHVar2,puVar3,dVar6);
  dVar6 = (double)*(longlong *)(*param_2 + 0x22e8) * _DAT_006106c8;
  puVar3 = &DAT_00619ba4;
  pHVar2 = GetDlgItem(param_1,0x4e9);
  SfSetWindowText(pHVar2,puVar3,dVar6);
  FUN_004f6150(param_1,param_2,0x4e6,*(undefined4 *)(*param_2 + 0x22e0),
               *(undefined4 *)(*param_2 + 0x22e4));
  FUN_004f6150(param_1,param_2,0x60b,*(undefined4 *)(*param_2 + 0x7b8),
               *(undefined4 *)(*param_2 + 0x7bc));
  FUN_004f6150(param_1,param_2,0x4ef,*(undefined4 *)(*param_2 + 0x22e8),
               *(undefined4 *)(*param_2 + 0x22ec));
  pHVar2 = GetDlgItem(param_1,0x4f3);
  if (*(int *)(*param_2 + 200) == 0) {
    wParam_00 = 0;
  }
  else {
    wParam_00 = *(int *)(*param_2 + 0xcc) + 1;
  }
  SendMessageA(pHVar2,0x14e,wParam_00,0);
  pHVar2 = GetDlgItem(param_1,0x4f2);
  SendMessageA(pHVar2,0x14e,*(int *)(*param_2 + 0x22f0) + 1,0);
  local_34 = 0x483;
  local_30 = 0x484;
  pHVar2 = GetDlgItem(param_1,0x484);
  CheckDlgButton(param_1,0x481,*(UINT *)(*param_2 + 0xf8));
  _SfDlgEnableControls_16(param_1,&local_34,2,*(undefined4 *)(*param_2 + 0xf8));
  uVar7 = ZEXT48(local_20);
  uVar1 = __alldiv(*(undefined4 *)(*param_2 + 0x100),*(undefined4 *)(*param_2 + 0x104),10000,0);
  _SfLongToText_12(uVar1,uVar7);
  SetDlgItemTextA(param_1,0x483,local_20);
  lParam = 2000;
  wParam = GetDlgItem(param_1,0x483);
  SendMessageA(pHVar2,0x624,(WPARAM)wParam,lParam);
  SendMessageA(pHVar2,0x60e,0,1);
  SendMessageA(pHVar2,0x60f,0,2000);
  uVar5 = CONCAT44(*(int *)(*param_2 + 0x3850) % 0x4b,*(int *)(*param_2 + 0x3850) / 0x4b);
  pcVar4 = "%d:%02d";
  pHVar2 = GetDlgItem(param_1,0x63f);
  SfSetWindowText(pHVar2,pcVar4,uVar5);
  CheckDlgButton(param_1,0x4e7,*(UINT *)(*param_2 + 0x2e78));
  return;
}


