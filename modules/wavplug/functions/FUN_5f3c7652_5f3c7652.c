/* Module: wavplug.dll
   Function: FUN_5f3c7652
   Address: 5f3c7652
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f3c7652(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5f3e18dc) {
      DAT_5f3e18dc = DAT_5f3e18dc + -1;
      goto LAB_5f3c7668;
    }
LAB_5f3c7690:
    uVar1 = 0;
  }
  else {
LAB_5f3c7668:
    _DAT_5f3e18e0 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5f3e18e8 = malloc(0x80);
      if (DAT_5f3e18e8 == (undefined4 *)0x0) goto LAB_5f3c7690;
      *DAT_5f3e18e8 = 0;
      DAT_5f3e18e4 = DAT_5f3e18e8;
      initterm(&DAT_5f3d5000,&DAT_5f3d5040);
      DAT_5f3e18dc = DAT_5f3e18dc + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5f3e18e8, puVar2 = DAT_5f3e18e4, DAT_5f3e18e8 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5f3e18e8;
        }
      }
      free(_Memory);
      DAT_5f3e18e8 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


