/* Module: sftrans1.dll
   Function: FUN_0041ce70
   Address: 0041ce70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ce70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40c));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x428);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0x400) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x400),0x111,*(WPARAM *)(param_1 + 0x404),0);
  }
  *(undefined4 *)(param_1 + 0x408) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40c));
  return iVar1;
}


