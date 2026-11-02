/* Module: mp3plug.dll
   Function: FUN_5f699850
   Address: 5f699850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f699850(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_5f72d344;
  FUN_5f699940((int)param_1);
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalFree(pvVar1);
  }
  return;
}


