/* Module: sfcdi.dll
   Function: FUN_5bf1c840
   Address: 5bf1c840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1c840(HWND param_1,int param_2,int param_3)

{
  int *dwNewLong;
  HWND pHVar1;
  BYTE *pBVar2;
  HWND pHVar3;
  int *piVar4;
  uint uVar5;
  uchar local_104 [260];
  
  dwNewLong = *(int **)(param_2 + 0x1c);
  dwNewLong[8] = 1;
  SetWindowLongA(param_1,-0x15,(LONG)dwNewLong);
  FUN_5bf24690(param_1,(HFONT)0x0);
  if (*dwNewLong == 0) {
    uVar5 = 0x8001;
    piVar4 = (int *)0x0;
    pHVar3 = (HWND)0x0;
    pHVar1 = GetParent(param_1);
    FUN_5bf2fd50(pHVar1,pHVar3,piVar4,uVar5);
  }
  if (param_3 == 0x15a) {
    pBVar2 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x158);
    FUN_5bf25750(local_104,pBVar2);
    SetDlgItemTextA(param_1,0x48c,(LPCSTR)local_104);
  }
  else if (param_3 == 0x15c) {
    piVar4 = dwNewLong;
    pHVar1 = GetDlgItem(param_1,0x48d);
    FUN_5bf1bda0(pHVar1,(int)piVar4);
  }
  dwNewLong[8] = 0;
  return 1;
}


