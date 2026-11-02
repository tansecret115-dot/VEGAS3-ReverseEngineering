/* Module: vidpcore.dll
   Function: FUN_5de417f0
   Address: 5de417f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de417f0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),0x30,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(HWND *)(param_1 + 0x114) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x114),0x111,*(WPARAM *)(param_1 + 0x118),0);
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar1;
}


