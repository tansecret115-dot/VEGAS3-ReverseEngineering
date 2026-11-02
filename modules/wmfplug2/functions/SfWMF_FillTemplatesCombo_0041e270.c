/* Module: wmfplug2.dll
   Function: SfWMF_FillTemplatesCombo
   Address: 0041e270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_FillTemplatesCombo(struct HWND__ *,int,int,int) */

long SfWMF_FillTemplatesCombo(HWND__ *param_1,int param_2,int param_3,int param_4)

{
  LSTATUS LVar1;
  
                    /* 0x1e270  15  ?SfWMF_FillTemplatesCombo@@YGJPAUHWND__@@HHH@Z */
  if (param_2 != 0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ec,0,0x20019,
                          (PHKEY)&param_2);
    if (LVar1 == 0) {
      FUN_0041e310((HKEY)param_2,param_1,0);
      RegCloseKey((HKEY)param_2);
    }
  }
  if (param_3 != 0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ac,0,0x20019,
                          (PHKEY)&param_2);
    if (LVar1 == 0) {
      FUN_0041e310((HKEY)param_2,param_1,param_4);
      RegCloseKey((HKEY)param_2);
    }
  }
  SendMessageA(param_1,0x14e,0,0);
  return 0;
}


