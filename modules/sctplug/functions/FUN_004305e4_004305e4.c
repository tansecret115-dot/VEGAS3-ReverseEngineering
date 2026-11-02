/* Module: sctplug.dll
   Function: FUN_004305e4
   Address: 004305e4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004305e4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_0044221c) {
      DAT_0044221c = DAT_0044221c + -1;
      goto LAB_004305fa;
    }
LAB_00430622:
    uVar1 = 0;
  }
  else {
LAB_004305fa:
    _DAT_00442220 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_00442228 = malloc(0x80);
      if (DAT_00442228 == (undefined4 *)0x0) goto LAB_00430622;
      *DAT_00442228 = 0;
      DAT_00442224 = DAT_00442228;
      initterm(&DAT_0043b000,&DAT_0043b018);
      DAT_0044221c = DAT_0044221c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_00442228, puVar2 = DAT_00442224, DAT_00442228 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_00442228;
        }
      }
      free(_Memory);
      DAT_00442228 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


