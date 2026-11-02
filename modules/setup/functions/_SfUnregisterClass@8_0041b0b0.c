/* Module: Setup.exe
   Function: _SfUnregisterClass@8
   Address: 0041b0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfUnregisterClass_8(LPCSTR param_1,HINSTANCE param_2)

{
  BOOL BVar1;
  tagWNDCLASSA local_28;
  
                    /* 0x1b0b0  358  _SfUnregisterClass@8 */
  if (param_1 != (LPCSTR)0x0) {
    BVar1 = GetClassInfoA(param_2,param_1,&local_28);
    if (BVar1 != 0) {
      UnregisterClassA(param_1,param_2);
    }
  }
  return;
}


