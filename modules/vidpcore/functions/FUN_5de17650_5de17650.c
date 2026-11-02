/* Module: vidpcore.dll
   Function: FUN_5de17650
   Address: 5de17650
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de17650(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),0x30,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x28f5c28f;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x3fe00000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x5c) = 0x40008f5c;
    *(undefined4 *)(param_1 + 0x60) = 4;
  }
  if (*(HWND *)(param_1 + 0x114) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x114),0x111,*(WPARAM *)(param_1 + 0x118),0);
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


