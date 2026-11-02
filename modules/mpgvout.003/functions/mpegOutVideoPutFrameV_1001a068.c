/* Module: mpgvout.003
   Function: mpegOutVideoPutFrameV
   Address: 1001a068
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoPutFrameV(int param_1,undefined4 *param_2)

{
                    /* 0x1a068  12  mpegOutVideoPutFrameV */
  (*(code *)param_2[7])(param_2);
  DAT_10040500 = 0;
  FUN_10018ec4(param_1,(undefined8 *)*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]
              );
  return;
}


