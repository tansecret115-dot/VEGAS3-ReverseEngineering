/* Module: mp3plug.dll
   Function: FUN_5f6e0d80
   Address: 5f6e0d80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6e0d80(undefined4 *param_1)

{
  bool bVar1;
  void *_Memory;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  _Memory = malloc(0x28);
  bVar1 = FUN_5f6f4e00((undefined4 *)((int)_Memory + 0x14));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (_Memory != (void *)0x0) {
      FUN_5f6f4e30(*(void **)((int)_Memory + 0x14));
      FUN_5f6f6ee0(*(void **)((int)_Memory + 0x18));
      free(_Memory);
    }
    _Memory = (void *)0x0;
  }
  bVar1 = FUN_5f6f6e70((undefined4 *)((int)_Memory + 0x18));
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    if (_Memory != (void *)0x0) {
      FUN_5f6f4e30(*(void **)((int)_Memory + 0x14));
      FUN_5f6f6ee0(*(void **)((int)_Memory + 0x18));
      free(_Memory);
    }
    _Memory = (void *)0x0;
  }
  *param_1 = _Memory;
  return _Memory == (void *)0x0;
}


