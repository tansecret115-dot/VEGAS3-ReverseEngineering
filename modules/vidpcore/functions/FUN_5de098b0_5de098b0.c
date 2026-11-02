/* Module: vidpcore.dll
   Function: FUN_5de098b0
   Address: 5de098b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de098b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0xd8);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0xb0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xb0),0x111,*(WPARAM *)(param_1 + 0xb4),0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc));
  return iVar1;
}


