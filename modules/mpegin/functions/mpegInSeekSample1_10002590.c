/* Module: mpegin.dll
   Function: mpegInSeekSample1
   Address: 10002590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInSeekSample1(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
                    /* 0x2590  21  mpegInSeekSample1 */
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x200) + 0x10) = 1;
  mpegInSeekSample(param_1,param_2,param_3,param_4);
  return;
}


