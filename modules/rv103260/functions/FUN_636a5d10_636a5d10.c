/* Module: rv103260.dll
   Function: FUN_636a5d10
   Address: 636a5d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_636a5d10(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_636a8440 < 1) {
      return 0;
    }
    DAT_636a8440 = DAT_636a8440 + -1;
  }
  _DAT_636a8454 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_636a8460 = malloc(0x80);
    if (DAT_636a8460 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_636a8460 = 0;
    DAT_636a845c = DAT_636a8460;
    initterm(&DAT_636a8000,&DAT_636a800c);
    DAT_636a8440 = DAT_636a8440 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_636a8460 != (undefined4 *)0x0)) {
    puVar1 = DAT_636a845c + -1;
    _Memory = DAT_636a8460;
    if (DAT_636a8460 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_636a8460;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_636a8460 = (undefined4 *)0x0;
  }
  return 1;
}


