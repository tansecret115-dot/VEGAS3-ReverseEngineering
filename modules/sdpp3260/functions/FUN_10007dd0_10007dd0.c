/* Module: sdpp3260.dll
   Function: FUN_10007dd0
   Address: 10007dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007dd0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_1000975c < 1) {
      return 0;
    }
    DAT_1000975c = DAT_1000975c + -1;
  }
  _DAT_10009760 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_10009768 = malloc(0x80);
    if (DAT_10009768 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_10009768 = 0;
    DAT_10009764 = DAT_10009768;
    initterm(&DAT_10009000,&DAT_10009008);
    DAT_1000975c = DAT_1000975c + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_10009768 != (undefined4 *)0x0)) {
    puVar1 = DAT_10009764 + -1;
    _Memory = DAT_10009768;
    if (DAT_10009768 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_10009768;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_10009768 = (undefined4 *)0x0;
  }
  return 1;
}


