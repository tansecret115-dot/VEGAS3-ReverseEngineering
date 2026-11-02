/* Module: sfs4rw.dll
   Function: FUN_00408ea0
   Address: 00408ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408ea0(int param_1,HWND param_2)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  LPCSTR lpString;
  
  hWnd = GetDlgItem(param_2,0xe73);
  if (hWnd == (HWND)0x0) {
    return;
  }
  iVar2 = FUN_004061d0(*(int *)(param_1 + 0x170),*(int *)(param_1 + 0x174));
  if (iVar2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x240);
  if (iVar1 == 1) {
    lpString = *(LPCSTR *)(iVar2 + 0x368);
  }
  else if (iVar1 == 2) {
    lpString = *(LPCSTR *)(iVar2 + 0x36c);
  }
  else {
    if (iVar1 != 3) goto LAB_00408f09;
    lpString = *(LPCSTR *)(iVar2 + 0x370);
  }
  if (lpString != (LPCSTR)0x0) {
    SetWindowTextA(hWnd,lpString);
    return;
  }
LAB_00408f09:
  SetWindowTextA(hWnd,"");
  return;
}


