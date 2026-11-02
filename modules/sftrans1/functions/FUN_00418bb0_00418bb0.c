/* Module: sftrans1.dll
   Function: FUN_00418bb0
   Address: 00418bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00418bb0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_1 + 0x38,0x118,0);
  if (iVar1 < 0) {
    FUN_00474a80();
  }
  if (*(HWND *)(param_1 + 0x4b4) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x4b4),0x111,*(WPARAM *)(param_1 + 0x4b8),0);
  }
  *(undefined4 *)(param_1 + 0x268) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


