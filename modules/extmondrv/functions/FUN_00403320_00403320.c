/* Module: extmondrv.dll
   Function: FUN_00403320
   Address: 00403320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403320(int param_1,int param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x90);
  EnterCriticalSection(lpCriticalSection);
  if (param_2 < **(int **)(param_1 + 0x1c)) {
    iVar1 = FUN_00404500(*(undefined4 **)((*(int **)(param_1 + 0x1c))[2] + param_2 * 4),param_3);
    LeaveCriticalSection(lpCriticalSection);
    return iVar1;
  }
  *param_3 = 0;
  LeaveCriticalSection(lpCriticalSection);
  return -0x7ffbfdea;
}


