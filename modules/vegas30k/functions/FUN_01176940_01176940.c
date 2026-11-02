/* Module: vegas30k.dll
   Function: FUN_01176940
   Address: 01176940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01176940(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x7a];
  *param_1 = &PTR_LAB_011ea424;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))(piVar1,0);
    (**(code **)(*(int *)param_1[0x7a] + 0x3c))((int *)param_1[0x7a],0,0);
    (**(code **)(*(int *)param_1[0x7a] + 8))((int *)param_1[0x7a]);
  }
  piVar1 = (int *)param_1[0x7b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x80];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetEvent((HANDLE)param_1[0xe]);
  CloseHandle((HANDLE)param_1[0xe]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


