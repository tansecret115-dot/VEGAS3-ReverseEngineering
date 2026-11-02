/* Module: sftrans1.dll
   Function: FUN_00426310
   Address: 00426310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00426310(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14c));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x168);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0x140) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x140),0x111,*(WPARAM *)(param_1 + 0x144),0);
  }
  *(undefined4 *)(param_1 + 0x148) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14c));
  return iVar1;
}


