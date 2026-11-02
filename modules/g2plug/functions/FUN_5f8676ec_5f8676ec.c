/* Module: g2plug.dll
   Function: FUN_5f8676ec
   Address: 5f8676ec
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f8676ec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5f89ca50) {
      DAT_5f89ca50 = DAT_5f89ca50 + -1;
      goto LAB_5f867702;
    }
LAB_5f86772a:
    uVar1 = 0;
  }
  else {
LAB_5f867702:
    _DAT_5f89ca54 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5f89ca5c = malloc(0x80);
      if (DAT_5f89ca5c == (undefined4 *)0x0) goto LAB_5f86772a;
      *DAT_5f89ca5c = 0;
      DAT_5f89ca58 = DAT_5f89ca5c;
      initterm(&DAT_5f876000,&DAT_5f87600c);
      DAT_5f89ca50 = DAT_5f89ca50 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5f89ca5c, puVar2 = DAT_5f89ca58, DAT_5f89ca5c != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5f89ca5c;
        }
      }
      free(_Memory);
      DAT_5f89ca5c = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


