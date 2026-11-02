/* Module: wmfplug2.dll
   Function: SfWMF_GetResampleRate
   Address: 0041d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetResampleRate(struct _GUID) */

long SfWMF_GetResampleRate(_GUID param_1)

{
  int iVar1;
  long local_4;
  
                    /* 0x1d7b0  22  ?SfWMF_GetResampleRate@@YGJU_GUID@@@Z */
  iVar1 = FUN_0041d810();
  if (-1 < iVar1) {
    FUN_0041d760((HKEY)param_1.Data1,"ResampleRate",(LPBYTE)&local_4);
    RegCloseKey((HKEY)param_1.Data1);
    return local_4;
  }
  return -1;
}


