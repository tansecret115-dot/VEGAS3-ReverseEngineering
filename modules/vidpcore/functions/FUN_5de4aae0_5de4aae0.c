/* Module: vidpcore.dll
   Function: FUN_5de4aae0
   Address: 5de4aae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de4aae0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),4,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x3f000000;
  }
  if (*(HWND *)(param_1 + 0x5c) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x5c),0x111,*(WPARAM *)(param_1 + 0x60),0);
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar1;
}


