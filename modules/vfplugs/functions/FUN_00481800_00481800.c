/* Module: vfplugs.dll
   Function: FUN_00481800
   Address: 00481800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00481800(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_0053b270) {
      DAT_0053b270 = DAT_0053b270 + -1;
      goto LAB_00481816;
    }
LAB_0048183e:
    uVar1 = 0;
  }
  else {
LAB_00481816:
    _DAT_0053b278 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_0053b280 = malloc(0x80);
      if (DAT_0053b280 == (undefined4 *)0x0) goto LAB_0048183e;
      *DAT_0053b280 = 0;
      DAT_0053b27c = DAT_0053b280;
      initterm(&DAT_00493000,&DAT_00493004);
      DAT_0053b270 = DAT_0053b270 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_0053b280, puVar2 = DAT_0053b27c, DAT_0053b280 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_0053b280;
        }
      }
      free(_Memory);
      DAT_0053b280 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


