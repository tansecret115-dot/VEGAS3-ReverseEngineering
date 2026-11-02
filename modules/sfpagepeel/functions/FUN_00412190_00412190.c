/* Module: sfpagepeel.dll
   Function: FUN_00412190
   Address: 00412190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00412190(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  LPCSTR pCVar2;
  HWND__ *pHVar3;
  tagPOINT *ptVar4;
  uint uVar5;
  undefined *puVar6;
  BOOL bEnable;
  CHAR local_104 [260];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  uVar5 = 0;
  ptVar4 = (tagPOINT *)0x0;
  pHVar3 = (HWND__ *)0x0;
  pHVar1 = GetParent(param_1);
  SfWndCenter(pHVar1,pHVar3,ptVar4,uVar5);
  puVar6 = &DAT_0047d96c;
  pCVar2 = FUN_00411460(0x521);
  wsprintfA(local_104,pCVar2,puVar6);
  SetDlgItemTextA(param_1,0x499,local_104);
  CheckRadioButton(param_1,0x470,0x528,0x528);
  bEnable = 0;
  *(undefined4 *)(dwNewLong + 300) = 0x528;
  pHVar1 = GetDlgItem(param_1,0x579);
  EnableWindow(pHVar1,bEnable);
  return 1;
}


