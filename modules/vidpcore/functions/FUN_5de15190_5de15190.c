/* Module: vidpcore.dll
   Function: FUN_5de15190
   Address: 5de15190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de15190(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(iVar1 + 0x58) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = 1;
  *(undefined4 *)(iVar1 + 0x34) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0x38) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(iVar1 + 0x34),0x38,&param_1);
  if (*(HWND *)(iVar1 + 300) != (HWND)0x0) {
    PostMessageA(*(HWND *)(iVar1 + 300),0x111,*(WPARAM *)(iVar1 + 0x130),0);
  }
  *(undefined4 *)(iVar1 + 0xa4) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


