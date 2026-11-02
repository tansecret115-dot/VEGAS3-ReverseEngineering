/* Module: ednt3260.dll
   Function: FUN_630fbe40
   Address: 630fbe40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_630fbe40(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_63103600 < 1) {
      return 0;
    }
    DAT_63103600 = DAT_63103600 + -1;
  }
  _DAT_63103604 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_6310360c = malloc(0x80);
    if (DAT_6310360c == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_6310360c = 0;
    DAT_63103608 = DAT_6310360c;
    initterm(&DAT_63103000,&DAT_63103004);
    DAT_63103600 = DAT_63103600 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_6310360c != (undefined4 *)0x0)) {
    puVar1 = DAT_63103608 + -1;
    _Memory = DAT_6310360c;
    if (DAT_6310360c <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_6310360c;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_6310360c = (undefined4 *)0x0;
  }
  return 1;
}


