/* Module: rmbe3260.dll
   Function: FUN_66050a70
   Address: 66050a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66050a70(int param_1,int *param_2,undefined4 *param_3)

{
  *param_2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c);
  *param_3 = *(undefined4 *)(param_1 + 0x18);
  return 0;
}


