/* Module: erv13260.dll
   Function: FUN_63603aa0
   Address: 63603aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_63603aa0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_6362333c < 1) {
      return 0;
    }
    DAT_6362333c = DAT_6362333c + -1;
  }
  _DAT_63623358 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_63623364 = malloc(0x80);
    if (DAT_63623364 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_63623364 = 0;
    DAT_63623360 = DAT_63623364;
    initterm(&DAT_63605000,&DAT_6360500c);
    DAT_6362333c = DAT_6362333c + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_63623364 != (undefined4 *)0x0)) {
    puVar1 = DAT_63623360 + -1;
    _Memory = DAT_63623364;
    if (DAT_63623364 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_63623364;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_63623364 = (undefined4 *)0x0;
  }
  return 1;
}


