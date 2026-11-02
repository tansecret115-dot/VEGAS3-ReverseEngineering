/* Module: vidcap30.exe
   Function: _SfNanoTimeToTextEx@20
   Address: 00485530
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfNanoTimeToTextEx_20
               (undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  
                    /* 0x85530  575  _SfNanoTimeToTextEx@20 */
  pcVar2 = s__I64d_005b6cc4;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
    if ((param_5 & 1) == 0) {
      pcVar2 = (&PTR_s__I64d_005949f4)[uVar1];
    }
    else {
      pcVar2 = (&PTR_s__I64d_00594a3c)[uVar1];
    }
  }
  _SfNanoTimeToTextFormat_24(param_1,param_2,param_3,param_4,pcVar2,param_5);
  return;
}


