/* Module: espr3260.dll
   Function: FUN_632f97b0
   Address: 632f97b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_632f97b0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_632ffb28 < 1) {
      return 0;
    }
    DAT_632ffb28 = DAT_632ffb28 + -1;
  }
  _DAT_632ffb2c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_632ffb34 = malloc(0x80);
    if (DAT_632ffb34 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_632ffb34 = 0;
    DAT_632ffb30 = DAT_632ffb34;
    initterm(&DAT_632fb000,&DAT_632fb004);
    DAT_632ffb28 = DAT_632ffb28 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_632ffb34 != (undefined4 *)0x0)) {
    puVar1 = DAT_632ffb30 + -1;
    _Memory = DAT_632ffb34;
    if (DAT_632ffb34 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_632ffb34;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_632ffb34 = (undefined4 *)0x0;
  }
  return 1;
}


