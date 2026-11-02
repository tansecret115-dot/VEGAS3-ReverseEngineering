/* Module: sftrans1.dll
   Function: FUN_0041cfe0
   Address: 0041cfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041cfe0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_EBX;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x40c);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + -8);
  iVar2 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x60);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(lpCriticalSection,param_1 + 0x230);
    if (-1 < iVar2) goto LAB_0041d05a;
  }
  (**(code **)(*piVar1 + 0x18))(0);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x60,param_1 + 0x428);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x230,param_1 + 0x428);
  lpCriticalSection = unaff_EBX;
LAB_0041d05a:
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


