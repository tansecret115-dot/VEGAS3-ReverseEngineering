/* Module: vfplugs.dll
   Function: FUN_00403b70
   Address: 00403b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403b70(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0xdc,0x2b8,0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2,(int *)(param_1 + 0x394),4,0);
    if ((-1 < iVar2) && (iVar1 = *(int *)(param_1 + 0x394), 0 < iVar1)) {
      iVar2 = (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x398),iVar1 * 2,0);
    }
  }
  LeaveCriticalSection(unaff_ESI);
  return iVar2;
}


