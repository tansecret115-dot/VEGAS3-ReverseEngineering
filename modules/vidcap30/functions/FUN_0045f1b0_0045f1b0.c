/* Module: vidcap30.exe
   Function: FUN_0045f1b0
   Address: 0045f1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045f1b0(int param_1,int param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  void *_Memory;
  uint uVar2;
  
  FUN_0042f4b0(param_1,1);
  if (param_3 == (LPCSTR)0x0) {
    if (*(void **)(param_2 + 0xc) != (void *)0x0) {
      free(*(void **)(param_2 + 0xc));
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  else {
    iVar1 = lstrlenA(param_3);
    _Memory = calloc(1,iVar1 + 1U);
    if (_Memory == (void *)0x0) {
      FUN_0042f5d0(param_1,1);
      return 0x8007000e;
    }
    if (*(void **)(param_2 + 0xc) != (void *)0x0) {
      free(*(void **)(param_2 + 0xc));
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    iVar1 = _SfPrepareName_12(param_3,_Memory,iVar1 + 1U);
    if (iVar1 == 0) {
      free(_Memory);
      FUN_0042f5d0(param_1,1);
      return 0x80004005;
    }
    *(void **)(param_2 + 0xc) = _Memory;
  }
  uVar2 = **(uint **)(param_1 + 4);
  if (param_4 == 0) {
    uVar2 = uVar2 | 0x10000;
  }
  else {
    uVar2 = uVar2 | 0x1000;
  }
  **(uint **)(param_1 + 4) = uVar2;
  FUN_0042f5d0(param_1,1);
  return 0;
}


