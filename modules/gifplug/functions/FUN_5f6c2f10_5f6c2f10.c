/* Module: gifplug.dll
   Function: FUN_5f6c2f10
   Address: 5f6c2f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6c2f10(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  pvVar1 = *(LPCVOID *)((int)param_1 + 0x32d);
  *param_1 = "0Il_2.0";
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x32d) = 0;
  }
  pvVar1 = *(LPCVOID *)((int)param_1 + 0x483);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x483) = 0;
  }
  return;
}


