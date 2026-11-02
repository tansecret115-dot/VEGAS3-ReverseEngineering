/* Module: mpgvout.003
   Function: mpegOutVideoCheckSettings
   Address: 10015f6c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl mpegOutVideoCheckSettings(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *local_30;
  
                    /* 0x15f6c  10  mpegOutVideoCheckSettings */
  if (4 < *param_1) {
    sprintf(&DAT_10040500,"Invalid video mpeg type (%d), range is %d .. %d",*param_1,0,4);
    return 0x2002c;
  }
  uVar1 = param_1[3];
  if (0x1f < uVar1 - 1) {
    sprintf(&DAT_10040500,"Invalid video N (%d), range is 1 .. %d",uVar1,0x20);
    return 0x2002d;
  }
  uVar3 = param_1[4];
  if (7 < uVar3 - 1) {
    sprintf(&DAT_10040500,"Invalid video M (%d), range is 1 .. %d",uVar3,8);
    return 0x2002e;
  }
  if ((int)uVar1 % (int)uVar3 != 0) {
    sprintf(&DAT_10040500,"Invalid video N(%d)/M(%d) combination, N must be a multiple of M",uVar1,
            uVar3);
    return 0x2002f;
  }
  iVar2 = FUN_10012cc4((int *)param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_100120b4((int *)param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((int)*param_1 < 2) {
    uVar1 = param_1[2];
    if (uVar1 != 0) {
      iVar2 = *(int *)((int)param_1 + 0x365);
      if ((0x300 < iVar2) || (iVar6 = *(int *)((int)param_1 + 0x369), 0x240 < iVar6)) {
LAB_100160e6:
        sprintf(&DAT_10040500,
                "Invalid video constrained parameters setting (%d) for width/height/frame rate",
                param_1[2]);
        return 0x20030;
      }
      iVar5 = iVar2 + 0xf;
      if (iVar5 < 0) {
        iVar5 = iVar2 + 0x1e;
      }
      iVar2 = iVar6 + 0xf;
      if (iVar2 < 0) {
        iVar2 = iVar6 + 0x1e;
      }
      iVar2 = (iVar2 >> 4) * (iVar5 >> 4);
      if (((0x18c < iVar2) || (_DAT_10015f5c < (double)iVar2 * *(double *)(param_1 + 0xe))) ||
         (5 < (int)param_1[0xd])) goto LAB_100160e6;
      if (_DAT_10015f64 < *(double *)(param_1 + 0x10)) {
        sprintf(&DAT_10040500,
                "Invalid video bit rate(%d)/constrained(%d) combination, must be <= %d",
                (int)ROUND(*(double *)(param_1 + 0x10)),uVar1,0x1c5200);
        return 0x20009;
      }
      if (0x14 < (int)param_1[0x15]) {
        sprintf(&DAT_10040500,
                "Invalid video vbv buffer(%d)/constrained(%d) combination, must be <= 20",
                param_1[0x15],uVar1);
        return 0x2000d;
      }
      if (0 < (int)param_1[4]) {
        iVar6 = 0;
        iVar2 = 0;
        do {
          iVar5 = *(int *)((int)param_1 + iVar6 + 0x7c);
          if (4 < iVar5) {
            sprintf(&DAT_10040500,
                    "Invalid video motion_data[%d].forw_hor_f_code (%d) for MPEG1, must be <= 4",
                    iVar2,iVar5);
            return 0x20017;
          }
          iVar5 = *(int *)((int)param_1 + iVar6 + 0x80);
          if (4 < iVar5) {
            sprintf(&DAT_10040500,
                    "Invalid video motion_data[%d].forw_vert_f_code (%d) for MPEG1, must be <= 4",
                    iVar2,iVar5);
            return 0x20018;
          }
          if (iVar2 != 0) {
            iVar5 = *(int *)((int)param_1 + iVar6 + 0x8c);
            if (4 < iVar5) {
              sprintf(&DAT_10040500,
                      "Invalid video motion_data[%d].back_hor_f_code (%d) for MPEG1, must be <= 4",
                      iVar2,iVar5);
              return 0x2001b;
            }
            iVar5 = *(int *)((int)param_1 + iVar6 + 0x90);
            if (4 < iVar5) {
              sprintf(&DAT_10040500,
                      "Invalid video motion_data[%d].back_vert_f_code (%d) for MPEG1, must be <= 4",
                      iVar2,iVar5);
              return 0x2001c;
            }
          }
          iVar6 = iVar6 + 0x20;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_1[4]);
      }
    }
  }
  else {
    iVar2 = FUN_10013a04((int)param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if ((int)*param_1 < 2) {
    if (param_1[0x1c] == 0) {
      sprintf(&DAT_10040500,"Invalid video progressive sequence (%d) for MPEG1, must be 1",0);
      return 0x20031;
    }
    if (param_1[0x1d] != 1) {
      sprintf(&DAT_10040500,"Invalid video chroma format (%d) for MPEG1, must be %d",param_1[0x1d],1
             );
      return 0x20032;
    }
    if (param_1[0x6d] != 0) {
      sprintf(&DAT_10040500,"Invalid video DC precision (%d) for MPEG1, must be 0",param_1[0x6d]);
      return 0x20033;
    }
    if (param_1[1] != 0) {
      sprintf(&DAT_10040500,"Invalid video pulldown flag (%d) for MPEG1, must be %d",param_1[1],0);
      return 0x20034;
    }
    iVar6 = 0;
    iVar2 = 0;
    do {
      iVar5 = *(int *)((int)param_1 + iVar2 + 0x1d4);
      if (iVar5 != 0) {
        sprintf(&DAT_10040500,"Invalid video qscale_tab[%d] (%d) for MPEG1, must be 0",iVar6,iVar5);
        return 0x20035;
      }
      iVar5 = *(int *)((int)param_1 + iVar2 + 0x1e0);
      if (iVar5 != 0) {
        sprintf(&DAT_10040500,"Invalid video intravlc_tab[%d] (%d) for MPEG1, must be 0",iVar6,iVar5
               );
        return 0x20036;
      }
      iVar5 = *(int *)((int)param_1 + iVar2 + 0x1ec);
      if (iVar5 != 0) {
        sprintf(&DAT_10040500,"Invalid video altscan_tab[%d] (%d) for MPEG1, must be 0",iVar6,iVar5)
        ;
        return 0x20037;
      }
      iVar2 = iVar2 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    if (1 < (int)*param_1) goto LAB_100162db;
  }
  else {
LAB_100162db:
    if (param_1[2] != 0) {
      sprintf(&DAT_10040500,"Invalid video constrained parameters flag (%d) for MPEG-2, must be 0",
              param_1[2]);
      return 0x20038;
    }
  }
  uVar1 = param_1[0x1c];
  if (uVar1 == 0) {
    uVar3 = param_1[0x7f];
    if (uVar3 != 0) goto LAB_1001633e;
LAB_10016368:
    if (param_1[0x7e] != 0) {
      sprintf(&DAT_10040500,
              "Invalid video progressive frame(%d)/repeatfirst(%d) combination, must be 0",uVar3,
              param_1[0x7e]);
      return 0x2003b;
    }
    if (uVar3 != 0) goto LAB_10016394;
  }
  else {
    uVar3 = param_1[0x7f];
    if (uVar3 == 0) {
      sprintf(&DAT_10040500,
              "Invalid video progressive sequence(%d)/progressive frame(%d) combination, must be 1",
              uVar1,0);
      return 0x20039;
    }
LAB_1001633e:
    if (param_1[0xb] != 0) {
      sprintf(&DAT_10040500,
              "Invalid video progressive frame(%d)/fieldpic(%d) combination, must be 0",uVar3,
              param_1[0xb]);
      return 0x2003a;
    }
    if (uVar3 == 0) goto LAB_10016368;
LAB_10016394:
    iVar2 = 0;
    do {
      if (param_1[iVar2 + 0x6f] == 0) {
        sprintf(&DAT_10040500,
                "Invalid video progressive frame (%d)/frame_pred_dct_tab[%d](%d) combination, must be 1"
                ,uVar3,iVar2,0);
        return 0x2003c;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  if (((uVar1 != 0) && (param_1[0x7e] == 0)) && (param_1[0x6e] != 0)) {
    sprintf(&DAT_10040500,
            "Invalid video progressive sequence(%d)/repeatfirst(%d)/topfirst(%d) combination, must be 0"
            ,uVar1,0,param_1[0x6e]);
    return 0x2003d;
  }
  if (param_1[0x16] == 1) {
    uVar4 = 1;
    if (param_1[0x88] == 1) {
LAB_1001640a:
      sprintf(&DAT_10040500,
              "Invalid video constant bitrate(%d)/fixed vbv delay(%d) combination, must be 0 for CBR or 1 for VBR"
              ,param_1[0x16],uVar4);
      return 0x2003e;
    }
  }
  else {
    uVar4 = 0;
    if (param_1[0x88] == 0) goto LAB_1001640a;
  }
  iVar2 = 0;
  if (0 < (int)param_1[4]) {
    local_30 = param_1 + 0x26;
    iVar6 = 0;
    do {
      if ((4 << ((byte)local_30[-7] & 0x1f)) + -1 < (int)local_30[-5]) {
        sprintf(&DAT_10040500,
                "Invalid video motion_data[%d].sxf(%d)/forw_hor_f_code(%d) combination",iVar2,
                *(undefined4 *)(iVar6 + 0x84 + (int)param_1),local_30[-7]);
        return 0x2003f;
      }
      if ((4 << ((byte)local_30[-6] & 0x1f)) + -1 < (int)local_30[-4]) {
        sprintf(&DAT_10040500,
                "Invalid video motion_data[%d].syf(%d)/forw_vert_f_code(%d) combination",iVar2,
                local_30[-4],local_30[-6]);
        return 0x20040;
      }
      if (iVar2 != 0) {
        if ((4 << ((byte)local_30[-3] & 0x1f)) + -1 < (int)local_30[-1]) {
          sprintf(&DAT_10040500,
                  "Invalid video motion_data[%d].sxb(%d)/back_hor_f_code(%d) combination",iVar2,
                  local_30[-1],local_30[-3]);
          return 0x20041;
        }
        if ((4 << ((byte)local_30[-2] & 0x1f)) + -1 < (int)*local_30) {
          sprintf(&DAT_10040500,
                  "Invalid video motion_data[%d].syb(%d)/back_vert_f_code(%d) combination",iVar2,
                  *local_30,local_30[-2]);
          return 0x20042;
        }
      }
      iVar2 = iVar2 + 1;
      local_30 = local_30 + 8;
      iVar6 = iVar6 + 0x20;
    } while (iVar2 < (int)param_1[4]);
  }
  iVar2 = FUN_10014cd4((int *)param_1);
  return iVar2;
}


