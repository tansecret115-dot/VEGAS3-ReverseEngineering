/* Module: enlv3260.dll
   Function: FUN_661d4180
   Address: 661d4180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_661d4180(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_661d6390 < 1) {
      return 0;
    }
    DAT_661d6390 = DAT_661d6390 + -1;
  }
  _DAT_661d6394 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_661d63a0 = malloc(0x80);
    if (DAT_661d63a0 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_661d63a0 = 0;
    DAT_661d639c = DAT_661d63a0;
    initterm(&DAT_661d6000,&DAT_661d600c);
    DAT_661d6390 = DAT_661d6390 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_661d63a0 != (undefined4 *)0x0)) {
    puVar1 = DAT_661d639c + -1;
    _Memory = DAT_661d63a0;
    if (DAT_661d63a0 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_661d63a0;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_661d63a0 = (undefined4 *)0x0;
  }
  return 1;
}


