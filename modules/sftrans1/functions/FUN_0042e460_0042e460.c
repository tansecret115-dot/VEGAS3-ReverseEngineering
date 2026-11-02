/* Module: sftrans1.dll
   Function: FUN_0042e460
   Address: 0042e460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e460(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_1 + 0x70,0x1c,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0x8c,0x1c,0);
    if (-1 < iVar1) goto LAB_0042e4b7;
  }
  FUN_004ad4d0();
  FUN_004ad4d0();
LAB_0042e4b7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


