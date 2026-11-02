/* Module: mcplug.dll
   Function: FUN_00409d20
   Address: 00409d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00409d20(int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  
  _Memory = *(undefined4 **)(param_1 + 0x34);
  fwrite((void *)_Memory[1],1,_Memory[2],(FILE *)*_Memory);
  fclose((FILE *)*_Memory);
  if (_Memory[0x4a] != 0) {
    if (_Memory[0x4b] == 0) {
      FUN_0040a820(param_1,(int *)_Memory[0x4f]);
      _Memory[0x50] = _Memory[0x4f];
      for (iVar1 = *(int *)(_Memory[0x4f] + 0x10c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10c)) {
        FUN_0040a820(param_1,*(int **)(_Memory[0x50] + 0x10c));
        iVar1 = *(int *)(_Memory[0x50] + 0x10c);
        _Memory[0x50] = iVar1;
      }
    }
    iVar1 = *(int *)(_Memory[0x50] + 0x110);
    while (iVar1 != 0) {
      _Memory[0x50] = iVar1;
      free(*(void **)(iVar1 + 0x10c));
      iVar1 = *(int *)(_Memory[0x50] + 0x110);
    }
    if ((void *)_Memory[0x4f] != (void *)0x0) {
      free((void *)_Memory[0x4f]);
    }
    if ((void *)_Memory[0x4c] != (void *)0x0) {
      free((void *)_Memory[0x4c]);
    }
    if ((void *)_Memory[0x4d] != (void *)0x0) {
      free((void *)_Memory[0x4d]);
    }
  }
  free((void *)_Memory[1]);
  free(_Memory);
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


