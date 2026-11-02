/* Module: pncrt.dll
   Function: utime
   Address: 7802d690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* utime */

undefined4 __cdecl utime(char *param_1,time_t *param_2)

{
  int _FileHandle;
  undefined4 uVar1;
  
                    /* 0x2d690  490  _utime */
  _FileHandle = _open(param_1,0x8002);
  if (_FileHandle < 0) {
    return 0xffffffff;
  }
  uVar1 = futime(_FileHandle,param_2);
  _close(_FileHandle);
  return uVar1;
}


