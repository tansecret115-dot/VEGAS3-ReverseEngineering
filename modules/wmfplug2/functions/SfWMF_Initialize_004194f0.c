/* Module: wmfplug2.dll
   Function: SfWMF_Initialize
   Address: 004194f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfWMF_Initialize(struct HINSTANCE__ *) */

int SfWMF_Initialize(HINSTANCE__ *param_1)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_8;
  int local_4;
  
                    /* 0x194f0  29  ?SfWMF_Initialize@@YGHPAUHINSTANCE__@@@Z */
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ec,0,0x20019,
                        &local_8);
  if (LVar1 == 0) {
    iVar2 = FUN_0041d760(local_8,s_Version_0048892c,(LPBYTE)&local_4);
    if (-1 < iVar2) {
      RegCloseKey(local_8);
      if (local_4 == 1000) {
        return 1;
      }
      FUN_00419570();
      return 1;
    }
    RegCloseKey(local_8);
  }
  FUN_00419570();
  return 1;
}


