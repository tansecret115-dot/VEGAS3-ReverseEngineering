/* Module: mpgmux.dll
   Function: FUN_1000ab20
   Address: 1000ab20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_1000ab20(uint param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  size_t _Size;
  
  if (param_1 < param_2) {
    return (undefined4 *)0x0;
  }
  puVar1 = _malloc(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_2 != 0) {
    param_2 = param_2 - 1;
  }
  _Size = (param_1 + param_2) * param_3;
  pvVar2 = _malloc(_Size);
  if (pvVar2 == (void *)0x0) {
    FUN_1000c3f0((undefined *)puVar1);
    return (undefined4 *)0x0;
  }
  *puVar1 = pvVar2;
  puVar1[2] = param_3;
  puVar1[1] = _Size;
  puVar1[3] = param_2;
  puVar1[4] = param_2;
  puVar1[5] = param_2;
  puVar1[6] = param_1 + param_2;
  return puVar1;
}


