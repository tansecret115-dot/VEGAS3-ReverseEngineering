/* Module: vegas30.exe
   Function: FUN_0052f450
   Address: 0052f450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052f450(HWND param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  BOOL bEnable;
  HWND hWnd;
  bool bVar3;
  
  iVar2 = (int)param_2;
  uVar1 = *(uint *)((int)param_2 + 0xb3c);
  bVar3 = false;
  param_2 = (int *)0x0;
  iVar2 = FUN_0052ea80(param_1,iVar2,&param_2);
  if ((iVar2 == 0) && (param_2 != (int *)0x0)) {
    iVar2 = (**(code **)(*param_2 + 0x6c))(param_2);
    bVar3 = iVar2 != 0;
    (**(code **)(param_1->unused + 8))(param_1);
  }
  if (((uVar1 & 0x30) == 0) && (bVar3)) {
    bEnable = 1;
  }
  else {
    bEnable = 0;
  }
  hWnd = GetDlgItem(param_1,9);
  EnableWindow(hWnd,bEnable);
  return;
}


