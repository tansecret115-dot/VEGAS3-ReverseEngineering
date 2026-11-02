/* Module: tokr3260.dll
   Function: FUN_68059970
   Address: 68059970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68059970(int param_1,size_t param_2)

{
  undefined4 *_Memory;
  undefined4 *_Memory_00;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  _Memory = calloc(param_2,4);
  if (_Memory == (undefined4 *)0x0) {
    return 0xfff0bdc1;
  }
  _Memory_00 = calloc(param_2,4);
  if (_Memory_00 == (undefined4 *)0x0) {
    return 0xfff0bdc1;
  }
  iVar1 = FUN_68059750(_Memory,param_2);
  if (iVar1 == -999999) {
    return 0xfff0bdc1;
  }
  iVar1 = FUN_68059840(_Memory_00,param_2);
  if (iVar1 != -999999) {
    iVar1 = 0;
    if (0 < (int)param_2) {
      puVar4 = _Memory_00;
      do {
        puVar2 = malloc(0xc);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfff0bdc1;
        }
        pvVar3 = calloc(0xc00,4);
        puVar2[2] = pvVar3;
        if (pvVar3 == (void *)0x0) {
          return 0xfff0bdc1;
        }
        iVar1 = iVar1 + 1;
        *puVar2 = *(undefined4 *)(((int)_Memory - (int)_Memory_00) + (int)puVar4);
        puVar2[1] = *puVar4;
        *(undefined4 **)((param_1 - (int)_Memory_00) + (int)puVar4) = puVar2;
        puVar4 = puVar4 + 1;
      } while (iVar1 < (int)param_2);
    }
    free(_Memory);
    free(_Memory_00);
    return 0;
  }
  return 0xfff0bdc1;
}


