/* Module: vidpcore.dll
   Function: FUN_5de32720
   Address: 5de32720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de32720(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(iVar1 + 0x58) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = 1;
  *(undefined4 *)(iVar1 + 0x68) = 1;
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
  *(undefined4 *)(iVar1 + 0x6c) = 0x3d4ccccd;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(iVar1 + 0x34),0x3c,&param_1);
  if (*(HWND *)(iVar1 + 0x13c) != (HWND)0x0) {
    PostMessageA(*(HWND *)(iVar1 + 0x13c),0x111,*(WPARAM *)(iVar1 + 0x140),0);
  }
  *(undefined4 *)(iVar1 + 0xac) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


