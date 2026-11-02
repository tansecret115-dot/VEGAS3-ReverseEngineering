/* Module: vegas30k.dll
   Function: _SfDibPrepAlpha@32
   Address: 010a2f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfDibPrepAlpha_32(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xa2f60  872  _SfDibPrepAlpha@32 */
  local_4 = param_3;
  local_8 = param_2;
  local_10 = 0;
  local_c = 0;
  switch(param_6) {
  case 1:
    _SfDibPremultiply_20(param_1,&local_10,param_4,param_5,param_8);
    return 0;
  case 2:
  case 3:
    _SfDibPrepAlphaImage_28(param_1,&local_10,param_4,param_5,param_6 == 3,param_7,param_8);
    return 0;
  case -1:
  case 0:
    _SfDibChannelSet_32(param_1,&local_10,param_4,param_5,param_8,3,0,0x3ff00000);
    return 0;
  default:
    return 0x80004001;
  }
}


