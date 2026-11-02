/* Module: sfcdi.dll
   Function: FUN_5bf38460
   Address: 5bf38460
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5bf38460(int *param_1,undefined *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar2 = (int *)*param_1;
  do {
    if (piVar2 == param_1) {
LAB_5bf384c4:
      if ((piVar2 != (int *)0x0) && (piVar2 == param_1)) {
        piVar2 = (int *)0x0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      return piVar2;
    }
    iVar1 = (*(code *)param_2)(piVar2,param_3);
    if (iVar1 != 0) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *piVar2 = 0;
      piVar2[1] = 0;
      if (((int *)*param_1 == param_1) && ((HANDLE)param_1[8] != (HANDLE)0x0)) {
        ResetEvent((HANDLE)param_1[8]);
      }
      goto LAB_5bf384c4;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}


