/* Module: pnrs3260.dll
   Function: FUN_606f25c0
   Address: 606f25c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_606f25c0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_606f404c < 1) {
      return 0;
    }
    DAT_606f404c = DAT_606f404c + -1;
  }
  _DAT_606f4050 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_606f4058 = malloc(0x80);
    if (DAT_606f4058 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_606f4058 = 0;
    DAT_606f4054 = DAT_606f4058;
    initterm(&DAT_606f4000,&DAT_606f4008);
    DAT_606f404c = DAT_606f404c + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_606f4058 != (undefined4 *)0x0)) {
    puVar1 = DAT_606f4054 + -1;
    _Memory = DAT_606f4058;
    if (DAT_606f4058 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_606f4058;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_606f4058 = (undefined4 *)0x0;
  }
  return 1;
}


