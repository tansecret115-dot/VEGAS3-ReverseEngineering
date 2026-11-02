/* Module: sftrans1.dll
   Function: FUN_00413020
   Address: 00413020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00413020(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_EBX;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x8c);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + -8);
  iVar2 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x60);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(lpCriticalSection,param_1 + 0x70);
    if (-1 < iVar2) goto LAB_00413094;
  }
  (**(code **)(*piVar1 + 0x18))(0);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x60,param_1 + 0xa4);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x70,param_1 + 0xa4);
  lpCriticalSection = unaff_EBX;
LAB_00413094:
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


