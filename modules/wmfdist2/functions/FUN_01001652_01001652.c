/* Module: wmfdist2.exe
   Function: FUN_01001652
   Address: 01001652
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01001652(undefined4 *param_1)

{
  FARPROC pFVar1;
  BOOL BVar2;
  _SID_IDENTIFIER_AUTHORITY local_18;
  HMODULE local_10;
  undefined4 local_c;
  PSID local_8;
  
  local_c = 0;
  local_18.Value[0] = '\0';
  local_18.Value[1] = '\0';
  local_18.Value[2] = '\0';
  local_18.Value[3] = '\0';
  local_18.Value[4] = '\0';
  local_18.Value[5] = '\x05';
  local_10 = LoadLibraryA("advapi32.dll");
  if (local_10 != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(local_10,"CheckTokenMembership");
    if (pFVar1 != (FARPROC)0x0) {
      local_c = 1;
      *param_1 = 0;
      BVar2 = AllocateAndInitializeSid(&local_18,'\x02',0x20,0x220,0,0,0,0,0,0,&local_8);
      if (BVar2 != 0) {
        (*pFVar1)(0,local_8,param_1);
        FreeSid(local_8);
      }
    }
    FreeLibrary(local_10);
  }
  return local_c;
}


