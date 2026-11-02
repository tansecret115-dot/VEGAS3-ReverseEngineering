/* Module: cook3260.dll
   Function: FUN_633a7370
   Address: 633a7370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_633a7370(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_633b1c64 < 1) {
      return 0;
    }
    DAT_633b1c64 = DAT_633b1c64 + -1;
  }
  _DAT_633b1c68 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_633b1c74 = malloc(0x80);
    if (DAT_633b1c74 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_633b1c74 = 0;
    DAT_633b1c70 = DAT_633b1c74;
    initterm(&DAT_633ab000,&DAT_633ab010);
    DAT_633b1c64 = DAT_633b1c64 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_633b1c74 != (undefined4 *)0x0)) {
    puVar1 = DAT_633b1c70 + -1;
    _Memory = DAT_633b1c74;
    if (DAT_633b1c74 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_633b1c74;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_633b1c74 = (undefined4 *)0x0;
  }
  return 1;
}


