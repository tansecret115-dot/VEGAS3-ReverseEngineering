/* Module: rv203260.dll
   Function: FUN_638b2a50
   Address: 638b2a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_638b2a50(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_638b67b4 < 1) {
      return 0;
    }
    DAT_638b67b4 = DAT_638b67b4 + -1;
  }
  _DAT_638b67b8 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_638b67c4 = malloc(0x80);
    if (DAT_638b67c4 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_638b67c4 = 0;
    DAT_638b67c0 = DAT_638b67c4;
    initterm(&DAT_638b4000,&DAT_638b400c);
    DAT_638b67b4 = DAT_638b67b4 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_638b67c4 != (undefined4 *)0x0)) {
    puVar1 = DAT_638b67c0 + -1;
    _Memory = DAT_638b67c4;
    if (DAT_638b67c4 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_638b67c4;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_638b67c4 = (undefined4 *)0x0;
  }
  return 1;
}


