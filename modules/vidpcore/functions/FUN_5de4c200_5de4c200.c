/* Module: vidpcore.dll
   Function: FUN_5de4c200
   Address: 5de4c200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de4c200(int param_1,int *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION unaff_EDI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),0x30,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x9999999a;
    *(undefined4 *)(param_1 + 0x40) = 0x9999999a;
    *(undefined4 *)(param_1 + 0x3c) = 0x40159999;
    *(undefined4 *)(param_1 + 0x44) = 0x40159999;
    *(undefined4 *)(param_1 + 0x48) = 0x9999999a;
    *(undefined4 *)(param_1 + 0x50) = 0x9999999a;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3fa99999;
    *(undefined4 *)(param_1 + 0x54) = 0x3fa99999;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(HWND *)(param_1 + 0x114) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x114),0x111,*(WPARAM *)(param_1 + 0x118),0);
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  LeaveCriticalSection(unaff_EDI);
  return iVar1;
}


