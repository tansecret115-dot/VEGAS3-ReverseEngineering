/* Module: sipr3260.dll
   Function: FUN_632a2a30
   Address: 632a2a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_632a2a30(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_632a53cc < 1) {
      return 0;
    }
    DAT_632a53cc = DAT_632a53cc + -1;
  }
  _DAT_632a53dc = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_632a53e8 = malloc(0x80);
    if (DAT_632a53e8 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_632a53e8 = 0;
    DAT_632a53e4 = DAT_632a53e8;
    initterm(&DAT_632a5000,&DAT_632a5010);
    DAT_632a53cc = DAT_632a53cc + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_632a53e8 != (undefined4 *)0x0)) {
    puVar1 = DAT_632a53e4 + -1;
    _Memory = DAT_632a53e8;
    if (DAT_632a53e8 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_632a53e8;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_632a53e8 = (undefined4 *)0x0;
  }
  return 1;
}


