/* Module: pngu3266.dll
   Function: FUN_6061fd60
   Address: 6061fd60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_6061fd60(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_6064b4a0 < 1) {
      return 0;
    }
    DAT_6064b4a0 = DAT_6064b4a0 + -1;
  }
  _DAT_6064b4b0 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_6064b4bc = malloc(0x80);
    if (DAT_6064b4bc == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_6064b4bc = 0;
    DAT_6064b4b8 = DAT_6064b4bc;
    initterm(&DAT_60649000,&DAT_60649164);
    DAT_6064b4a0 = DAT_6064b4a0 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_6064b4bc != (undefined4 *)0x0)) {
    puVar1 = DAT_6064b4b8 + -1;
    _Memory = DAT_6064b4bc;
    if (DAT_6064b4bc <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_6064b4bc;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_6064b4bc = (undefined4 *)0x0;
  }
  return 1;
}


