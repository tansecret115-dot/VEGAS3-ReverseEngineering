/* Module: rnco3260.dll
   Function: FUN_637641b0
   Address: 637641b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_637641b0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_6378d758 < 1) {
      return 0;
    }
    DAT_6378d758 = DAT_6378d758 + -1;
  }
  _DAT_63796aa8 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_63796ab0 = malloc(0x80);
    if (DAT_63796ab0 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_63796ab0 = 0;
    DAT_63796aac = DAT_63796ab0;
    initterm(&DAT_63766000,&DAT_63766004);
    DAT_6378d758 = DAT_6378d758 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_63796ab0 != (undefined4 *)0x0)) {
    puVar1 = DAT_63796aac + -1;
    _Memory = DAT_63796ab0;
    if (DAT_63796ab0 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_63796ab0;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_63796ab0 = (undefined4 *)0x0;
  }
  return 1;
}


