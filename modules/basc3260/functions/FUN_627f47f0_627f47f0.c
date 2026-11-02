/* Module: basc3260.dll
   Function: FUN_627f47f0
   Address: 627f47f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_627f47f0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_627f63e4 < 1) {
      return 0;
    }
    DAT_627f63e4 = DAT_627f63e4 + -1;
  }
  _DAT_627f63e8 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_627f63f0 = malloc(0x80);
    if (DAT_627f63f0 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_627f63f0 = 0;
    DAT_627f63ec = DAT_627f63f0;
    initterm(&DAT_627f6000,&DAT_627f6008);
    DAT_627f63e4 = DAT_627f63e4 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_627f63f0 != (undefined4 *)0x0)) {
    puVar1 = DAT_627f63ec + -1;
    _Memory = DAT_627f63f0;
    if (DAT_627f63f0 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_627f63f0;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_627f63f0 = (undefined4 *)0x0;
  }
  return 1;
}


