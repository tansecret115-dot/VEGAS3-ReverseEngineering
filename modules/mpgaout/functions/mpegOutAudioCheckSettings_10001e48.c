/* Module: mpgaout.dll
   Function: mpegOutAudioCheckSettings
   Address: 10001e48
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutAudioCheckSettings(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* 0x1e48  7  mpegOutAudioCheckSettings */
  DAT_1001f000 = 0;
  if (((param_3 == 32000) || (param_3 == 0xac44)) || (param_3 == 48000)) {
    if (*param_1 < 4) {
      if (param_1[1] - 1 < 2) {
        if (param_1[2] - 1 < 2) {
          if (param_1[3] - 1 < 0xe) {
            uVar1 = param_1[4];
            if ((uVar1 < 2) || (uVar1 == 3)) {
              if (param_1[5] < 2) {
                if (param_1[6] < 2) {
                  if (param_1[7] < 2) {
                    if (param_1[8] < 2) {
                      uVar2 = FUN_10001888((int *)param_1,param_2,param_3);
                    }
                    else {
                      sprintf(&DAT_1001f000,"Invalid audio original setting (%d), range is 0 .. 1",
                              param_1[8]);
                      uVar2 = 0x40008;
                    }
                  }
                  else {
                    sprintf(&DAT_1001f000,"Invalid audio copyright setting (%d), range is 0 .. 1",
                            param_1[7]);
                    uVar2 = 0x40007;
                  }
                }
                else {
                  sprintf(&DAT_1001f000,
                          "Invalid audio error protection setting (%d), range is 0 .. 1",param_1[6])
                  ;
                  uVar2 = 0x40006;
                }
              }
              else {
                sprintf(&DAT_1001f000,"Invalid audio private bit (%d), range is 0 .. 1",param_1[5]);
                uVar2 = 0x40005;
              }
            }
            else {
              sprintf(&DAT_1001f000,"Invalid audio emphasis (%d), should be 0, 1 or 3",uVar1);
              uVar2 = 0x40004;
            }
          }
          else {
            sprintf(&DAT_1001f000,"Invalid audio bitrate code (%d), range is %d .. %d",param_1[3],1,
                    0xe);
            uVar2 = 0x40003;
          }
        }
        else {
          sprintf(&DAT_1001f000,"Invalid audio psychoacoustic model (%d), range is 1 .. 2",
                  param_1[2]);
          uVar2 = 0x40002;
        }
      }
      else {
        sprintf(&DAT_1001f000,"Invalid audio layer (%d), range is 1 .. 2",param_1[1]);
        uVar2 = 0x40001;
      }
    }
    else {
      sprintf(&DAT_1001f000,"Invalid audio mode (%d), range is %d .. %d",*param_1,0,3);
      uVar2 = 0x40000;
    }
  }
  else {
    sprintf(&DAT_1001f000,"Invalid audio sample rate (%d), should be 32000, 44100 or 48000",param_3)
    ;
    uVar2 = 0x40009;
  }
  return uVar2;
}


