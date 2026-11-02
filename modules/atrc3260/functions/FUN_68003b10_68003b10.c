/* Module: atrc3260.dll
   Function: FUN_68003b10
   Address: 68003b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_68003b10(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_680054ec < 1) {
      return 0;
    }
    DAT_680054ec = DAT_680054ec + -1;
  }
  _DAT_680054f0 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_680054fc = malloc(0x80);
    if (DAT_680054fc == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_680054fc = 0;
    DAT_680054f8 = DAT_680054fc;
    initterm(&DAT_68005000,&DAT_68005010);
    DAT_680054ec = DAT_680054ec + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_680054fc != (undefined4 *)0x0)) {
    puVar1 = DAT_680054f8 + -1;
    _Memory = DAT_680054fc;
    if (DAT_680054fc <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_680054fc;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_680054fc = (undefined4 *)0x0;
  }
  return 1;
}


