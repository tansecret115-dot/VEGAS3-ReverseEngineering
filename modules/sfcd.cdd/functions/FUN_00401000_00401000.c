/* Module: sfcd.cdd
   Function: FUN_00401000
   Address: 00401000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401000(undefined *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  ppuVar1 = (undefined **)&DAT_0043c048;
  do {
    if (param_1 == *ppuVar1) {
      return *(undefined4 *)(iVar2 * 8 + 0x43c04c);
    }
    ppuVar1 = ppuVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (ppuVar1 < &PTR_LAB_0043c0d8);
  return 0;
}


