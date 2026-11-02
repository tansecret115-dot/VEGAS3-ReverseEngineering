/* Module: sftrans1.dll
   Function: FUN_00412f30
   Address: 00412f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00412f30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8c));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0xa4);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0x80) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x80),0x111,*(WPARAM *)(param_1 + 0x84),0);
  }
  *(undefined4 *)(param_1 + 0x88) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8c));
  return iVar1;
}


