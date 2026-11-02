/* Module: vidpcore.dll
   Function: FUN_5de0ab30
   Address: 5de0ab30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de0ab30(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x30),8,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x3ff00000;
  }
  if (*(HWND *)(param_1 + 0x6c) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x6c),0x111,*(WPARAM *)(param_1 + 0x70),0);
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return iVar1;
}


