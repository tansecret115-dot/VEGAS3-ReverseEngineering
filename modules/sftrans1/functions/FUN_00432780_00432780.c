/* Module: sftrans1.dll
   Function: FUN_00432780
   Address: 00432780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00432780(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_EBX;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x13c);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + -8);
  iVar2 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x60);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(lpCriticalSection,param_1 + 200);
    if (-1 < iVar2) goto LAB_004327fa;
  }
  (**(code **)(*piVar1 + 0x18))(0);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x60,param_1 + 0x158);
  (**(code **)(*piVar1 + 0x24))(param_1 + 200,param_1 + 0x158);
  lpCriticalSection = unaff_EBX;
LAB_004327fa:
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


