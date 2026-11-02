/* Module: vfplugs.dll
   Function: FUN_00407a30
   Address: 00407a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407a30(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x80),0x20);
  if ((iVar1 < 0) ||
     (iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1 + 0xa0,0x20,0), iVar1 < 0)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined4 *)(param_1 + 0x9c) = 1;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 1;
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


