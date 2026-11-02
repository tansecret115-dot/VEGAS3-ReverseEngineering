/* Module: enlv3260.dll
   Function: FUN_661d1430
   Address: 661d1430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d1430(int param_1,int param_2)

{
  int *piVar1;
  BOOL BVar2;
  
  piVar1 = (int *)(param_1 + 0x28);
  if (*piVar1 == 0) {
    return -0x7ffbfff9;
  }
  param_1 = -1;
  BVar2 = ReleaseSemaphore(*(HANDLE *)(*piVar1 + param_2 * 4),1,&param_1);
  return (-(uint)(BVar2 != 0) & 0x7fffbffb) + 0x80004005;
}


