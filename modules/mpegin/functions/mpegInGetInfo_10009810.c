/* Module: mpegin.dll
   Function: mpegInGetInfo
   Address: 10009810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegInGetInfo(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
                    /* 0x9810  24  mpegInGetInfo */
  if (param_1[7] != 0) {
    FUN_10007e90((int)param_1,(byte *)s_An_MPEG_file_is_already_open_10018e54);
    return 1;
  }
  iVar2 = -1;
  pcVar4 = (char *)*param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    FUN_10007e90((int)param_1,(byte *)s_Invalid_MPEG_filename_10018e3c);
    return 1;
  }
  iVar2 = FUN_10007f30((int)param_1,0,0,0);
  if (iVar2 != 0) {
    mpegInCloseMPEG((int)param_1);
    return 1;
  }
  iVar2 = FUN_10005440((int)param_1,param_1[0x4b95] + 0x128,(LPCSTR)*param_1);
  if (iVar2 != 0) {
    mpegInCloseMPEG((int)param_1);
    return 1;
  }
  param_1[7] = 1;
  iVar2 = FUN_10002f70((int)param_1,0x100000);
  if (iVar2 == 0) {
    param_1[0x21] = 0;
    param_1[10] = 0;
    if (param_1[9] != 0) {
      if (((int)param_1[0x341] < 1) || ((int)param_1[0x33f] < (int)param_1[0x341])) {
        param_1[0x341] = 1;
      }
      iVar2 = param_1[0x341];
      iVar3 = 0;
      if (iVar2 != 0) {
        while( true ) {
          if ((param_1[0x33d] & 1 << ((byte)iVar3 & 0x1f)) != 0) {
            iVar2 = iVar2 + -1;
          }
          if (iVar2 == 0) break;
          iVar3 = iVar3 + 1;
        }
      }
      *(int *)(param_1[0x4b95] + 0x158) = iVar3 + 0x1e0;
      *(undefined4 *)(param_1[0x4b95] + 0x15c) = 0;
      iVar2 = param_1[0x4b95];
      *(undefined4 *)(iVar2 + 0x78) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x7c) = 0xffffffff;
      iVar2 = param_1[0x4b95];
      FUN_10005520((int *)(iVar2 + 0x128),*(uint *)(iVar2 + 0xf8),*(int *)(iVar2 + 0xfc),0);
      iVar2 = param_1[0x4b95];
      if (((*(int *)(iVar2 + 0x168) == 0) && (*(int *)(iVar2 + 0x10c) == 0)) && (param_1[10] != 0))
      {
        FUN_10005520((int *)(iVar2 + 0x128),*(uint *)(iVar2 + 0xf8),*(int *)(iVar2 + 0xfc),0);
        FUN_10006440((int)param_1,0);
      }
    }
    if (param_1[0x20] != 0) {
      iVar2 = FUN_10005440((int)param_1,param_1[0x4b95] + 0x200,(LPCSTR)*param_1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1[0x4b95] + 0x22c) = param_1[8];
        if (param_1[0x33e] == 0) {
          if (param_1[0x1394] == 0) {
            if (param_1[0x138e] != 0) {
              if (((int)param_1[0x340] < 1) || ((int)param_1[0x138e] < (int)param_1[0x340])) {
                param_1[0x340] = 1;
              }
              iVar2 = param_1[0x340];
              iVar3 = 0;
              if (iVar2 != 0) {
                while( true ) {
                  if ((param_1[0x138d] & 1 << ((byte)iVar3 & 0x1f)) != 0) {
                    iVar2 = iVar2 + -1;
                  }
                  if (iVar2 == 0) break;
                  iVar3 = iVar3 + 1;
                }
              }
              *(undefined4 *)(param_1[0x4b95] + 0x230) = 0x1bd;
              *(int *)(param_1[0x4b95] + 0x234) = iVar3 + 0x80;
              iVar2 = param_1[0x4b95];
              FUN_10005520((int *)(iVar2 + 0x200),*(uint *)(iVar2 + 0xf8),*(int *)(iVar2 + 0xfc),0);
              iVar2 = param_1[0x4b95];
              *(undefined4 *)(iVar2 + 0xd8) = 0;
              *(undefined4 *)(iVar2 + 0xdc) = 0xbff00000;
              FUN_10004d90((int)param_1);
            }
          }
          else {
            if (((int)param_1[0x340] < 1) || ((int)param_1[0x1394] < (int)param_1[0x340])) {
              param_1[0x340] = 1;
            }
            iVar2 = param_1[0x340];
            iVar3 = 0;
            if (iVar2 != 0) {
              while( true ) {
                if ((param_1[0x1393] & 1 << ((byte)iVar3 & 0x1f)) != 0) {
                  iVar2 = iVar2 + -1;
                }
                if (iVar2 == 0) break;
                iVar3 = iVar3 + 1;
              }
            }
            *(undefined4 *)(param_1[0x4b95] + 0x230) = 0x1bd;
            *(int *)(param_1[0x4b95] + 0x234) = iVar3 + 0xa0;
            iVar2 = param_1[0x4b95];
            FUN_10005520((int *)(iVar2 + 0x200),*(uint *)(iVar2 + 0xf8),*(int *)(iVar2 + 0xfc),0);
            iVar2 = param_1[0x4b95];
            *(undefined4 *)(iVar2 + 0xd8) = 0;
            *(undefined4 *)(iVar2 + 0xdc) = 0xbff00000;
            FUN_10004c10((int)param_1);
          }
        }
        else {
          if (((int)param_1[0x340] < 1) || ((int)param_1[0x33e] < (int)param_1[0x340])) {
            param_1[0x340] = 1;
          }
          iVar2 = param_1[0x340];
          iVar3 = 0;
          if (iVar2 != 0) {
            while( true ) {
              if ((param_1[0x33c] & 1 << ((byte)iVar3 & 0x1f)) != 0) {
                iVar2 = iVar2 + -1;
              }
              if (iVar2 == 0) break;
              iVar3 = iVar3 + 1;
            }
          }
          *(int *)(param_1[0x4b95] + 0x230) = iVar3 + 0x1c0;
          *(undefined4 *)(param_1[0x4b95] + 0x234) = 0;
          iVar2 = param_1[0x4b95];
          FUN_10005520((int *)(iVar2 + 0x200),*(uint *)(iVar2 + 0xf8),*(int *)(iVar2 + 0xfc),0);
          iVar2 = param_1[0x4b95];
          *(undefined4 *)(iVar2 + 0xd8) = 0;
          *(undefined4 *)(iVar2 + 0xdc) = 0xbff00000;
          FUN_100048b0((int)param_1);
        }
      }
      else {
        param_1[0x20] = 0;
      }
    }
    FUN_10008df0((int)param_1);
    if (*(int *)(param_1[0x4b95] + 0x150) != 0) {
      FUN_100054f0(param_1[0x4b95] + 0x128);
    }
    if (*(int *)(param_1[0x4b95] + 0x228) != 0) {
      FUN_100054f0(param_1[0x4b95] + 0x200);
    }
    if (**(int **)(param_1[0x4b95] + 0x128) != 0) {
      (*(code *)param_1[0x4b94])(**(int **)(param_1[0x4b95] + 0x128));
      **(undefined4 **)(param_1[0x4b95] + 0x128) = 0;
    }
    if (**(int **)(param_1[0x4b95] + 0x200) != 0) {
      (*(code *)param_1[0x4b94])(**(int **)(param_1[0x4b95] + 0x200));
      **(undefined4 **)(param_1[0x4b95] + 0x200) = 0;
    }
    (*(code *)param_1[0x4b94])(param_1[0x4b95]);
    param_1[0x4b95] = 0;
    param_1[7] = 0;
    return 0;
  }
  mpegInCloseMPEG((int)param_1);
  return 1;
}


