/* Module: vidpcore.dll
   Function: FUN_5de22b50
   Address: 5de22b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de22b50(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x28),4,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(HWND *)(param_1 + 0x84) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x84),0x111,*(WPARAM *)(param_1 + 0x88),0);
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return iVar1;
}


