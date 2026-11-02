/* Module: 14_43260.dll
   Function: FUN_100067f0
   Address: 100067f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100067f0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_10016068 < 1) {
      return 0;
    }
    DAT_10016068 = DAT_10016068 + -1;
  }
  _DAT_1001606c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_10016078 = malloc(0x80);
    if (DAT_10016078 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_10016078 = 0;
    DAT_10016074 = DAT_10016078;
    initterm(&DAT_10012000,&DAT_10012008);
    DAT_10016068 = DAT_10016068 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_10016078 != (undefined4 *)0x0)) {
    puVar1 = DAT_10016074 + -1;
    _Memory = DAT_10016078;
    if (DAT_10016078 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_10016078;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_10016078 = (undefined4 *)0x0;
  }
  return 1;
}


