/* Module: sfpublish.dll
   Function: FUN_00415640
   Address: 00415640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00415640(undefined4 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = LoadLibraryA("MAPI32.DLL");
  param_1[0xd] = hModule;
  if (hModule < (HMODULE)0x20) {
    return 2;
  }
  pFVar1 = GetProcAddress(hModule,"MAPILogon");
  *param_1 = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPILogoff");
  param_1[1] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPISendMail");
  param_1[2] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPISendDocuments");
  param_1[3] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPIFindNext");
  param_1[4] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPIReadMail");
  param_1[5] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPISaveMail");
  param_1[6] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPIDeleteMail");
  param_1[7] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPIFreeBuffer");
  param_1[8] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPIAddress");
  param_1[9] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPIDetails");
  param_1[10] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  pFVar1 = GetProcAddress((HMODULE)param_1[0xd],"MAPIResolveName");
  param_1[0xb] = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  param_1[0xc] = 1;
  return 0;
}


