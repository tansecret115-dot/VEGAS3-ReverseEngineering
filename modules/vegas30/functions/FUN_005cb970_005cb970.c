/* Module: vegas30.exe
   Function: FUN_005cb970
   Address: 005cb970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cb970(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *_Memory;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = -0x7ff8fff2;
  FUN_005b83b0(param_2,1);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  _Memory = calloc(1,0x700);
  if (_Memory != (undefined4 *)0x0) {
    puVar2 = _Memory;
    for (iVar1 = 0x1c0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *_Memory = 0x20;
    _Memory[2] = param_2;
    _Memory[1] = param_3;
    _Memory[0x1a7] = _Memory + 0x1a8;
    iVar1 = _SfList_CreateExZ_32(_Memory + 9,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (-1 < iVar1) {
      FUN_005cb690(param_2,_Memory,param_5);
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = _Memory;
      }
    }
    if (_Memory[1] == 2) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(_Memory + 0xf9));
    }
    if (iVar1 < 0) {
      free(_Memory);
    }
  }
  FUN_005b84d0(param_2,1);
  return iVar1;
}


