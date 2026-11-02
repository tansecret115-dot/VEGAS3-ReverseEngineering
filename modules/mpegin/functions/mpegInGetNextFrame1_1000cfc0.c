/* Module: mpegin.dll
   Function: mpegInGetNextFrame1
   Address: 1000cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInGetNextFrame1(undefined4 *param_1,undefined4 param_2)

{
                    /* 0xcfc0  22  mpegInGetNextFrame1 */
  *(undefined4 *)(*(int *)(param_1[0x4b95] + 0x128) + 0x10) = 1;
  *(undefined4 *)(param_1[0x4b95] + 0x120) = param_2;
  mpegInGetNextFrame(param_1);
  return;
}


