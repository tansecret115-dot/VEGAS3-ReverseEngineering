/* Module: sftrans1.dll
   Function: FUN_00421230
   Address: 00421230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00421230(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x9c);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0x78) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x78),0x111,*(WPARAM *)(param_1 + 0x7c),0);
  }
  *(undefined4 *)(param_1 + 0x80) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  return iVar1;
}


