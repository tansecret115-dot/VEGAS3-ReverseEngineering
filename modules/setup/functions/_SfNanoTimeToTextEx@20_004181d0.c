/* Module: Setup.exe
   Function: _SfNanoTimeToTextEx@20
   Address: 004181d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfNanoTimeToTextEx_20(uchar *param_1,uint *param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  
                    /* 0x181d0  304  _SfNanoTimeToTextEx@20 */
  pcVar2 = s__I64d_004440d4;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
    if ((param_5 & 1) == 0) {
      pcVar2 = (&PTR_s__I64d_004395d8)[uVar1];
    }
    else {
      pcVar2 = (&PTR_s__I64d_00439620)[uVar1];
    }
  }
  _SfNanoTimeToTextFormat_24(param_1,(int *)param_2,param_3,param_4,pcVar2,param_5);
  return;
}


