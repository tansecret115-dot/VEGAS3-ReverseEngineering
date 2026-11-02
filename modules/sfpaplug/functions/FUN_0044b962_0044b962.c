/* Module: sfpaplug.dll
   Function: FUN_0044b962
   Address: 0044b962
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044b962(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_00461870) {
      DAT_00461870 = DAT_00461870 + -1;
      goto LAB_0044b978;
    }
LAB_0044b9a0:
    uVar1 = 0;
  }
  else {
LAB_0044b978:
    _DAT_00461874 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_0046187c = malloc(0x80);
      if (DAT_0046187c == (undefined4 *)0x0) goto LAB_0044b9a0;
      *DAT_0046187c = 0;
      DAT_00461878 = DAT_0046187c;
      initterm(&DAT_00458000,&DAT_0045802c);
      DAT_00461870 = DAT_00461870 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_0046187c, puVar2 = DAT_00461878, DAT_0046187c != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_0046187c;
        }
      }
      free(_Memory);
      DAT_0046187c = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


