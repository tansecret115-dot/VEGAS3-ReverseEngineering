/* Module: mpgvout.003
   Function: mpegOutVideoPutFrame
   Address: 1001a024
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
mpegOutVideoPutFrame
          (int param_1,undefined8 *param_2,int param_3,uint param_4,uint param_5,uint param_6,
          uint param_7)

{
                    /* 0x1a024  7  mpegOutVideoPutFrame */
  DAT_10040500 = 0;
  FUN_10018ec4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


