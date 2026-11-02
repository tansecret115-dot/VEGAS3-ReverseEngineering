/* Module: sftrans1.dll
   Function: FUN_00414430
   Address: 00414430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414430(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_EBX;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30c);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + -8);
  iVar2 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x60);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(lpCriticalSection,param_1 + 0x1b0);
    if (-1 < iVar2) goto LAB_004144aa;
  }
  (**(code **)(*piVar1 + 0x18))(0);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x60,param_1 + 0x328);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x1b0,param_1 + 0x328);
  lpCriticalSection = unaff_EBX;
LAB_004144aa:
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


