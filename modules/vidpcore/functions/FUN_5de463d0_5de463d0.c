/* Module: vidpcore.dll
   Function: FUN_5de463d0
   Address: 5de463d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de463d0(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x60),0x10,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x70,0x10,0);
    if (-1 < iVar1) goto LAB_5de46433;
  }
  *(undefined4 *)(param_1 + 0x60) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 0x68) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 100) = 0x3fec28f5;
  *(undefined4 *)(param_1 + 0x6c) = 0x3fec28f5;
  *(undefined4 *)(param_1 + 0x70) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 0x78) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 0x74) = 0x3fec28f5;
  *(undefined4 *)(param_1 + 0x7c) = 0x3fec28f5;
LAB_5de46433:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar1;
}


