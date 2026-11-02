/* Module: sftrans1.dll
   Function: FUN_00418cb0
   Address: 00418cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00418cb0(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_1 + 0x270,0x118,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x388,0x118,0);
    if (-1 < iVar1) goto LAB_00418d10;
  }
  FUN_00474a80();
  FUN_00474a80();
LAB_00418d10:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


