/* Module: sfcd.cdd
   Function: FUN_00414270
   Address: 00414270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00414270(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  ppuVar1 = (undefined **)&DAT_0043e930;
  do {
    if (*ppuVar1 == param_2) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(iVar2 * 0x10 + 0x43e938);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)(iVar2 * 0x10 + 0x43e93c);
      }
      return 1;
    }
    ppuVar1 = ppuVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (ppuVar1 < &PTR_s_This_drive_requires_the_start_ti_0043ed20);
  return 0;
}


