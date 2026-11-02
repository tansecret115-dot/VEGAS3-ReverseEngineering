/* Module: mp3plug.dll
   Function: DllUnregisterServer
   Address: 5f681580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DllUnregisterServer(void)

{
  OLECHAR local_154 [40];
  CHAR local_104 [260];
  
                    /* 0x1580  5  DllUnregisterServer */
  StringFromGUID2((GUID *)&DAT_5f72c420,local_154,0x27);
  wsprintfA(local_104,"CLSID\\%ls",local_154);
  FUN_5f681600((HKEY)0x80000000,local_104);
  FUN_5f6a01a0();
  return;
}


