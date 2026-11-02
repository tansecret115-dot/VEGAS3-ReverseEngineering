/* Module: vegas30.exe
   Function: FUN_005b1230
   Address: 005b1230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b1230(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = calloc(1,100);
  puVar1 = param_1;
  *param_1 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = (undefined4 *)*param_1;
    iVar3 = _SfList_CreateExZ_32(&param_1,0x418,1,1,0x4000000c,0,0,0);
    if (-1 < iVar3) {
      return iVar3;
    }
  }
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *puVar1 = 0;
  }
  return iVar3;
}


