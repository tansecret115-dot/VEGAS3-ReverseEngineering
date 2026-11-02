/* Module: erv23260.dll
   Function: FUN_63817d70
   Address: 63817d70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_63817d70(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_63832054 < 1) {
      return 0;
    }
    DAT_63832054 = DAT_63832054 + -1;
  }
  _DAT_63832058 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_63832060 = malloc(0x80);
    if (DAT_63832060 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_63832060 = 0;
    DAT_6383205c = DAT_63832060;
    initterm(&DAT_6382f000,&DAT_6382f004);
    DAT_63832054 = DAT_63832054 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_63832060 != (undefined4 *)0x0)) {
    puVar1 = DAT_6383205c + -1;
    _Memory = DAT_63832060;
    if (DAT_63832060 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_63832060;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_63832060 = (undefined4 *)0x0;
  }
  return 1;
}


