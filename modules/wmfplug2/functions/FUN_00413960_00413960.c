/* Module: wmfplug2.dll
   Function: FUN_00413960
   Address: 00413960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00413960(HWND param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  
  BVar2 = *(BOOL *)(param_2 + 4);
  pHVar1 = GetDlgItem(param_1,0xf8);
  EnableWindow(pHVar1,BVar2);
  BVar2 = *(BOOL *)(param_2 + 4);
  pHVar1 = GetDlgItem(param_1,0xf9);
  EnableWindow(pHVar1,BVar2);
  BVar2 = *(BOOL *)(param_2 + 4);
  pHVar1 = GetDlgItem(param_1,0xfa);
  EnableWindow(pHVar1,BVar2);
  BVar2 = *(BOOL *)(param_2 + 4);
  pHVar1 = GetDlgItem(param_1,0xfb);
  EnableWindow(pHVar1,BVar2);
  BVar2 = *(BOOL *)(param_2 + 4);
  pHVar1 = GetDlgItem(param_1,0xfc);
  EnableWindow(pHVar1,BVar2);
  if (*(int *)(param_2 + 4) != 0) {
    BVar2 = *(BOOL *)(param_2 + 0x10);
    pHVar1 = GetDlgItem(param_1,0xd4);
    EnableWindow(pHVar1,BVar2);
    BVar2 = *(BOOL *)(param_2 + 0x14);
    pHVar1 = GetDlgItem(param_1,0xd5);
    EnableWindow(pHVar1,BVar2);
    BVar2 = *(BOOL *)(param_2 + 0x18);
    pHVar1 = GetDlgItem(param_1,0xf5);
    EnableWindow(pHVar1,BVar2);
    BVar2 = *(BOOL *)(param_2 + 0x1c);
    pHVar1 = GetDlgItem(param_1,0xf6);
    EnableWindow(pHVar1,BVar2);
    BVar2 = *(BOOL *)(param_2 + 0x20);
    pHVar1 = GetDlgItem(param_1,0xf7);
    EnableWindow(pHVar1,BVar2);
    return;
  }
  BVar2 = 0;
  pHVar1 = GetDlgItem(param_1,0xd4);
  EnableWindow(pHVar1,BVar2);
  BVar2 = 0;
  pHVar1 = GetDlgItem(param_1,0xd5);
  EnableWindow(pHVar1,BVar2);
  BVar2 = 0;
  pHVar1 = GetDlgItem(param_1,0xf5);
  EnableWindow(pHVar1,BVar2);
  BVar2 = 0;
  pHVar1 = GetDlgItem(param_1,0xf6);
  EnableWindow(pHVar1,BVar2);
  BVar2 = 0;
  pHVar1 = GetDlgItem(param_1,0xf7);
  EnableWindow(pHVar1,BVar2);
  return;
}


