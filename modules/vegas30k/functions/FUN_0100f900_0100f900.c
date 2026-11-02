/* Module: vegas30k.dll
   Function: FUN_0100f900
   Address: 0100f900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0100f900(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_011db588;
  if ((LPCVOID)param_1[3] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[3]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[3]);
    GlobalFree(pvVar1);
  }
  (**(code **)(*(int *)param_1[2] + 0x3c))((int *)param_1[2],param_1);
  (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
  return;
}


