/* Module: Setup.exe
   Function: _SfNanoTimeToText@20
   Address: 00418220
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfNanoTimeToText_20(uchar *param_1,uint *param_2,uint param_3,int param_4,int param_5)

{
                    /* 0x18220  303  _SfNanoTimeToText@20 */
  _SfNanoTimeToTextEx_20(param_1,param_2,param_3,param_4,(uint)(param_5 != 0));
  return;
}


