/* Module: sftrans1.dll
   Function: FUN_00417bd0
   Address: 00417bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417bd0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xcc));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0xe8);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0xc0) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xc0),0x111,*(WPARAM *)(param_1 + 0xc4),0);
  }
  *(undefined4 *)(param_1 + 200) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xcc));
  return iVar1;
}


