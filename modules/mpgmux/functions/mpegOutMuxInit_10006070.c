/* Module: mpgmux.dll
   Function: mpegOutMuxInit
   Address: 10006070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutMuxInit(uint *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0x6070  3  mpegOutMuxInit */
  DAT_1001ab78._0_1_ = 0;
  if (param_2 == 0) {
    FUN_100050f0((int)param_1,(byte *)s_An_output_stream_must_be_specifi_10017590);
    return 0x10;
  }
  if (param_4 == 0) {
    FUN_100050f0((int)param_1,(byte *)s_A_video_stream_must_be_specified_1001756c);
    return 0x10;
  }
  param_1[0x46b] = 1;
  if (param_3 != 0) {
    param_1[0x46b] = 3;
  }
  param_1[0x4ac] = 0;
  param_1[0x4ab] = 0;
  param_1[10] = 0;
  param_1[0xb97] = 0;
  param_1[0xb98] = 0;
  param_1[0xb99] = 0;
  param_1[0xb9a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  FUN_10006340((int)param_1);
  param_1[0x47e] = param_2;
  if (param_1[0x14] != 0) {
    iVar1 = FUN_1000af00((int)param_1);
    if (iVar1 != 0) goto LAB_10006170;
  }
  if ((param_1[0xb] == 4) && (param_1[0x10] != 0)) {
    iVar1 = FUN_10003b50((int)param_1);
    if (iVar1 != 0) goto LAB_10006170;
    (**(code **)(param_1[0x47e] + 0x14))(param_1[0x47e],0,0xf1000,0,0);
  }
  iVar1 = FUN_10005df0((int)param_1,param_4,param_3);
  if (iVar1 == 0) {
    return 0;
  }
LAB_10006170:
  mpegOutMuxDone(param_1,1);
  return 0x10;
}


