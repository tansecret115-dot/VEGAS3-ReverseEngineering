/* Module: oggplug.dll
   Function: FUN_00408b70
   Address: 00408b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408b70(int *param_1)

{
  int *piVar1;
  
  FUN_00408fa0(param_1);
  piVar1 = (int *)param_1[0x4d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x4d] = 0;
  if ((HANDLE)param_1[0x74] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x74]);
  }
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  if ((HANDLE)param_1[3] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[3]);
  }
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  return;
}


