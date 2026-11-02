/* Module: vegas30.exe
   Function: FUN_0050d3e0
   Address: 0050d3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050d3e0(HWND param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  _Memory = calloc(1,0x260);
  if (_Memory != (undefined4 *)0x0) {
    puVar4 = _Memory;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    SetWindowLongA(param_1,-0x15,(LONG)_Memory);
    uVar1 = *param_2;
    _Memory[1] = param_1;
    *_Memory = uVar1;
    _Memory[2] = 1;
    _Memory[0x42] = _Memory[0x42] | 4;
    pvVar2 = calloc(1,0x28);
    _Memory[0x47] = pvVar2;
    if (pvVar2 != (void *)0x0) {
      local_8 = 0xfffffc18;
      local_4 = 2000;
      FUN_00541e80(pvVar2,&local_8,0,0,1,10);
      _Memory[0x3c] = _Memory[0x3c] | 4;
      pvVar2 = calloc(1,0x28);
      _Memory[0x41] = pvVar2;
      if (pvVar2 != (void *)0x0) {
        FUN_00541e80(pvVar2,&local_8,0,1,1,10);
        _Memory[0x48] = _Memory[0x48] | 4;
        iVar3 = FUN_0050d520(_Memory,DAT_006471fc);
        _Memory[0x53] = iVar3;
        if (iVar3 != 0) {
          return 1;
        }
      }
    }
    if ((void *)_Memory[0x41] != (void *)0x0) {
      free((void *)_Memory[0x41]);
    }
    if ((void *)_Memory[0x47] != (void *)0x0) {
      free((void *)_Memory[0x47]);
    }
    free(_Memory);
  }
  return 0;
}


