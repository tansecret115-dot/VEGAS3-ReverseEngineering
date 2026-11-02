/* Module: erv33260.dll
   Function: FUN_67075200
   Address: 67075200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67075200(int param_1,uint param_2,int param_3,undefined1 *param_4,int *param_5)

{
  *param_4 = 0;
  *param_5 = 0;
  for (; (int)param_2 < param_1; param_2 = param_2 + 1) {
    param_4[param_2] =
         ((byte)(((&DAT_6709e168)[(int)param_2 >> 3 & 7] ^
                 *(uint *)(param_3 + ((int)param_2 >> 3) * 4)) >>
                (0x1cU - (char)((param_2 & 7) << 2) & 0x1f)) & 0xf) + 1;
  }
  FUN_67075270(param_1,(int)param_4,param_5);
  return;
}


