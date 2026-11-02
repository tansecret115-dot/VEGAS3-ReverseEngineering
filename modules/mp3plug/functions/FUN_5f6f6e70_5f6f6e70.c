/* Module: mp3plug.dll
   Function: FUN_5f6f6e70
   Address: 5f6f6e70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6f6e70(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *pvVar1;
  
  _Memory = malloc(8);
  if (_Memory != (undefined4 *)0x0) {
    pvVar1 = malloc(0x900);
    *_Memory = 0;
    _Memory[1] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      if (_Memory != (undefined4 *)0x0) {
        if ((void *)_Memory[1] != (void *)0x0) {
          free((void *)_Memory[1]);
        }
        free(_Memory);
      }
      _Memory = (undefined4 *)0x0;
    }
  }
  *param_1 = _Memory;
  return _Memory == (undefined4 *)0x0;
}


