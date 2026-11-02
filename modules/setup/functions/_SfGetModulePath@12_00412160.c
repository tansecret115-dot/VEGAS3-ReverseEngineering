/* Module: Setup.exe
   Function: _SfGetModulePath@12
   Address: 00412160
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetModulePath_12(HMODULE param_1,uchar *param_2,uint param_3)

{
  DWORD DVar1;
  uchar local_104 [260];
  
                    /* 0x12160  164  _SfGetModulePath@12 */
  *param_2 = '\0';
  DVar1 = GetModuleFileNameA(param_1,(LPSTR)local_104,0x104);
  if (DVar1 != 0) {
    _SfGetPathNameFromFilePath_12(local_104,param_2,param_3);
  }
  return;
}


