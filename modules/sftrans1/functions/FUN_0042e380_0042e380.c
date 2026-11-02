/* Module: sftrans1.dll
   Function: FUN_0042e380
   Address: 0042e380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e380(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_1 + 0x34,0x1c,0);
  if (iVar1 < 0) {
    FUN_004ad4d0();
  }
  if (*(HWND *)(param_1 + 0xbc) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xbc),0x111,*(WPARAM *)(param_1 + 0xc0),0);
  }
  *(undefined4 *)(param_1 + 0x6c) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


