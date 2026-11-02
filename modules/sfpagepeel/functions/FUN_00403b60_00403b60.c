/* Module: sfpagepeel.dll
   Function: FUN_00403b60
   Address: 00403b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403b60(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_EBX;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xdc);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + -8);
  iVar2 = (**(code **)(*(int *)(param_1 + -8) + 0x1c))(param_2,param_1 + 0x60);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(lpCriticalSection,param_1 + 0x98);
    if (-1 < iVar2) goto LAB_00403bda;
  }
  (**(code **)(*piVar1 + 0x18))(0);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x60,param_1 + 0xf8);
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x98,param_1 + 0xf8);
  lpCriticalSection = unaff_EBX;
LAB_00403bda:
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


