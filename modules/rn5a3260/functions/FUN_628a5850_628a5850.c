/* Module: rn5a3260.dll
   Function: FUN_628a5850
   Address: 628a5850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_628a5850(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_628a7374 < 1) {
      return 0;
    }
    DAT_628a7374 = DAT_628a7374 + -1;
  }
  _DAT_628a7378 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_628a7380 = malloc(0x80);
    if (DAT_628a7380 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_628a7380 = 0;
    DAT_628a737c = DAT_628a7380;
    initterm(&DAT_628a7000,&DAT_628a7008);
    DAT_628a7374 = DAT_628a7374 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_628a7380 != (undefined4 *)0x0)) {
    puVar1 = DAT_628a737c + -1;
    _Memory = DAT_628a7380;
    if (DAT_628a7380 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_628a7380;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_628a7380 = (undefined4 *)0x0;
  }
  return 1;
}


