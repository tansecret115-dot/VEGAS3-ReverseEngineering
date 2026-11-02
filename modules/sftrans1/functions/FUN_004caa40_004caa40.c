/* Module: sftrans1.dll
   Function: FUN_004caa40
   Address: 004caa40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004caa40(LPCSTR param_1,HINSTANCE param_2)

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


