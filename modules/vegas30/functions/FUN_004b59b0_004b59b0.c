/* Module: vegas30.exe
   Function: FUN_004b59b0
   Address: 004b59b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b59b0(HWND param_1,int *param_2)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  
  iVar1 = *param_2;
  if (((*(char *)(iVar1 + 8000) == '\0') && (*(char *)(iVar1 + 0x2088) == '\0')) &&
     (*(char *)(iVar1 + 0x21b0) == '\0')) {
    BVar3 = 0;
    pHVar2 = GetDlgItem(param_1,0x490);
    EnableWindow(pHVar2,BVar3);
    return;
  }
  BVar3 = 1;
  pHVar2 = GetDlgItem(param_1,0x490);
  EnableWindow(pHVar2,BVar3);
  return;
}


