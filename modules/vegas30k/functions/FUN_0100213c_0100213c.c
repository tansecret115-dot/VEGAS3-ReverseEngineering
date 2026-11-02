/* Module: vegas30k.dll
   Function: FUN_0100213c
   Address: 0100213c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0100213c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_01209148) {
      DAT_01209148 = DAT_01209148 + -1;
      goto LAB_01002152;
    }
LAB_0100217a:
    uVar1 = 0;
  }
  else {
LAB_01002152:
    _DAT_012b0b68 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_012b0b70 = malloc(0x80);
      if (DAT_012b0b70 == (undefined4 *)0x0) goto LAB_0100217a;
      *DAT_012b0b70 = 0;
      DAT_012b0b6c = DAT_012b0b70;
      initterm(&DAT_01204000,&DAT_01204004);
      DAT_01209148 = DAT_01209148 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_012b0b70, puVar2 = DAT_012b0b6c, DAT_012b0b70 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_012b0b70;
        }
      }
      free(_Memory);
      DAT_012b0b70 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


