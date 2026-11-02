/* Module: sftrans1.dll
   Function: FUN_004860a0
   Address: 004860a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_004860a0(int param_1,undefined4 param_2,int param_3)

{
  HWND hWnd;
  int iVar1;
  tagRECT *lpRect;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (*(HWND *)(param_3 + 4) != (HWND)0x0)) {
    lpRect = &local_10;
    hWnd = GetParent(*(HWND *)(param_3 + 4));
    GetWindowRect(hWnd,lpRect);
    GetWindowRect(*(HWND *)(iVar1 + 4),&local_20);
    SetWindowPos(*(HWND *)(iVar1 + 4),*(HWND *)(param_1 + 0x24),*(int *)(param_1 + 0x14),
                 *(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14),
                 *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18),0);
    GetWindowRect(*(HWND *)(iVar1 + 4),&local_20);
    param_3 = iVar1;
    iVar1 = FUN_004dc110(*(undefined4 *)(param_1 + 0x28),param_2,&param_3,1);
    return iVar1 == 0;
  }
  return false;
}


