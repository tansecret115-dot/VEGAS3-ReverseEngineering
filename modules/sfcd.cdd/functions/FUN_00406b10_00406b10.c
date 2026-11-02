/* Module: sfcd.cdd
   Function: FUN_00406b10
   Address: 00406b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00406b10(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  ppuVar1 = (undefined **)&DAT_0043c7e8;
  do {
    if (*ppuVar1 == param_2) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(iVar2 * 0x10 + 0x43c7f0);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)(iVar2 * 0x10 + 0x43c7f4);
      }
      return 1;
    }
    ppuVar1 = ppuVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (ppuVar1 < &PTR_LAB_0043cc98);
  return 0;
}


