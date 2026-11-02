/* Module: vidcap30.exe
   Function: FUN_00421a20
   Address: 00421a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00421a20(int *param_1,undefined8 *param_2)

{
  if ((*param_1 != 7) && (*param_1 != 8)) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0x3ff00000;
    return 0;
  }
  if (DAT_005bb540 != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0xde);
    return 0;
  }
  *param_2 = _DAT_005bb538;
  return 0;
}


