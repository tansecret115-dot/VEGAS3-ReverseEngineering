/* Module: sftrans1.dll
   Function: FUN_00427810
   Address: 00427810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00427810(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_EBX;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd4);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + -8);
  iVar2 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x60);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(lpCriticalSection,param_1 + 0x94);
    if (-1 < iVar2) goto LAB_0042788a;
  }
  (**(code **)(*piVar1 + 0x18))(0);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x60,param_1 + 0xec);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x94,param_1 + 0xec);
  lpCriticalSection = unaff_EBX;
LAB_0042788a:
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


