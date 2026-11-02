/* Module: vidcap30.exe
   Function: FUN_0046aec0
   Address: 0046aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046aec0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00592ec4;
  param_1[3] = &PTR_LAB_00592e7c;
  param_1[4] = &PTR_LAB_00592e68;
  param_1[0x26] = &PTR_LAB_00592e44;
  param_1[0x38] = &PTR_LAB_00592dec;
  param_1[0x39] = &PTR_LAB_00592dcc;
  if ((LPVOID)param_1[0x53] != (LPVOID)0x0) {
    HeapFree((HANDLE)param_1[0x52],1,(LPVOID)param_1[0x53]);
  }
  if ((HANDLE)param_1[0x52] != (HANDLE)0x0) {
    HeapDestroy((HANDLE)param_1[0x52]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  FUN_0057e480();
  return;
}


