/* Module: sftrans1.dll
   Function: FUN_00427710
   Address: 00427710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00427710(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd4));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0xec);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 200) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 200),0x111,*(WPARAM *)(param_1 + 0xcc),0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd4));
  return iVar1;
}


