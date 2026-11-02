/* Module: oggplug.dll
   Function: FUN_0044492a
   Address: 0044492a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044492a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_00516ab0) {
      DAT_00516ab0 = DAT_00516ab0 + -1;
      goto LAB_00444940;
    }
LAB_00444968:
    uVar1 = 0;
  }
  else {
LAB_00444940:
    _DAT_00516ab4 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_00516abc = malloc(0x80);
      if (DAT_00516abc == (undefined4 *)0x0) goto LAB_00444968;
      *DAT_00516abc = 0;
      DAT_00516ab8 = DAT_00516abc;
      initterm(&DAT_00450000,&DAT_00450004);
      DAT_00516ab0 = DAT_00516ab0 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_00516abc, puVar2 = DAT_00516ab8, DAT_00516abc != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_00516abc;
        }
      }
      free(_Memory);
      DAT_00516abc = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


