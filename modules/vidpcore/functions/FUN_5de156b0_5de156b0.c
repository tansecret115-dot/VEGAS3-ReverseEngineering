/* Module: vidpcore.dll
   Function: FUN_5de156b0
   Address: 5de156b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de156b0(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(iVar2 + 0x54) = 1;
  *(undefined4 *)(iVar2 + 0x58) = 1;
  *(undefined4 *)(iVar2 + 0x30) = 0x3f000000;
  *(undefined4 *)(iVar2 + 0x34) = 0x3f000000;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(iVar2 + 0x30),0x38,&param_1);
  *(undefined4 *)(iVar2 + 0xa0) = 1;
  if (*(HWND *)(iVar2 + 0x128) != (HWND)0x0) {
    PostMessageA(*(HWND *)(iVar2 + 0x128),0x111,*(WPARAM *)(iVar2 + 300),0);
  }
  piVar1 = *(int **)(iVar2 + 0x124);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


