/* Module: auth3260.dll
   Function: FUN_627a61f0
   Address: 627a61f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_627a61f0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_627a8114 < 1) {
      return 0;
    }
    DAT_627a8114 = DAT_627a8114 + -1;
  }
  _DAT_627a8118 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_627a8120 = malloc(0x80);
    if (DAT_627a8120 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_627a8120 = 0;
    DAT_627a811c = DAT_627a8120;
    initterm(&DAT_627a8000,&DAT_627a8008);
    DAT_627a8114 = DAT_627a8114 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_627a8120 != (undefined4 *)0x0)) {
    puVar1 = DAT_627a811c + -1;
    _Memory = DAT_627a8120;
    if (DAT_627a8120 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_627a8120;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_627a8120 = (undefined4 *)0x0;
  }
  return 1;
}


