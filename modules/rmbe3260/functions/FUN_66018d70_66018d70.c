/* Module: rmbe3260.dll
   Function: FUN_66018d70
   Address: 66018d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66018d70(int param_1,uint param_2,undefined4 *param_3)

{
  if ((param_2 != 0) && (param_2 < 7)) {
    *param_3 = *(undefined4 *)(param_1 + 0x10 + param_2 * 8);
    param_3[1] = *(undefined4 *)(param_1 + 0x14 + param_2 * 8);
    return 0;
  }
  return 0x80070057;
}


