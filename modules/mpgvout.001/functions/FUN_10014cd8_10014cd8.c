/* Module: mpgvout.001
   Function: FUN_10014cd8
   Address: 10014cd8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10014cd8(int *param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar3 = param_1[0xd];
  if (iVar3 == 3) {
    uVar2 = 1;
  }
  else if ((iVar3 == 4) || ((iVar3 == 1 && (param_1[1] != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
  }
  iVar3 = *param_1;
  if (iVar3 == 3) {
    if (2 < uVar2) {
      sprintf(&DAT_10040500,"Invalid video svcd frame rate code (%d), must be %d or %d",param_1[0xd]
              ,3,4);
      return 0x800;
    }
    if (uVar2 == 0) {
      iVar3 = param_1[3];
      if (0x12 < iVar3) {
        pcVar4 = "Invalid video svcd mpeg N (%d) for NTSC, should be <= 18";
        goto LAB_10014ee1;
      }
      iVar3 = *(int *)((int)param_1 + 0x369);
      if (iVar3 != 0x1e0) {
        pcVar4 = "Invalid video svcd vertical size (%d) for NTSC, should be 480";
        goto LAB_10014f0e;
      }
    }
    else {
      iVar3 = param_1[3];
      if (0xf < iVar3) {
        pcVar4 = "Invalid video svcd mpeg N (%d) for PAL, should be <= 15";
LAB_10014ee1:
        sprintf(&DAT_10040500,pcVar4,iVar3);
        return 0x801;
      }
      iVar3 = *(int *)((int)param_1 + 0x369);
      if (iVar3 != 0x240) {
        pcVar4 = "Invalid video svcd vertical size (%d) for PAL, should be 576";
LAB_10014f0e:
        sprintf(&DAT_10040500,pcVar4,iVar3);
        return 0x802;
      }
    }
    if (*(int *)((int)param_1 + 0x365) != 0x1e0) {
      sprintf(&DAT_10040500,"Invalid video svcd horizontal size (%d), should be 480",
              *(int *)((int)param_1 + 0x365));
      return 0x803;
    }
    if (3 < param_1[4]) {
      sprintf(&DAT_10040500,"Invalid video svcd mpeg M (%d), should be <= 3",param_1[4]);
      return 0x804;
    }
    if (param_1[0x1a] != 4) {
      sprintf(&DAT_10040500,"Invalid video svcd profile (%d), should be 4",param_1[0x1a]);
      return 0x805;
    }
    if (param_1[0x1b] != 8) {
      sprintf(&DAT_10040500,"Invalid video svcd level (%d), should be 8",param_1[0x1b]);
      return 0x806;
    }
    if (*(int *)((int)param_1 + 0x331) != 1) {
      sprintf(&DAT_10040500,"Invalid video svcd embed SVCD user blocks settings (%d), should be 1",
              *(int *)((int)param_1 + 0x331));
      return 0x807;
    }
    if (param_1[0x1c] != 0) {
      sprintf(&DAT_10040500,"Invalid video svcd progressive sequence (%d), should be 0",
              param_1[0x1c]);
      return 0x808;
    }
    if (1 < param_1[0xc] - 2U) {
      sprintf(&DAT_10040500,"Invalid video svcd aspect ratio (%d), should be 2 or 3",param_1[0xc]);
      return 0x809;
    }
    if (param_1[0x16] == 1) {
      if (_DAT_10014cc8 < *(double *)(param_1 + 0x10)) {
        sprintf(&DAT_10040500,"Invalid video svcd bit rate (%d), should be <= %d",
                (int)ROUND(*(double *)(param_1 + 0x10)),0x286340);
        return 0x80a;
      }
    }
    else if (_DAT_10014cc8 < *(double *)(param_1 + 0x12)) {
      sprintf(&DAT_10040500,"Invalid video svcd maximum bit rate (%d), should be <= %d",
              (int)ROUND(*(double *)(param_1 + 0x12)),0x286340);
      return 0x80b;
    }
    if (param_1[0x15] < 0x71) {
      return 0;
    }
    sprintf(&DAT_10040500,"Invalid video svcd vbv buffer size (%d), should be <= 112",param_1[0x15])
    ;
    return 0x80c;
  }
  if (iVar3 < 4) {
    if (iVar3 != 1) {
      return 0;
    }
    if (2 < uVar2) {
      sprintf(&DAT_10040500,"Invalid video vcd frame rate code (%d), must be %d or %d",param_1[0xd],
              3,4);
      return 0x100;
    }
    if (uVar2 == 0) {
      iVar3 = *(int *)((int)param_1 + 0x369);
      if (iVar3 != 0xf0) {
        pcVar4 = "Invalid video vcd vertical size (%d), should be 240";
        goto LAB_10014d8e;
      }
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x369);
      if (iVar3 != 0x120) {
        pcVar4 = "Invalid video vcd vertical size (%d), should be 288";
LAB_10014d8e:
        sprintf(&DAT_10040500,pcVar4,iVar3);
        return 0x102;
      }
    }
    if (*(int *)((int)param_1 + 0x365) != 0x160) {
      sprintf(&DAT_10040500,"Invalid video vcd horizontal size (%d), should be 352",
              *(int *)((int)param_1 + 0x365));
      return 0x101;
    }
    if (param_1[0x16] == 1) {
      dVar1 = *(double *)(param_1 + 0x10);
      if (((byte)(dVar1 < _DAT_10014cb8 |
                  (byte)((ushort)((ushort)(NAN(dVar1) || NAN(_DAT_10014cb8)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(dVar1 == _DAT_10014cb8) << 0xe) >> 8)) != 1) &&
         (dVar1 <= _DAT_10014cc0)) {
        return 0;
      }
      sprintf(&DAT_10040500,"Invalid video vcd bit rate (%d), range is %d .. %d",(int)ROUND(dVar1),
              0x116520,0x1193b9);
      return 0x104;
    }
    sprintf(&DAT_10040500,"Invalid video vcd bitrate mode (%d), should be %d",param_1[0x16],1);
    return 0x103;
  }
  if (iVar3 != 4) {
    return 0;
  }
  if (2 < uVar2) {
    sprintf(&DAT_10040500,"Invalid video dvd frame rate code (%d), must be %d or %d",param_1[0xd],3,
            4);
    return 0x4000;
  }
  if (uVar2 == 0) {
    iVar3 = param_1[3];
    if (0x12 < iVar3) {
      pcVar4 = "Invalid video dvd mpeg N (%d) for NTSC, should be <= 18";
      goto LAB_100151e9;
    }
    iVar3 = *(int *)((int)param_1 + 0x369);
    if ((iVar3 != 0x1e0) && (iVar3 != 0xf0)) {
      pcVar4 = "Invalid video dvd vertical size (%d) for NTSC, should be 480 or 240";
      goto LAB_1001521f;
    }
    iVar5 = param_1[100];
    if ((iVar5 != 4) && (iVar5 != 6)) {
      pcVar4 = "Invalid video dvd transfer characteristics (%d) for NTSC, should be 4 or 6";
      goto LAB_10015251;
    }
    iVar5 = param_1[99];
    if ((iVar5 != 4) && (iVar5 != 6)) {
      pcVar4 = "Invalid video dvd color primaries (%d) for NTSC, should be 4 or 6";
      goto LAB_10015281;
    }
  }
  else {
    iVar3 = param_1[3];
    if (0xf < iVar3) {
      pcVar4 = "Invalid video dvd mpeg N (%d) for PAL, should be <= 15";
LAB_100151e9:
      sprintf(&DAT_10040500,pcVar4,iVar3);
      return 0x4001;
    }
    iVar3 = *(int *)((int)param_1 + 0x369);
    if ((iVar3 != 0x240) && (iVar3 != 0x120)) {
      pcVar4 = "Invalid video dvd vertical size (%d) for PAL, should be 576 or 288";
LAB_1001521f:
      sprintf(&DAT_10040500,pcVar4,iVar3);
      return 0x4003;
    }
    iVar5 = param_1[100];
    if (iVar5 != 5) {
      pcVar4 = "Invalid video dvd transfer characteristics (%d) for PAL, should be 5";
LAB_10015251:
      sprintf(&DAT_10040500,pcVar4,iVar5);
      return 0x4004;
    }
    iVar5 = param_1[99];
    if (iVar5 != 5) {
      pcVar4 = "Invalid video dvd color primaries (%d) for PAL, should be 5";
LAB_10015281:
      sprintf(&DAT_10040500,pcVar4,iVar5);
      return 0x4005;
    }
  }
  if (iVar3 != param_1[0x67]) {
    sprintf(&DAT_10040500,
            "Invalid video dvd vertical size(%d)/display vertical size(%d) combination, they should be equal"
            ,iVar3,param_1[0x67]);
    return 0x4006;
  }
  if (1 < param_1[0x1a] - 4U) {
    sprintf(&DAT_10040500,"Invalid video dvd MPEG2 profile (%d), should be 4 or 5",param_1[0x1a]);
    return 0x4007;
  }
  if (param_1[0x1b] != 8) {
    sprintf(&DAT_10040500,"Invalid video dvd MPEG2 level (%d), should be 8",param_1[0x1b]);
    return 0x4008;
  }
  if ((iVar3 == 0xf0) && (param_1[0x1c] == 0)) {
    sprintf(&DAT_10040500,
            "Invalid video dvd progressive sequence(%d)/vertical size(%d) combination, should be 1",
            0,0xf0);
    return 0x4009;
  }
  iVar5 = param_1[0xc];
  if (1 < iVar5 - 2U) {
    pcVar4 = "Invalid video dvd aspect ratio (%d), should be 2 or 3";
LAB_1001537a:
    sprintf(&DAT_10040500,pcVar4,iVar5);
    return 0x400a;
  }
  if ((iVar5 == 3) && (*(int *)((int)param_1 + 0x365) == 0x160)) {
    iVar5 = 3;
    pcVar4 = "Invalid video dvd aspect ratio(%d)/horizontal size(%d) combination, should be 3";
    goto LAB_1001537a;
  }
  if (param_1[0x16] == 1) {
    if (_DAT_10014cd0 < *(double *)(param_1 + 0x10)) {
      sprintf(&DAT_10040500,"Invalid video dvd bit rate (%d), should be <= %d",
              (int)ROUND(*(double *)(param_1 + 0x10)),9800000);
      return 0x400b;
    }
  }
  else if (_DAT_10014cd0 < *(double *)(param_1 + 0x12)) {
    sprintf(&DAT_10040500,"Invalid video dvd maximum bit rate (%d), should be <= %d",
            (int)ROUND(*(double *)(param_1 + 0x12)),9800000);
    return 0x400c;
  }
  iVar5 = *(int *)((int)param_1 + 0x365);
  if (iVar5 != 0x2c0) {
    if (iVar5 < 0x2c1) {
      if (iVar5 != 0x160) {
LAB_100154c8:
        sprintf(&DAT_10040500,"Invalid video dvd horizontal size (%d), should be 720, 704 or 352",
                iVar5);
        return 0x4002;
      }
      if (param_1[0x66] != 0x160) {
        pcVar4 = 
        "Invalid video dvd horizontal size(%d)/display horizontal size(%d) combination, should be 352"
        ;
        iVar3 = param_1[0x66];
        goto LAB_100154b0;
      }
      goto LAB_100154e8;
    }
    if (iVar5 != 0x2d0) goto LAB_100154c8;
  }
  if (param_1[0x66] == 0x2d0) {
    if (0x1df < iVar3) {
LAB_100154e8:
      iVar3 = *(int *)((int)param_1 + 0x35d);
      if (((iVar5 == 0x2d0) && (iVar3 < -0x5a0)) || (0x5a0 < iVar3)) {
        pcVar4 = 
        "Invalid video dvd horizontal size(%d)/frame centre horizontal offset(%d) combination, range is -1440 .. 1440"
        ;
      }
      else {
        if (((iVar5 != 0x2c0) || (-0x521 < iVar3)) && (iVar3 < 0x521)) {
          if (*(int *)((int)param_1 + 0x361) != 0) {
            sprintf(&DAT_10040500,"Invalid video dvd frame centre vertical offset (%d), should be 0"
                    ,*(int *)((int)param_1 + 0x361));
            return 0x400f;
          }
          if (param_1[0x65] - 5U < 2) {
            return 0;
          }
          sprintf(&DAT_10040500,"Invalid video dvd matrix coefficients (%d), should be 5 or 6",
                  param_1[0x65]);
          return 0x4010;
        }
        pcVar4 = 
        "Invalid video dvd horizontal size(%d)/frame centre horizontal offset(%d) combination, range is -1312 .. 1312"
        ;
      }
      sprintf(&DAT_10040500,pcVar4,iVar5,iVar3);
      return 0x400e;
    }
    pcVar4 = 
    "Invalid video dvd horizontal size(%d)/vertical size(%d) combination, should be 480 or 576";
  }
  else {
    pcVar4 = 
    "Invalid video dvd horizontal size(%d)/display horizontal size(%d) combination, should be 720";
    iVar3 = param_1[0x66];
  }
LAB_100154b0:
  sprintf(&DAT_10040500,pcVar4,iVar5,iVar3);
  return 0x400d;
}


