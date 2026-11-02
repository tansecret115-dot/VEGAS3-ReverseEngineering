/* Module: vidcap30.exe
   Function: FUN_00467100
   Address: 00467100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00467100(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  pvVar1 = (LPCVOID)param_1[0x2f];
  *param_1 = &PTR_LAB_0059278c;
  param_1[3] = &PTR_FUN_00592750;
  param_1[4] = &PTR_LAB_0059273c;
  param_1[0x28] = &PTR_LAB_00592708;
  if ((pvVar1 != (LPCVOID)0x0) && (pvVar1 != (LPCVOID)0x0)) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  pvVar1 = (LPCVOID)param_1[0x37];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  FUN_005816a0();
  return;
}


