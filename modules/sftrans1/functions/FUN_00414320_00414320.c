/* Module: sftrans1.dll
   Function: FUN_00414320
   Address: 00414320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414320(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30c));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x328);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0x300) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x300),0x111,*(WPARAM *)(param_1 + 0x304),0);
  }
  *(undefined4 *)(param_1 + 0x308) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30c));
  return iVar1;
}


