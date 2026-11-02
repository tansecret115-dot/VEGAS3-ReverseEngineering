/* Module: vegas30.exe
   Function: FUN_00509a00
   Address: 00509a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00509a00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *_Memory;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x120);
    if (*(int *)(param_1 + 0x120) == 0) {
      _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    }
    if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *(undefined4 *)*piVar1;
    }
    _Memory = calloc(1,0x124);
    if (_Memory != (undefined4 *)0x0) {
      iVar2 = FUN_005099b0(_Memory);
      if (iVar2 < 0) {
        free(_Memory);
        return (undefined4 *)0x0;
      }
      puVar3 = _Memory;
      for (iVar2 = 0x47; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
      }
      param_2 = _Memory;
      _SfList_InsertList_16(*piVar1,param_1,&param_2,1);
      return _Memory;
    }
  }
  return (undefined4 *)0x0;
}


