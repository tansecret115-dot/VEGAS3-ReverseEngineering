/* Module: sftrans1.dll
   Function: FUN_00432670
   Address: 00432670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00432670(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x158);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0x130) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x130),0x111,*(WPARAM *)(param_1 + 0x134),0);
  }
  *(undefined4 *)(param_1 + 0x138) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  return iVar1;
}


