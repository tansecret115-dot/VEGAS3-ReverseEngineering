/* Module: vfplugs.dll
   Function: FUN_0040b970
   Address: 0040b970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040b970(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  HWND hWnd_00;
  LPARAM LVar3;
  int *unaff_ESI;
  int iVar4;
  int **ppiVar5;
  int *local_110 [68];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_110[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00486ab0,local_110);
  }
  (**(code **)(*local_110[0] + 0x34))(local_110[0],param_1 + 0x50,0x20);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6a5);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6a6);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6a7);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd_00,0x610,1,LVar3);
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 == 0) {
    pHVar2 = *(HWND *)(param_1 + 0x30);
    iVar4 = 0x6aa;
  }
  else if (iVar4 == 1) {
    pHVar2 = *(HWND *)(param_1 + 0x30);
    iVar4 = 0x6a9;
  }
  else {
    if (iVar4 != 2) goto LAB_0040ba8a;
    pHVar2 = *(HWND *)(param_1 + 0x30);
    iVar4 = 0x6a8;
  }
  CheckRadioButton(pHVar2,0x6a8,0x6aa,iVar4);
LAB_0040ba8a:
  FUN_0042a040((uchar *)local_110,"%.4f");
  ppiVar5 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6b2);
  FUN_0042ba00(pHVar2,(uchar *)ppiVar5);
  FUN_0042a040((uchar *)local_110,"%.4f");
  ppiVar5 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6b3);
  FUN_0042ba00(pHVar2,(uchar *)ppiVar5);
  FUN_0042a040((uchar *)local_110,"%.4f");
  ppiVar5 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6b4);
  FUN_0042ba00(pHVar2,(uchar *)ppiVar5);
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x6ab,*(UINT *)(param_1 + 0x6c));
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


