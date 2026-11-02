/* Module: vidpcore.dll
   Function: FUN_5deb8fb0
   Address: 5deb8fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb8fb0(LPCSTR param_1,HINSTANCE param_2)

{
  BOOL BVar1;
  tagWNDCLASSA local_28;
  
  if (param_1 != (LPCSTR)0x0) {
    BVar1 = GetClassInfoA(param_2,param_1,&local_28);
    if (BVar1 != 0) {
      UnregisterClassA(param_1,param_2);
    }
  }
  return;
}


