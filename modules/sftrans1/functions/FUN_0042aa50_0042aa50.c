/* Module: sftrans1.dll
   Function: FUN_0042aa50
   Address: 0042aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042aa50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xac));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 200);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xa0),0x111,*(WPARAM *)(param_1 + 0xa4),0);
  }
  *(undefined4 *)(param_1 + 0xa8) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xac));
  return iVar1;
}


