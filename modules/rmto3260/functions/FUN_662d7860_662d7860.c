/* Module: rmto3260.dll
   Function: FUN_662d7860
   Address: 662d7860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d7860(int param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = param_2 >> 3;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 0;
}


