/* Module: vegas30.exe
   Function: FUN_005cb690
   Address: 005cb690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb690(undefined4 *param_1,int param_2,LPCSTR param_3)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  void *_Memory;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_005b83b0(param_1,1);
  if (param_3 == (LPCSTR)0x0) {
    if (*(void **)(param_2 + 0xc) != (void *)0x0) {
      free(*(void **)(param_2 + 0xc));
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  else {
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
    if (_Memory == (void *)0x0) {
      local_4 = 0x8007000e;
    }
    else {
      iVar1 = _SfPrepareName_12(param_3,_Memory,iVar1);
      if (*(void **)(param_2 + 0xc) != (void *)0x0) {
        free(*(void **)(param_2 + 0xc));
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
      if (iVar1 == 0) {
        free(_Memory);
      }
      else {
        *(int *)(param_2 + 0xc) = iVar1;
      }
    }
    *(uint *)*param_1 = *(uint *)*param_1 | 0x10;
  }
  if (*(int *)(param_2 + 4) == 2) {
    *(undefined4 *)(param_2 + 0x370) = 0;
  }
  FUN_005b84d0(param_1,1);
  return local_4;
}


