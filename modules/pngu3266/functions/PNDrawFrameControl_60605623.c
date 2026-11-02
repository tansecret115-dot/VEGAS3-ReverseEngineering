/* Module: pngu3266.dll
   Function: PNDrawFrameControl
   Address: 60605623
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNDrawFrameControl(int param_1,LPRECT param_2,UINT param_3,UINT param_4)

{
                    /* 0x15623  2217  PNDrawFrameControl */
  DrawFrameControl(*(HDC *)(param_1 + 0x1cf),param_2,param_3,param_4);
  return;
}


