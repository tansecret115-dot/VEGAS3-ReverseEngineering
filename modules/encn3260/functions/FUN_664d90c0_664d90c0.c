/* Module: encn3260.dll
   Function: FUN_664d90c0
   Address: 664d90c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_664d90c0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_664f2b50 < 1) {
      return 0;
    }
    DAT_664f2b50 = DAT_664f2b50 + -1;
  }
  _DAT_664f2b70 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_664f2b7c = malloc(0x80);
    if (DAT_664f2b7c == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_664f2b7c = 0;
    DAT_664f2b78 = DAT_664f2b7c;
    initterm(&DAT_664e2000,&DAT_664e206c);
    DAT_664f2b50 = DAT_664f2b50 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_664f2b7c != (undefined4 *)0x0)) {
    puVar1 = DAT_664f2b78 + -1;
    _Memory = DAT_664f2b7c;
    if (DAT_664f2b7c <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_664f2b7c;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_664f2b7c = (undefined4 *)0x0;
  }
  return 1;
}


