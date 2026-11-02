/* Module: vidcap30.exe
   Function: FUN_00443310
   Address: 00443310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443310(int param_1,int param_2,LPCSTR param_3)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  void *_Memory;
  
  FUN_0042f4b0(param_1,1);
  if (param_3 == (LPCSTR)0x0) {
    if (*(void **)(param_2 + 0xc) != (void *)0x0) {
      free(*(void **)(param_2 + 0xc));
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    FUN_0042f5d0(param_1,1);
    return 0;
  }
  iVar1 = lstrlenA(param_3);
  iVar1 = iVar1 + 1;
  if (iVar1 < 0x81) {
    iVar2 = lstrlenA(param_3);
    _Size = iVar2 + 1;
  }
  else {
    iVar1 = 0x80;
    _Size = 0x80;
  }
  _Memory = calloc(1,_Size);
  if (_Memory != (void *)0x0) {
    iVar1 = _SfPrepareName_12(param_3,_Memory,iVar1);
    if (iVar1 != 0) {
      if (*(void **)(param_2 + 0xc) != (void *)0x0) {
        free(*(void **)(param_2 + 0xc));
      }
      *(int *)(param_2 + 0xc) = iVar1;
      **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 8;
      FUN_0042f5d0(param_1,1);
      return 0;
    }
    free(_Memory);
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 8;
    FUN_0042f5d0(param_1,1);
    return 0;
  }
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 8;
  FUN_0042f5d0(param_1,1);
  return 0x8007000e;
}


