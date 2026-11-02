/* Module: vegas30.exe
   Function: FUN_0052fa10
   Address: 0052fa10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052fa10(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  uint bEnable;
  int *unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  CHAR *pCVar3;
  int *piVar4;
  int cchMax;
  int *local_120 [2];
  undefined1 auStack_118 [20];
  CHAR aCStack_104 [260];
  
  local_120[0] = (int *)0x0;
  bEnable = 0;
  iVar1 = FUN_0052ea80(param_1,param_2,local_120);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_2 + 0xb3c);
    (**(code **)(*local_120[0] + 0x20))(local_120[0]);
    iVar1 = (**(code **)(*unaff_EBP + 0x78))(unaff_EBP);
    bEnable = (uint)(iVar1 == 0);
    (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,&stack0xfffffed8);
    *(uint *)(param_2 + 0x179c) = unaff_EDI >> 2 & 1;
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  pHVar2 = GetDlgItem(param_1,10);
  EnableWindow(pHVar2,bEnable);
  iVar1 = 0x470;
  pHVar2 = GetParent(param_1);
  pHVar2 = GetDlgItem(pHVar2,iVar1);
  FUN_004320f0(auStack_118,pHVar2);
  pCVar3 = aCStack_104;
  cchMax = 0x104;
  iVar1 = 0x480;
  pHVar2 = GetParent(param_1);
  GetDlgItemTextA(pHVar2,iVar1,pCVar3,cchMax);
  iVar1 = lstrlenA(aCStack_104);
  if (iVar1 != 0) {
    FUN_004321c0(aCStack_104,auStack_118,0x104);
  }
  pCVar3 = aCStack_104;
  iVar1 = 0x480;
  pHVar2 = GetParent(param_1);
  SetDlgItemTextA(pHVar2,iVar1,pCVar3);
  FUN_0052f3b0(param_1,param_2);
  FUN_0052f450(param_1,param_2);
  FUN_0052f4d0(param_1,param_2);
  FUN_0052f5a0(param_1,param_2);
  FUN_0052f7c0(param_1,param_2);
  return;
}


