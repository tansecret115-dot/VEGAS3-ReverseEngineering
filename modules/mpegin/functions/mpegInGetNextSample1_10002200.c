/* Module: mpegin.dll
   Function: mpegInGetNextSample1
   Address: 10002200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInGetNextSample1(int param_1,undefined4 *param_2,uint param_3)

{
                    /* 0x2200  23  mpegInGetNextSample1 */
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x200) + 0x10) = 1;
  mpegInGetNextSample(param_1,param_2,param_3);
  return;
}


