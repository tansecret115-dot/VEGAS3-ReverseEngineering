/* Module: mp3rw.dll
   Function: FUN_00407320
   Address: 00407320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407320(HWND param_1,int param_2)

{
  HWND pHVar1;
  BYTE *pBVar2;
  HWND pHVar3;
  int *piVar4;
  uint uVar5;
  BOOL BVar6;
  int nCmdShow;
  int iVar7;
  uchar local_104 [260];
  
  iVar7 = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,iVar7);
  FUN_0041ff20(param_1,(HFONT)0x0);
  uVar5 = 0x8001;
  piVar4 = (int *)0x0;
  pHVar3 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429fa0(pHVar1,pHVar3,piVar4,uVar5);
  pBVar2 = FUN_0041f9f0(DAT_004a811c,0x2753);
  FUN_00420fe0(local_104,pBVar2);
  SetDlgItemTextA(param_1,0xffff,(LPCSTR)local_104);
  pBVar2 = FUN_0041f9f0(DAT_004a811c,0x2754);
  FUN_00420fe0(local_104,pBVar2);
  SetDlgItemTextA(param_1,0x4dd,(LPCSTR)local_104);
  BVar6 = 0;
  pHVar1 = GetDlgItem(param_1,0x1f43);
  EnableWindow(pHVar1,BVar6);
  nCmdShow = 0;
  pHVar1 = GetDlgItem(param_1,0x1f43);
  ShowWindow(pHVar1,nCmdShow);
  if (*(int *)(iVar7 + 0x244) == 0) {
    BVar6 = 0;
    pHVar1 = GetDlgItem(param_1,0x4dd);
    EnableWindow(pHVar1,BVar6);
    iVar7 = 0;
    pHVar1 = GetDlgItem(param_1,0x4dd);
    ShowWindow(pHVar1,iVar7);
  }
  return 1;
}


