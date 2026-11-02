/* Module: vidpcore.dll
   Function: FUN_5de106e0
   Address: 5de106e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de106e0(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x50),8,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x58,8,0);
    if (-1 < iVar1) goto LAB_5de1073a;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3ff00000;
LAB_5de1073a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


