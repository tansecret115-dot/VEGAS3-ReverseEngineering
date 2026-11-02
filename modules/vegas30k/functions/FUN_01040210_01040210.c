/* Module: vegas30k.dll
   Function: FUN_01040210
   Address: 01040210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01040210(LPVOID param_1)

{
  LPVOID pv;
  int *piVar1;
  
  pv = *(LPVOID *)((int)param_1 + 0x44);
  piVar1 = *(int **)((int)param_1 + 0x3c);
  if ((pv != (LPVOID)0x0) && (pv != (LPVOID)((int)param_1 + 0x48))) {
    CoTaskMemFree(pv);
    *(undefined4 *)((int)param_1 + 0x44) = 0;
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  if (param_1 != (LPVOID)0x0) {
    CoTaskMemFree(param_1);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


