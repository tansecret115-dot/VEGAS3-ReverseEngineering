/* Module: sfppack2.dll
   Function: FUN_5cd4d930
   Address: 5cd4d930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd4d930(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5cd764f0) {
      DAT_5cd764f0 = DAT_5cd764f0 + -1;
      goto LAB_5cd4d946;
    }
LAB_5cd4d96e:
    uVar1 = 0;
  }
  else {
LAB_5cd4d946:
    _DAT_5cd76528 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5cd76530 = malloc(0x80);
      if (DAT_5cd76530 == (undefined4 *)0x0) goto LAB_5cd4d96e;
      *DAT_5cd76530 = 0;
      DAT_5cd7652c = DAT_5cd76530;
      initterm(&DAT_5cd5f000,&DAT_5cd5f004);
      DAT_5cd764f0 = DAT_5cd764f0 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5cd76530, puVar2 = DAT_5cd7652c, DAT_5cd76530 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5cd76530;
        }
      }
      free(_Memory);
      DAT_5cd76530 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


