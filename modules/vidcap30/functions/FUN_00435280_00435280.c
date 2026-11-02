/* Module: vidcap30.exe
   Function: FUN_00435280
   Address: 00435280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00435280(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00426b50(param_1 + 0xa48,param_1 + 0x1ac4);
    FUN_0043fe90(param_1,param_1 + 0x1ae8);
    FUN_00440040(param_1,param_1 + 0x1ae8,param_1 + 0x1aec);
  }
  if ((((((*(uint *)(param_1 + 0x1ae8) & 0x40) != 0) && ((*(byte *)(param_1 + 0x1ac4) & 2) != 0)) &&
       ((*(byte *)(param_1 + 0x1ac0) & 1) != 0)) &&
      (((*(uint *)(param_1 + 0x1ae8) & 0xc00) == 0 && ((*(uint *)(param_1 + 0x1c34) & 0xa0) == 0))))
     && (((*(uint *)(param_1 + 0x1c34) & 0x200) == 0 && ((4 < DAT_005bba30 || (DAT_005bb800 != 0))))
        )) {
    return 1;
  }
  return 0;
}


