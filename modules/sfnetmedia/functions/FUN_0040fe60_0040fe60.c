/* Module: sfnetmedia.dll
   Function: FUN_0040fe60
   Address: 0040fe60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040fe60(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  code *pcVar3;
  
  pvVar1 = (LPCVOID)param_1[1];
  *param_1 = &PTR_FUN_0043600c;
  pcVar3 = GlobalFree_exref;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    pcVar3 = GlobalFree_exref;
    GlobalFree(pvVar2);
    param_1[1] = 0;
  }
  pvVar1 = (LPCVOID)param_1[2];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    (*pcVar3)(pvVar2);
    param_1[2] = 0;
  }
  pvVar1 = (LPCVOID)param_1[3];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    (*pcVar3)(pvVar2);
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
  return;
}


