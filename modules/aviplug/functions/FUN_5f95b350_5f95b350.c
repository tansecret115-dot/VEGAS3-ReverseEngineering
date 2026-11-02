/* Module: aviplug.dll
   Function: FUN_5f95b350
   Address: 5f95b350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95b350(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[10];
  *param_1 = &PTR_LAB_5f9d938c;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    *piVar1 = 0;
  }
  if ((HGLOBAL)param_1[0x32] != (HGLOBAL)0x0) {
    GlobalUnlock((HGLOBAL)param_1[0x32]);
    GlobalFree((HGLOBAL)param_1[0x32]);
  }
  if ((HGLOBAL)param_1[0x33] != (HGLOBAL)0x0) {
    GlobalUnlock((HGLOBAL)param_1[0x33]);
    GlobalFree((HGLOBAL)param_1[0x33]);
  }
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


