/* Module: sfmarket2.dll
   Function: FUN_0042f060
   Address: 0042f060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042f060(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  code *pcVar3;
  
  pvVar1 = (LPCVOID)param_1[3];
  *param_1 = &PTR_FUN_0049c928;
  pcVar3 = GlobalFree_exref;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    pcVar3 = GlobalFree_exref;
    GlobalFree(pvVar2);
    param_1[3] = 0;
  }
  pvVar1 = (LPCVOID)param_1[4];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    (*pcVar3)(pvVar2);
    param_1[4] = 0;
  }
  pvVar1 = (LPCVOID)param_1[7];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    (*pcVar3)(pvVar2);
    param_1[7] = 0;
  }
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    (*pcVar3)(pvVar2);
    param_1[6] = 0;
  }
  return;
}


