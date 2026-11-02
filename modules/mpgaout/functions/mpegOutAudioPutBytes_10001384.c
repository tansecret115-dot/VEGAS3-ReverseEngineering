/* Module: mpgaout.dll
   Function: mpegOutAudioPutBytes
   Address: 10001384
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutAudioPutBytes(int param_1,int param_2,uint param_3)

{
                    /* 0x1384  5  mpegOutAudioPutBytes */
  DAT_1001f000 = 0;
  FUN_10002610(param_1,param_2,param_3,0);
  return;
}


