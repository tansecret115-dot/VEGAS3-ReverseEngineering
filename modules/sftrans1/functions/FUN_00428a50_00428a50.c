/* Module: sftrans1.dll
   Function: FUN_00428a50
   Address: 00428a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00428a50(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x60),0x10,0);
  if ((iVar1 < 0) ||
     (iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x70,0x10,0), iVar1 < 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x9999999a;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0x3fb99999;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0x9999999a;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0x3fb99999;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


