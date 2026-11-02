/* Module: dnet3260.dll
   Function: FUN_63053990
   Address: 63053990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_63053990(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_6305553c < 1) {
      return 0;
    }
    DAT_6305553c = DAT_6305553c + -1;
  }
  _DAT_63055540 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_6305554c = malloc(0x80);
    if (DAT_6305554c == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_6305554c = 0;
    DAT_63055548 = DAT_6305554c;
    initterm(&DAT_63055000,&DAT_63055010);
    DAT_6305553c = DAT_6305553c + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_6305554c != (undefined4 *)0x0)) {
    puVar1 = DAT_63055548 + -1;
    _Memory = DAT_6305554c;
    if (DAT_6305554c <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_6305554c;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_6305554c = (undefined4 *)0x0;
  }
  return 1;
}


