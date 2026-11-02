/* Module: vidpcore.dll
   Function: FUN_5de22c20
   Address: 5de22c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de22c20(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x6c),4,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x70,4,0);
    if (-1 < iVar1) goto LAB_5de22c6f;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
LAB_5de22c6f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return iVar1;
}


