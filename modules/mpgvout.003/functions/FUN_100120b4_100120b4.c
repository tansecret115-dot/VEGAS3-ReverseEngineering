/* Module: mpgvout.003
   Function: FUN_100120b4
   Address: 100120b4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100120b4(int *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*param_1 < 2) {
    if (0xfef < *(int *)((int)param_1 + 0x365) - 0x10U) {
      sprintf(&DAT_10040500,"Invalid video horizontal size (%d) for MPEG1, range is 16 .. 4095",
              *(int *)((int)param_1 + 0x365));
      return 0x20000;
    }
    if (*(int *)((int)param_1 + 0x369) - 0x10U < 0xff0) {
      return 0;
    }
    sprintf(&DAT_10040500,"Invalid video vertical size (%d) for MPEG1, range is 16 .. 4095",
            *(int *)((int)param_1 + 0x369));
    return 0x20001;
  }
  iVar1 = *(int *)((int)param_1 + 0x365);
  if (0x770 < iVar1 - 0x10U) {
    sprintf(&DAT_10040500,"Invalid video horizontal size (%d) for MPEG2, range is 16 .. 1920",iVar1)
    ;
    return 0x20002;
  }
  iVar2 = *(int *)((int)param_1 + 0x369);
  if (0x470 < iVar2 - 0x10U) {
    sprintf(&DAT_10040500,"Invalid video vertical size (%d) for MPEG2, range is 16 .. 1152",iVar2);
    return 0x20003;
  }
  if (((iVar1 < 0x5a1) || (iVar6 = param_1[0x1b], iVar6 == 4)) &&
     ((iVar1 < 0x2d1 || (iVar6 = param_1[0x1b], iVar6 < 7)))) {
    if ((iVar2 < 0x241) || (iVar6 = param_1[0x1b], iVar6 < 7)) {
      if ((0x160 < iVar1) && (iVar6 = param_1[0x1b], 8 < iVar6)) goto LAB_100121d0;
      if ((iVar2 < 0x121) || (iVar6 = param_1[0x1b], iVar6 < 9)) {
        if (param_1[0xd] < 4) {
          return 0;
        }
        dVar3 = (double)(iVar1 * iVar2) * *(double *)(param_1 + 0xe);
        dVar4 = (double)*(int *)(&DAT_10035460 + (param_1[0x1b] + -4 >> 1) * 4);
        if ((byte)(dVar4 < dVar3 | (byte)((ushort)((ushort)(NAN(dVar4) || NAN(dVar3)) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar4 == dVar3) << 0xe) >> 8)) != 1) {
          return 0;
        }
        sprintf(&DAT_10040500,
                "Invalid video frame rate code(%d)/horizontal size(%d)/vertical size(%d)/level(%d) combination"
                ,param_1[0xd],iVar1,iVar2,param_1[0x1b]);
        return 0x20006;
      }
    }
    sprintf(&DAT_10040500,"Invalid video vertical size(%d)/level(%d) combination",iVar2,iVar6);
    uVar5 = 0x20005;
  }
  else {
LAB_100121d0:
    sprintf(&DAT_10040500,"Invalid video horizontal size(%d)/level(%d) combination",iVar1,iVar6);
    uVar5 = 0x20004;
  }
  return uVar5;
}


