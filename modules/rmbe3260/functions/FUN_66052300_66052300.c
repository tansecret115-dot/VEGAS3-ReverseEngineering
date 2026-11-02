/* Module: rmbe3260.dll
   Function: FUN_66052300
   Address: 66052300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66052300(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068930;
  if ((HANDLE)param_1[4] != (HANDLE)0xffffffff) {
    FindClose((HANDLE)param_1[4]);
    param_1[4] = 0xffffffff;
  }
  FUN_6605b770(param_1 + 1);
  return;
}


