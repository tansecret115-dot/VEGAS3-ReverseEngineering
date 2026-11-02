/* Module: mp3plug.dll
   Function: FUN_5f6ce290
   Address: 5f6ce290
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_5f6ce290(uint param_1,uint param_2,uint param_3)

{
  uint *_Memory;
  uint uVar1;
  int iVar2;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (((((((param_1 == 8000) || (param_1 == 0x2b11)) || (param_1 == 12000)) ||
        ((param_1 == 16000 || (param_1 == 0x5622)))) ||
       ((param_1 == 24000 || ((param_1 == 32000 || (param_1 == 0xac44)))))) || (param_1 == 48000))
     && (param_2 < 3)) {
    _Memory = calloc(1,0x418);
    if (_Memory == (uint *)0x0) {
      return (ulonglong)param_1 << 0x20;
    }
    FUN_5f6cd650(_Memory + 0x1e);
    _Memory[0x2c] = param_1;
    _Memory[1] = (uint)(float)param_1;
    _Memory[0x2d] = param_2;
    *_Memory = param_2;
    uVar1 = FUN_5f6cd5d0(param_1,param_2);
    _Memory[0x2e] = uVar1;
    _Memory[0x11] = param_3;
    if (uVar1 != 0) {
      iVar2 = FUN_5f6cda70(_Memory);
      if (iVar2 != 0) {
        return CONCAT44(extraout_EDX_00,_Memory);
      }
    }
    free(_Memory);
    return (ulonglong)extraout_EDX << 0x20;
  }
  return (ulonglong)param_1 << 0x20;
}


