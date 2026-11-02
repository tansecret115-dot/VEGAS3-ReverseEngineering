/* Module: tokr3260.dll
   Function: FUN_6805a6f0
   Address: 6805a6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_6805a6f0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_68061214 < 1) {
      return 0;
    }
    DAT_68061214 = DAT_68061214 + -1;
  }
  _DAT_68061224 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_6806122c = malloc(0x80);
    if (DAT_6806122c == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_6806122c = 0;
    DAT_68061228 = DAT_6806122c;
    initterm(&DAT_6805c000,&DAT_6805c004);
    DAT_68061214 = DAT_68061214 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_6806122c != (undefined4 *)0x0)) {
    puVar1 = DAT_68061228 + -1;
    _Memory = DAT_6806122c;
    if (DAT_6806122c <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_6806122c;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_6806122c = (undefined4 *)0x0;
  }
  return 1;
}


