/* Module: mpgaout.dll
   Function: FUN_10001888
   Address: 10001888
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10001888(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 3) {
    if (param_1[1] != 2) {
      sprintf(&DAT_1001f000,"Invalid audio layer (%d) for SVCD, should be 2",param_1[1]);
      return 0x1000;
    }
    if (param_1[6] != 1) {
      sprintf(&DAT_1001f000,"Invalid audio error protection (%d) for SVCD, should be 1",param_1[6]);
      return 0x1001;
    }
    if (param_1[4] != 0) {
      sprintf(&DAT_1001f000,"Invalid audio emphasis (%d) for SVCD, should be 0",param_1[4]);
      return 0x1002;
    }
    if (*param_1 == 3) {
      if (9 < param_1[3] - 1U) {
        sprintf(&DAT_1001f000,"Invalid mono audio bitrate code (%d) for SVCD, range is %d .. %d",
                param_1[3],1,10);
        return 0x1003;
      }
    }
    else if (param_1[3] < 4) {
      sprintf(&DAT_1001f000,"Invalid audio bitrate code (%d) for SVCD, range is %d .. %d",param_1[3]
              ,4,0xe);
      return 0x1003;
    }
    if (param_3 != 0xac44) {
      sprintf(&DAT_1001f000,"Invalid audio sample rate (%d) for SVCD, should be 44100",param_3);
      return 0x1004;
    }
  }
  else if (param_2 < 4) {
    if (param_2 == 1) {
      if (param_1[1] != 2) {
        sprintf(&DAT_1001f000,"Invalid audio layer (%d) for VCD, should be 2",param_1[1]);
        return 0x200;
      }
      iVar1 = *param_1;
      if ((iVar1 != 0) && (iVar1 != 3)) {
        sprintf(&DAT_1001f000,"Invalid audio mode (%d) for VCD, should be %d or %d",iVar1,0,3);
        return 0x201;
      }
      if (param_1[3] != 0xb) {
        sprintf(&DAT_1001f000,"Invalid audio bitrate code (%d) for VCD, should be %d",param_1[3],0xb
               );
        return 0x202;
      }
      if (param_3 != 0xac44) {
        sprintf(&DAT_1001f000,"Invalid audio sample rate (%d) for VCD, should be 44100",param_3);
        return 0x203;
      }
    }
  }
  else if (param_2 == 4) {
    if (param_1[1] != 2) {
      sprintf(&DAT_1001f000,"Invalid audio layer (%d) for DVD, should be 2",param_1[1]);
      return 0x8000;
    }
    if (param_1[6] != 1) {
      sprintf(&DAT_1001f000,"Invalid audio error protection (%d) for DVD, should be 1",param_1[6]);
      return 0x8001;
    }
    if (param_1[4] != 0) {
      sprintf(&DAT_1001f000,"Invalid audio emphasis (%d) for DVD, should be 0",param_1[4]);
      return 0x8002;
    }
    if (param_1[5] != 0) {
      sprintf(&DAT_1001f000,"Invalid private bit setting (%d), should be 0",param_1[5]);
      return 0x8003;
    }
    if (*param_1 == 2) {
      sprintf(&DAT_1001f000,"Invalid audio mode (%d) for DVD, should be %d, %d or %d",2,0,1,3);
      return 0x8005;
    }
    if (*param_1 == 3) {
      if (6 < param_1[3] - 4U) {
        sprintf(&DAT_1001f000,"Invalid mono audio bitrate code (%d) for DVD, range is %d .. %d",
                param_1[3],4,10);
        return 0x8004;
      }
    }
    else if (param_1[3] < 4) {
      sprintf(&DAT_1001f000,"Invalid audio bitrate code (%d) for DVD, range is %d .. %d",param_1[3],
              4,0xe);
      return 0x8004;
    }
    if (param_3 != 48000) {
      sprintf(&DAT_1001f000,"Invalid audio sample rate (%d) for DVD, should be 48000",param_3);
      return 0x8006;
    }
  }
  return 0;
}


