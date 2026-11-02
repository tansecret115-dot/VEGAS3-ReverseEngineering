/* Module: rmme3260.dll
   Function: FUN_662691a0
   Address: 662691a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_662691a0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_6627f388 < 1) {
      return 0;
    }
    DAT_6627f388 = DAT_6627f388 + -1;
  }
  _DAT_6627f38c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_6627f398 = malloc(0x80);
    if (DAT_6627f398 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_6627f398 = 0;
    DAT_6627f394 = DAT_6627f398;
    initterm(&DAT_6626f000,&DAT_6626f064);
    DAT_6627f388 = DAT_6627f388 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_6627f398 != (undefined4 *)0x0)) {
    puVar1 = DAT_6627f394 + -1;
    _Memory = DAT_6627f398;
    if (DAT_6627f398 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_6627f398;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_6627f398 = (undefined4 *)0x0;
  }
  return 1;
}


