/* Module: vidpcore.dll
   Function: FUN_5de4aba0
   Address: 5de4aba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de4aba0(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x44),4,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x48,4,0);
    if (-1 < iVar1) goto LAB_5de4abef;
  }
  *(undefined4 *)(param_1 + 0x44) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f000000;
LAB_5de4abef:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar1;
}


