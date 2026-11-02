/* Module: rmto3260.dll
   Function: FUN_66302370
   Address: 66302370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66302370(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_6631203c < 1) {
      return 0;
    }
    DAT_6631203c = DAT_6631203c + -1;
  }
  _DAT_663120c0 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_663120cc = malloc(0x80);
    if (DAT_663120cc == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_663120cc = 0;
    DAT_663120c8 = DAT_663120cc;
    initterm(&DAT_6630a000,&DAT_6630a00c);
    DAT_6631203c = DAT_6631203c + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_663120cc != (undefined4 *)0x0)) {
    puVar1 = DAT_663120c8 + -1;
    _Memory = DAT_663120cc;
    if (DAT_663120cc <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_663120cc;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_663120cc = (undefined4 *)0x0;
  }
  return 1;
}


