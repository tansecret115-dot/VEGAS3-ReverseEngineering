/* Module: vidcap30.exe
   Function: FUN_00427780
   Address: 00427780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427780(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*param_1 == 8) && ((param_1[0x53] & 0x40U) != 0)) {
    FUN_004348d0(*(undefined4 *)(DAT_005ba4c0 + 0x6c),0);
    param_1[0x52] = param_1[0x52];
    param_1[0x53] = param_1[0x53] | 0x200;
    param_1[0x52] = param_1[0x52];
    param_1[0x53] = param_1[0x53] & 0xfffffeff;
    FUN_00427800(param_1,param_2,param_3);
  }
  return;
}


