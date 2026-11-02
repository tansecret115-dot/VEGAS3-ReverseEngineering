/* Module: vidpcore.dll
   Function: FUN_5de40110
   Address: 5de40110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de40110(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x70),0x18);
  if ((iVar1 < 0) ||
     (iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1 + 0x88,0x18,0), iVar1 < 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x84) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x9c) = 0x3ff00000;
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


