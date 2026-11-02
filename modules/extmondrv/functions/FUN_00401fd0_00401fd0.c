/* Module: extmondrv.dll
   Function: FUN_00401fd0
   Address: 00401fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401fd0(int param_1,LPWSTR param_2)

{
  int *piVar1;
  
  if (param_2 == (LPWSTR)0x0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0xc);
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  MultiByteToWideChar(0,1,"DV Source Filter",-1,param_2,0x80);
  param_2[0x7f] = L'\0';
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return 0;
}


