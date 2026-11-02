/* Module: vegas30.exe
   Function: FUN_005c6a40
   Address: 005c6a40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c6a40(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _Memory = (undefined4 *)0x0;
  if ((*(int **)(param_2 + 0x130) == (int *)0x0) || (0 < **(int **)(param_2 + 0x130))) {
    _Memory = calloc(1,0x2c);
    if (_Memory != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = _Memory;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *_Memory = 0x10;
      _Memory[1] = param_1;
      _Memory[8] = 0;
      _Memory[7] = param_4;
      _Memory[6] = param_2;
      iVar1 = FUN_005c69a0(_Memory,param_3[8]);
      if (iVar1 < 0) {
        free(_Memory);
        _Memory = (undefined4 *)0x0;
      }
    }
  }
  *param_5 = _Memory;
  return (-(uint)(_Memory != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


