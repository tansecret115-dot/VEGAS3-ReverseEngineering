/* Module: vidcap30.exe
   Function: _SfLoadCulledMenu@20
   Address: 0047ab70
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfLoadCulledMenu_20
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  
                    /* 0x7ab70  523  _SfLoadCulledMenu@20 */
  iVar1 = _SfLoadMenu_8(param_1,param_2);
  if (iVar1 != 0) {
    _SfCullMenu_16(iVar1,param_3,param_4,param_5);
  }
  return iVar1;
}


