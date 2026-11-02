/* Module: sftrans1.dll
   Function: FUN_0041e080
   Address: 0041e080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041e080(int param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x61c));
  iVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x638);
  if (iVar1 < 0) {
    (**(code **)(*(int *)(param_1 + -8) + 0x18))(0);
  }
  if (*(HWND *)(param_1 + 0x610) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x610),0x111,*(WPARAM *)(param_1 + 0x614),0);
  }
  *(undefined4 *)(param_1 + 0x618) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x61c));
  return iVar1;
}


