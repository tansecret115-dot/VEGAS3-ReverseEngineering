/* Module: mp3plug.dll
   Function: FUN_5f6e49d0
   Address: 5f6e49d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6e49d0(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *_Memory;
  undefined3 extraout_var;
  
  _Memory = malloc(0x48);
  bVar1 = FUN_5f6fefb0(_Memory);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (_Memory != (undefined4 *)0x0) {
      FUN_5f6fefe0((void *)*_Memory);
      free(_Memory);
    }
    _Memory = (undefined4 *)0x0;
  }
  *param_1 = _Memory;
  return _Memory == (undefined4 *)0x0;
}


