/* Module: vidpcore.dll
   Function: FUN_5de0ac00
   Address: 5de0ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de0ac00(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x48),8,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x50,8,0);
    if (-1 < iVar1) goto LAB_5de0ac5a;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3ff00000;
LAB_5de0ac5a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return iVar1;
}


