/* Module: mpegin.dll
   Function: mpegInSeekFrame1
   Address: 1000d0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInSeekFrame1(undefined4 *param_1,uint param_2,undefined4 param_3)

{
                    /* 0xd0b0  20  mpegInSeekFrame1 */
  *(undefined4 *)(*(int *)(param_1[0x4b95] + 0x128) + 0x10) = 1;
  *(undefined4 *)(param_1[0x4b95] + 0x120) = param_3;
  mpegInSeekFrame(param_1,param_2);
  return;
}


