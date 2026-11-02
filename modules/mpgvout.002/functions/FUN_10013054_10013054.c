/* Module: mpgvout.002
   Function: FUN_10013054
   Address: 10013054
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10013054(int *param_1)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if (*param_1 < 2) {
    iVar7 = param_1[0xc];
    if (0xd < iVar7 - 1U) {
      pcVar6 = "Invalid video aspect ratio (%d) for MPEG1, range is 1 .. 14";
LAB_10013090:
      sprintf(&DAT_10040500,pcVar6,iVar7);
      return 0x20007;
    }
  }
  else {
    iVar7 = param_1[0xc];
    if (3 < iVar7 - 1U) {
      pcVar6 = "Invalid video aspect ratio (%d) for MPEG2, range is 1 .. 4";
      goto LAB_10013090;
    }
  }
  if (7 < param_1[0xd] - 1U) {
    sprintf(&DAT_10040500,"Invalid video frame rate code (%d), range is 1 .. 8",param_1[0xd]);
    return 0x20008;
  }
  if (param_1[0x16] == 1) {
    iVar7 = *param_1;
    if (iVar7 < 2) {
      dVar1 = *(double *)(param_1 + 0x10);
      if (((byte)(dVar1 < _DAT_1001303c |
                  (byte)((ushort)((ushort)(NAN(dVar1) || NAN(_DAT_1001303c)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(dVar1 == _DAT_1001303c) << 0xe) >> 8)) == 1) ||
         (_DAT_10013044 < dVar1)) {
        uVar5 = 0x63ffe70;
        pcVar6 = "Invalid video bit rate (%d) for MPEG1, range is %d .. %d";
LAB_1001319e:
        sprintf(&DAT_10040500,pcVar6,(int)ROUND(dVar1),0x2ee00,uVar5);
        return 0x20009;
      }
    }
    else {
      dVar1 = *(double *)(param_1 + 0x10);
      if (((byte)(dVar1 < _DAT_1001303c |
                  (byte)((ushort)((ushort)(NAN(dVar1) || NAN(_DAT_1001303c)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(dVar1 == _DAT_1001303c) << 0xe) >> 8)) == 1) ||
         (_DAT_1001304c < dVar1)) {
        uVar5 = 80000000;
        pcVar6 = "Invalid video bit rate (%d) for MPEG2, range is %d .. %d";
        goto LAB_1001319e;
      }
    }
  }
  else {
    dVar1 = *(double *)((int)param_1 + 0x33d);
    if (dVar1 < 0.0) {
      sprintf(&DAT_10040500,"Invalid video minimum bit rate (%d), must be >= 0",(int)ROUND(dVar1));
      return 0x2000c;
    }
    dVar2 = *(double *)((int)param_1 + 0x335);
    if ((NAN(dVar2) || NAN(dVar1)) < (dVar2 < dVar1)) {
      sprintf(&DAT_10040500,"Invalid video average bit rate (%d), must be >= minimum bit rate (%d)",
              (int)ROUND(dVar2),(int)ROUND(dVar1));
      return 0x2000b;
    }
    dVar1 = *(double *)(param_1 + 0x12);
    if ((NAN(dVar1) || NAN(dVar2)) < (dVar1 < dVar2)) {
      iVar7 = (int)ROUND(dVar2);
      iVar4 = (int)ROUND(dVar1);
      pcVar6 = "Invalid video maximum bit rate (%d), must be >= average bit rate (%d)";
LAB_1001336b:
      sprintf(&DAT_10040500,pcVar6,iVar4,iVar7);
      return 0x2000a;
    }
    iVar7 = *param_1;
    if (iVar7 < 2) {
      if (_DAT_10013044 < dVar1) {
        iVar7 = 0x63ffe70;
        iVar4 = (int)ROUND(dVar1);
        pcVar6 = "Invalid video maximum bit rate (%d) for MPEG1, maximum is %d";
        goto LAB_1001336b;
      }
    }
    else if (_DAT_1001304c < dVar1) {
      iVar7 = 80000000;
      iVar4 = (int)ROUND(dVar1);
      pcVar6 = "Invalid video maximum bit rate (%d) for MPEG2, maximum is %d (high level)";
      goto LAB_1001336b;
    }
  }
  if (iVar7 < 2) {
    iVar4 = param_1[0x15];
    if (iVar4 - 1U < 0x3ff) {
LAB_100133d4:
      if (2 < param_1[0x1d] - 1U) {
        sprintf(&DAT_10040500,"Invalid video chroma format (%d), range is %d .. %d",param_1[0x1d],1,
                3);
        return 0x2000e;
      }
      if (4 < (uint)param_1[0x62]) {
        sprintf(&DAT_10040500,"Invalid video format (%d), range is 0 .. 4",param_1[0x62]);
        return 0x2000f;
      }
      iVar4 = param_1[99];
      if ((6 < iVar4 - 1U) || (iVar4 == 3)) {
        sprintf(&DAT_10040500,"Invalid video color primaries (%d), should be 1, 2 or 4 .. 7",iVar4);
        return 0x20010;
      }
      iVar4 = param_1[100];
      if ((6 < iVar4 - 1U) || (iVar4 == 3)) {
        sprintf(&DAT_10040500,
                "Invalid video transfer characteristics (%d), should be 1, 2 or 4 .. 7",iVar4);
        return 0x20011;
      }
      iVar4 = param_1[0x65];
      if ((6 < iVar4 - 1U) || (iVar4 == 3)) {
        sprintf(&DAT_10040500,"Invalid video matrix coefficients (%d), should be 1, 2 or 4 .. 7",
                iVar4);
        return 0x20012;
      }
      if (0x3fff < (uint)param_1[0x66]) {
        sprintf(&DAT_10040500,"Invalid video display horizontal size (%d), range is 0 .. 16383",
                param_1[0x66]);
        return 0x20013;
      }
      if (0x3fff < (uint)param_1[0x67]) {
        sprintf(&DAT_10040500,"Invalid video display vertical size (%d), range is 0 .. 16383",
                param_1[0x67]);
        return 0x20014;
      }
      if (3 < (uint)param_1[0x6d]) {
        sprintf(&DAT_10040500,"Invalid video dc precision (%d), range is 0 .. 3",param_1[0x6d]);
        return 0x20015;
      }
      if (2 < (uint)param_1[1]) {
        sprintf(&DAT_10040500,"Invalid video pulldown flag (%d), range is %d .. %d",param_1[1],0,2);
        return 0x20016;
      }
      iVar4 = 0;
      if (0 < param_1[4]) {
        piVar3 = param_1 + 0x25;
        do {
          if (iVar7 < 2) {
            iVar8 = piVar3[-6];
            if (6 < iVar8 - 1U) {
              pcVar6 = 
              "Invalid video motion_data[%d].forw_hor_f_code (%d) for MPEG1, range is 1 .. 7";
LAB_1001359b:
              sprintf(&DAT_10040500,pcVar6,iVar4,iVar8);
              return 0x20017;
            }
            iVar8 = piVar3[-5];
            if (6 < iVar8 - 1U) {
              pcVar6 = 
              "Invalid video motion_data[%d].forw_vert_f_code (%d) for MPEG1, range is 1 .. 7";
LAB_100136bb:
              sprintf(&DAT_10040500,pcVar6,iVar4,iVar8);
              return 0x20018;
            }
          }
          else {
            iVar8 = piVar3[-6];
            if (8 < iVar8 - 1U) {
              pcVar6 = 
              "Invalid video motion_data[%d].forw_hor_f_code (%d) for MPEG2, range is 1 .. 9";
              goto LAB_1001359b;
            }
            iVar8 = piVar3[-5];
            if (8 < iVar8 - 1U) {
              pcVar6 = 
              "Invalid video motion_data[%d].forw_vert_f_code (%d) for MPEG2, range is 1 .. 9";
              goto LAB_100136bb;
            }
          }
          if (piVar3[-4] < 1) {
            sprintf(&DAT_10040500,"Invalid video motion_data[%d].sxf (%d), must be >= 0",iVar4,
                    piVar3[-4]);
            return 0x20019;
          }
          if (param_1[iVar4 * 8 + 0x22] < 1) {
            sprintf(&DAT_10040500,"Invalid video motion_data[%d].syf (%d), must be >= 0",iVar4,
                    param_1[iVar4 * 8 + 0x22]);
            return 0x2001a;
          }
          if (iVar4 != 0) {
            if (iVar7 < 2) {
              iVar8 = param_1[iVar4 * 8 + 0x23];
              if (6 < iVar8 - 1U) {
                pcVar6 = 
                "Invalid video motion_data[%d].back_hor_f_code (%d) for MPEG1, range is 1 .. 7";
LAB_10013613:
                sprintf(&DAT_10040500,pcVar6,iVar4,iVar8);
                return 0x2001b;
              }
              iVar8 = param_1[iVar4 * 8 + 0x24];
              if (6 < iVar8 - 1U) {
                pcVar6 = 
                "Invalid video motion_data[%d].back_vert_f_code (%d) for MPEG1, range is 1 .. 7";
LAB_10013747:
                sprintf(&DAT_10040500,pcVar6,iVar4,iVar8);
                return 0x2001c;
              }
            }
            else {
              iVar8 = param_1[iVar4 * 8 + 0x23];
              if (8 < iVar8 - 1U) {
                pcVar6 = 
                "Invalid video motion_data[%d].back_hor_f_code (%d) for MPEG2, range is 1 .. 9";
                goto LAB_10013613;
              }
              iVar8 = param_1[iVar4 * 8 + 0x24];
              if (8 < iVar8 - 1U) {
                pcVar6 = 
                "Invalid video motion_data[%d].back_vert_f_code (%d) for MPEG2, range is 1 .. 9";
                goto LAB_10013747;
              }
            }
            if (*piVar3 < 1) {
              sprintf(&DAT_10040500,"Invalid video motion_data[%d].sxb (%d), must be >= 0",iVar4,
                      *piVar3);
              return 0x2001d;
            }
            if (param_1[iVar4 * 8 + 0x26] < 1) {
              sprintf(&DAT_10040500,"Invalid video motion_data[%d].syb (%d), must be >= 0",iVar4,
                      param_1[iVar4 * 8 + 0x26]);
              return 0x2001e;
            }
          }
          piVar3 = piVar3 + 8;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1[4]);
      }
      return 0;
    }
    pcVar6 = "Invalid video vbv buffer size (%d) for MPEG1, range is 1 .. 1023";
  }
  else {
    iVar4 = param_1[0x15];
    if (iVar4 - 1U < 0x3ffff) goto LAB_100133d4;
    pcVar6 = "Invalid video vbv buffer size (%d) for MPEG2, range is 1 .. 262143";
  }
  sprintf(&DAT_10040500,pcVar6,iVar4);
  return 0x2000d;
}


