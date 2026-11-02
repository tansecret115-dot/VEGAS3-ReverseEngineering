/* Module: vegas30.exe
   Function: FUN_005445b0
   Address: 005445b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005445b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0061aae4;
  FUN_00546da0(1);
  if (param_1[0xe] != 0) {
    FUN_005446f0(0xd,0,0,0,0,0,0);
    WaitForSingleObject((HANDLE)param_1[0xe],0xffffffff);
    CloseHandle((HANDLE)param_1[0xe]);
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    _SfList_Destroy_4(param_1[0xf]);
  }
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
    param_1[4] = 0;
  }
  if ((HANDLE)param_1[3] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_00546ba0();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  *param_1 = &PTR_LAB_0061ab6c;
  return;
}


