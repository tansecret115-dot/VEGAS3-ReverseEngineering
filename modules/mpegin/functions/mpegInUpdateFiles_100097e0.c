/* Module: mpegin.dll
   Function: mpegInUpdateFiles
   Address: 100097e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInUpdateFiles(int param_1,undefined4 param_2)

{
                    /* 0x97e0  19  mpegInUpdateFiles */
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x150) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x228) = param_2;
  return;
}


