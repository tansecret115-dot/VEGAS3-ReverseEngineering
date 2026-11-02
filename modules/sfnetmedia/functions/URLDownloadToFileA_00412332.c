/* Module: sfnetmedia.dll
   Function: URLDownloadToFileA
   Address: 00412332
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT URLDownloadToFileA(LPUNKNOWN param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4,
                          LPBINDSTATUSCALLBACK param_5)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00412332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = URLDownloadToFileA(param_1,param_2,param_3,param_4,param_5);
  return HVar1;
}


