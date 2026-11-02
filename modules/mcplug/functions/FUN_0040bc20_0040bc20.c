/* Module: mcplug.dll
   Function: FUN_0040bc20
   Address: 0040bc20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0040bc20(uint param_1,uint param_2,int param_3)

{
  undefined4 *_Memory;
  void *pvVar1;
  size_t _Size;
  
  if (param_1 < param_2) {
    return (undefined4 *)0x0;
  }
  _Memory = malloc(0x20);
  if (_Memory == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_2 != 0) {
    param_2 = param_2 - 1;
  }
  _Size = (param_1 + param_2) * param_3;
  pvVar1 = malloc(_Size);
  if (pvVar1 == (void *)0x0) {
    free(_Memory);
    return (undefined4 *)0x0;
  }
  *_Memory = pvVar1;
  _Memory[2] = param_3;
  _Memory[1] = _Size;
  _Memory[3] = param_2;
  _Memory[4] = param_2;
  _Memory[5] = param_2;
  _Memory[6] = param_1 + param_2;
  return _Memory;
}


