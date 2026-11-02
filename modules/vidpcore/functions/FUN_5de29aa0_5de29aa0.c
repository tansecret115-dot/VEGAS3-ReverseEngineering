/* Module: vidpcore.dll
   Function: FUN_5de29aa0
   Address: 5de29aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de29aa0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 100,0x7c,0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2,(int *)(param_1 + 0xe0),4,0);
    if ((-1 < iVar2) && (iVar1 = *(int *)(param_1 + 0xe0), 0 < iVar1)) {
      iVar2 = (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0xe4),iVar1 * 2,0);
    }
  }
  LeaveCriticalSection(unaff_ESI);
  return iVar2;
}


