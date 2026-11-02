/* Module: mp3plug.dll
   Function: FUN_5f694dc0
   Address: 5f694dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f694dc0(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_LAB_5f72d0e0;
  if ((LPCVOID)param_1[1] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalFree(pvVar2);
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


