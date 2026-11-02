/* Module: sfcd.cdd
   Function: FUN_00432fb6
   Address: 00432fb6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00432fb6(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_00446e58) {
      DAT_00446e58 = DAT_00446e58 + -1;
      goto LAB_00432fcc;
    }
LAB_00432ff4:
    uVar1 = 0;
  }
  else {
LAB_00432fcc:
    _DAT_00446e5c = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_00446e64 = malloc(0x80);
      if (DAT_00446e64 == (undefined4 *)0x0) goto LAB_00432ff4;
      *DAT_00446e64 = 0;
      DAT_00446e60 = DAT_00446e64;
      initterm(&DAT_0043c000,&DAT_0043c004);
      DAT_00446e58 = DAT_00446e58 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_00446e64, puVar2 = DAT_00446e60, DAT_00446e64 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_00446e64;
        }
      }
      free(_Memory);
      DAT_00446e64 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


