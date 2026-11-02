/* Module: aifplug.dll
   Function: FUN_5fbfd02c
   Address: 5fbfd02c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5fbfd02c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5fc0ee00) {
      DAT_5fc0ee00 = DAT_5fc0ee00 + -1;
      goto LAB_5fbfd042;
    }
LAB_5fbfd06a:
    uVar1 = 0;
  }
  else {
LAB_5fbfd042:
    _DAT_5fc0ee04 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5fc0ee0c = malloc(0x80);
      if (DAT_5fc0ee0c == (undefined4 *)0x0) goto LAB_5fbfd06a;
      *DAT_5fc0ee0c = 0;
      DAT_5fc0ee08 = DAT_5fc0ee0c;
      initterm(&DAT_5fc07000,&DAT_5fc07018);
      DAT_5fc0ee00 = DAT_5fc0ee00 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5fc0ee0c, puVar2 = DAT_5fc0ee08, DAT_5fc0ee0c != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5fc0ee0c;
        }
      }
      free(_Memory);
      DAT_5fc0ee0c = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


