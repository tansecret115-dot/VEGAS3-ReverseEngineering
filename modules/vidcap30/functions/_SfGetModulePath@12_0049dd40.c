/* Module: vidcap30.exe
   Function: _SfGetModulePath@12
   Address: 0049dd40
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetModulePath_12(HMODULE param_1,undefined1 *param_2,undefined4 param_3)

{
  DWORD DVar1;
  CHAR local_104 [260];
  
                    /* 0x9dd40  416  _SfGetModulePath@12 */
  *param_2 = 0;
  DVar1 = GetModuleFileNameA(param_1,local_104,0x104);
  if (DVar1 != 0) {
    _SfGetPathNameFromFilePath_12(local_104,param_2,param_3);
  }
  return;
}


