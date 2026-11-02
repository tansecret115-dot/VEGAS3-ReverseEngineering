/* Module: sfppack2.dll
   Function: FUN_5cd26b00
   Address: 5cd26b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd26b00(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  double local_10;
  
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x358)) {
  case 0:
  case 1:
    local_18 = 0;
    uStack_14 = 0x40220000;
    local_10 = ABS(*(double *)(param_1 + 0x338) - *(double *)(param_1 + 0x340));
    dVar1 = ABS(*(double *)(param_1 + 0x348) - *(double *)(param_1 + 0x350));
    if (dVar1 <= local_10) {
      local_10 = dVar1;
    }
    if ((*(double *)(param_1 + 0x340) - *(double *)(param_1 + 0x338)) / *(double *)(param_1 + 0x338)
        < _DAT_5cd514c8) {
      uVar2 = 0xffffffff;
    }
    if ((*(double *)(param_1 + 0x350) - *(double *)(param_1 + 0x348)) / *(double *)(param_1 + 0x348)
        < _DAT_5cd514c8) {
      uVar2 = 0xffffffff;
    }
    break;
  case 2:
  case 3:
    local_18 = 0;
    uStack_14 = 0x40220000;
    local_10 = ABS(*(double *)(param_1 + 0x338) - *(double *)(param_1 + 0x340));
    if ((*(double *)(param_1 + 0x340) - *(double *)(param_1 + 0x338)) / *(double *)(param_1 + 0x338)
        < _DAT_5cd514c8) {
      uVar2 = 0xffffffff;
    }
  }
  if ((double)CONCAT44(uStack_14,local_18) < local_10) {
    return uVar2;
  }
  return 0xffffffff;
}


