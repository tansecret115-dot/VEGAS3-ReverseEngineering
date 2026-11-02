/* Module: vidcap30.exe
   Function: FUN_00469a10
   Address: 00469a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00469a10(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_LAB_00592be4;
  param_1[3] = &PTR_LAB_00592b9c;
  param_1[4] = &PTR_LAB_00592b88;
  param_1[0x26] = &PTR_LAB_00592b64;
  param_1[0x38] = &PTR_LAB_00592b1c;
  param_1[0x39] = &PTR_LAB_00592afc;
  if (param_1[0x4b] != 0) {
    _SfAudio_ResampleClose_4(param_1[0x4b]);
  }
  pvVar1 = (LPCVOID)param_1[0x47];
  if ((pvVar1 != (LPCVOID)0x0) && (pvVar1 != (LPCVOID)0x0)) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  if ((HANDLE)param_1[0x41] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x41]);
  }
  pvVar1 = (LPCVOID)param_1[0x4c];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  pvVar1 = (LPCVOID)param_1[0x4f];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  FUN_0057e480();
  return;
}


