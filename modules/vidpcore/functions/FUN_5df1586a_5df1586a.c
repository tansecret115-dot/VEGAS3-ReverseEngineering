/* Module: vidpcore.dll
   Function: FUN_5df1586a
   Address: 5df1586a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5df1586a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5dff1adc) {
      DAT_5dff1adc = DAT_5dff1adc + -1;
      goto LAB_5df15880;
    }
LAB_5df158a8:
    uVar1 = 0;
  }
  else {
LAB_5df15880:
    _DAT_5dff1ae4 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5dff1aec = malloc(0x80);
      if (DAT_5dff1aec == (undefined4 *)0x0) goto LAB_5df158a8;
      *DAT_5dff1aec = 0;
      DAT_5dff1ae8 = DAT_5dff1aec;
      initterm(&DAT_5df3c000,&DAT_5df3c008);
      DAT_5dff1adc = DAT_5dff1adc + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5dff1aec, puVar2 = DAT_5dff1ae8, DAT_5dff1aec != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5dff1aec;
        }
      }
      free(_Memory);
      DAT_5dff1aec = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


