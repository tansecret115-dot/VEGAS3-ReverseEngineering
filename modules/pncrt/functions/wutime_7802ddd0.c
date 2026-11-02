/* Module: pncrt.dll
   Function: wutime
   Address: 7802ddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* wutime */

undefined4 __cdecl wutime(wchar_t *param_1,time_t *param_2)

{
  int _FileHandle;
  undefined4 uVar1;
  
                    /* 0x2ddd0  570  _wutime */
  _FileHandle = _wopen(param_1,0x8002);
  if (_FileHandle < 0) {
    return 0xffffffff;
  }
  uVar1 = futime(_FileHandle,param_2);
  _close(_FileHandle);
  return uVar1;
}


