/* Module: mpgvout.002
   Function: mpegOutVideoInit
   Address: 1001a350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutVideoInit(int *param_1,int param_2,uint param_3)

{
                    /* 0x1a350  5  mpegOutVideoInit */
  DAT_10040500 = 0;
  if (param_1[0x16] == 1) {
    param_1[0x16] = 0;
  }
  if ((param_3 & 1) != 0) {
    param_1[0x187] = 1;
  }
  if ((param_3 & 2) != 0) {
    param_1[0xb6] = param_1[0xb5];
  }
  FUN_10011a20(param_1 + 0x22e,param_2);
  FUN_10017634(param_1,(int)(param_1 + 0x22e));
  return;
}


