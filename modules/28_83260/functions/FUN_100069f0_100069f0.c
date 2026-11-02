/* Module: 28_83260.dll
   Function: FUN_100069f0
   Address: 100069f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100069f0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_1000cd78 < 1) {
      return 0;
    }
    DAT_1000cd78 = DAT_1000cd78 + -1;
  }
  _DAT_1000cd7c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_1000cd88 = malloc(0x80);
    if (DAT_1000cd88 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_1000cd88 = 0;
    DAT_1000cd84 = DAT_1000cd88;
    initterm(&DAT_10008000,&DAT_10008008);
    DAT_1000cd78 = DAT_1000cd78 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_1000cd88 != (undefined4 *)0x0)) {
    puVar1 = DAT_1000cd84 + -1;
    _Memory = DAT_1000cd88;
    if (DAT_1000cd88 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_1000cd88;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_1000cd88 = (undefined4 *)0x0;
  }
  return 1;
}


