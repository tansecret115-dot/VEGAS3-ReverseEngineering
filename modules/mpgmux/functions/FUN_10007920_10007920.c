/* Module: mpgmux.dll
   Function: FUN_10007920
   Address: 10007920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007920(uint *param_1)

{
  double dVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uStack_10;
  
  if (((((char)param_1[0x47a] != '\0') || (*(char *)((int)param_1 + 0x11e9) != '\0')) &&
      (((char)param_1[0x95c] != '\0' || (param_1[0x490] == 0)))) &&
     ((*(char *)((int)param_1 + 0x2571) != '\0' || (param_1[0x494] == 0)))) {
    if ((char)param_1[0x47a] == '\0') {
      *(undefined1 *)((int)param_1 + 0x11eb) = 1;
    }
    else {
      *(double *)(param_1 + 0x51a) =
           *(double *)(param_1 + 0x942) + *(double *)(param_1 + 0x468) +
           *(double *)(param_1 + 0x51a);
      iVar4 = FUN_10008c60((byte *)param_1,0);
      if (iVar4 != 0) {
        return 0x10;
      }
      if ((param_1[0x14] != 0) && (iVar4 = FUN_1000b370((int)param_1), iVar4 != 0)) {
        return 0x10;
      }
      if (((param_1[0xb] == 4) && (param_1[0x10] != 0)) &&
         (iVar4 = FUN_100040e0((int)param_1), iVar4 != 0)) {
        return 0x10;
      }
      if (*(code **)(param_1[0x47e] + 0x18) == (code *)0x0) {
        return 0x10;
      }
      (**(code **)(param_1[0x47e] + 0x18))();
      param_1[0xb9e] = param_1[0xb9e] + 1;
      uStack_10 = (ulonglong)param_1[4];
      dVar1 = (double)uStack_10;
      uStack_10 = (ulonglong)*param_1;
      FUN_1000d1ca((double)uStack_10 * dVar1 * *(double *)(param_1 + 0x940) * _DAT_10015130);
      lVar6 = __ftol();
      *(longlong *)(param_1 + 0x20) = lVar6;
      FUN_10005130((int)param_1,&DAT_10017770);
      FUN_10005130((int)param_1,(byte *)s_Multiplexing_file__s_10017624);
    }
    if (param_1[0x18] == 0) {
      uVar5 = param_1[0x48c];
      param_1[0x48c] = uVar5 + param_1[0x962];
      param_1[0x48d] = param_1[0x48d] + param_1[0x963] + (uint)CARRY4(uVar5,param_1[0x962]);
      uVar5 = param_1[0x48e];
      param_1[0x48e] = uVar5 + param_1[0x962];
      param_1[0x48f] = param_1[0x48f] + param_1[0x963] + (uint)CARRY4(uVar5,param_1[0x962]);
      uVar5 = param_1[0x492];
      param_1[0x492] = uVar5 + param_1[0x95e];
      param_1[0x493] = param_1[0x493] + param_1[0x95f] + (uint)CARRY4(uVar5,param_1[0x95e]);
      uVar5 = param_1[0x496];
      param_1[0x496] = uVar5 + param_1[0x960];
      param_1[0x497] = param_1[0x497] + param_1[0x961] + (uint)CARRY4(uVar5,param_1[0x960]);
      *(double *)(param_1 + 0x51a) = *(double *)(param_1 + 0x942) + *(double *)(param_1 + 0x51a);
    }
    else {
      param_1[0x51a] = param_1[0x524];
      param_1[0x51b] = param_1[0x525];
      param_1[0x468] = 0;
      param_1[0x469] = 0;
      if ((param_1[0x46b] & 2) != 0) {
        param_1[0x966] = param_1[0x492];
        param_1[0x967] = param_1[0x493];
        uVar5 = param_1[0x966];
        uStack_10 = CONCAT44((param_1[0x967] - param_1[0x47d]) - (uint)(uVar5 < param_1[0x47c]),
                             uVar5 - param_1[0x47c]);
        dVar1 = (double)(longlong)uStack_10;
        uStack_10 = CONCAT44((param_1[0x967] - param_1[0x94f]) - (uint)(uVar5 < param_1[0x94e]),
                             uVar5 - param_1[0x94e]);
        dVar1 = dVar1 - ((double)(longlong)uStack_10 - *(double *)(param_1 + 0x956));
        *(double *)(param_1 + 0x526) = dVar1;
        FUN_1000d1ca(dVar1);
        lVar6 = __ftol();
        uVar5 = param_1[0x966];
        param_1[0x966] = uVar5 + (uint)lVar6;
        param_1[0x967] =
             param_1[0x967] + (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar5,(uint)lVar6);
        FUN_1000d1ca(*(double *)(param_1 + 0x526));
        lVar6 = __ftol();
        *(longlong *)(param_1 + 0x95e) = lVar6;
        param_1[0x492] = param_1[0x966];
        param_1[0x493] = param_1[0x967];
      }
      if ((param_1[0x46b] & 4) != 0) {
        param_1[0x968] = param_1[0x496];
        uVar5 = param_1[0x497];
        param_1[0x969] = uVar5;
        uVar2 = param_1[0x968];
        uStack_10 = CONCAT44((uVar5 - param_1[0x47d]) - (uint)(uVar2 < param_1[0x47c]),
                             uVar2 - param_1[0x47c]);
        dVar1 = (double)(longlong)uStack_10;
        uStack_10 = CONCAT44((uVar5 - param_1[0x951]) - (uint)(uVar2 < param_1[0x950]),
                             uVar2 - param_1[0x950]);
        dVar1 = dVar1 - ((double)(longlong)uStack_10 - *(double *)(param_1 + 0x958));
        *(double *)(param_1 + 0x528) = dVar1;
        FUN_1000d1ca(dVar1);
        lVar6 = __ftol();
        uVar5 = param_1[0x968];
        param_1[0x968] = uVar5 + (uint)lVar6;
        param_1[0x969] =
             param_1[0x969] + (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar5,(uint)lVar6);
        FUN_1000d1ca(*(double *)(param_1 + 0x528));
        lVar6 = __ftol();
        *(longlong *)(param_1 + 0x960) = lVar6;
        param_1[0x496] = param_1[0x968];
        param_1[0x497] = param_1[0x969];
      }
      param_1[0x96a] = param_1[0x48c];
      param_1[0x96b] = param_1[0x48d];
      param_1[0x96c] = param_1[0x48e];
      param_1[0x96d] = param_1[0x48f];
      uStack_10 = CONCAT44((param_1[0x96b] - param_1[0x953]) -
                           (uint)(param_1[0x96a] < param_1[0x952]),param_1[0x96a] - param_1[0x952]);
      *(double *)(param_1 + 0x52a) = -((double)(longlong)uStack_10 - *(double *)(param_1 + 0x954));
      FUN_1000d1ca(-((double)(longlong)uStack_10 - *(double *)(param_1 + 0x954)));
      lVar6 = __ftol();
      uVar5 = param_1[0x96a];
      param_1[0x96a] = uVar5 + (uint)lVar6;
      param_1[0x96b] =
           param_1[0x96b] + (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar5,(uint)lVar6);
      FUN_1000d1ca(*(double *)(param_1 + 0x52a));
      lVar6 = __ftol();
      uVar5 = param_1[0x96c];
      param_1[0x96c] = uVar5 + (uint)lVar6;
      param_1[0x96d] =
           param_1[0x96d] + (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar5,(uint)lVar6);
      FUN_1000d1ca(*(double *)(param_1 + 0x52a));
      lVar6 = __ftol();
      *(longlong *)(param_1 + 0x962) = lVar6;
      param_1[0x48c] = param_1[0x96a];
      param_1[0x48d] = param_1[0x96b];
      param_1[0x48e] = param_1[0x96c];
      param_1[0x48f] = param_1[0x96d];
      param_1[0xb72] = param_1[0x48e];
      param_1[0xb73] = param_1[0x48f];
      param_1[0xb76] = param_1[0x48e];
      param_1[0xb77] = param_1[0x48f];
      FUN_10001270((int)param_1,(int)(param_1 + 0x52e));
      FUN_10001270((int)param_1,(int)(param_1 + 0x530));
      FUN_10001270((int)param_1,(int)(param_1 + 0x532));
    }
    param_1[0x46c] = 0;
    param_1[0x472] = 0;
    param_1[0x980] = 0;
    param_1[0x981] = 0;
    param_1[0x95a] = 1;
    param_1[0x95b] = 1;
    param_1[0x473] = 0;
    param_1[0x93e] = 0;
    param_1[0x93f] = 0;
    param_1[0x46a] = 1;
    *(undefined1 *)(param_1 + 0x97c) = 1;
    *(undefined1 *)((int)param_1 + 0x25f1) = 1;
    *(undefined1 *)(param_1 + 0x471) = 1;
    param_1[0x982] = param_1[5];
    *(char *)(param_1 + 0x47b) = (char)param_1[0x1a];
    if (((*(byte *)((int)param_1 + 0x1226) & 1) == 0) && (param_1[0x4b0] != 0)) {
      *(undefined1 *)((int)param_1 + 0x11ed) = 1;
      *(short *)((int)param_1 + 0x122a) = *(short *)((int)param_1 + 0x122a) + (short)param_1[0x4b0];
      param_1[0x488] = param_1[0x488] + param_1[0x4b0];
    }
    *(undefined1 *)(param_1 + 0x47a) = 0;
    *(undefined1 *)((int)param_1 + 0x11e9) = 0;
    *(undefined1 *)(param_1 + 0x95c) = 0;
    *(undefined1 *)((int)param_1 + 0x2571) = 0;
  }
  if ((param_1[0xb] == 1) && ((param_1[0x46b] & 2) != 0)) {
    param_1[0x93f] = (uint)(param_1[0x473] == 3);
  }
  if ((param_1[0xb] == 4) && ((int)param_1[0xb9d] < (int)param_1[0xb9c])) {
    param_1[0x93e] = 1;
  }
  uVar2 = param_1[0x982];
  uVar5 = uVar2 - 1;
  param_1[0x982] = uVar5;
  if (uVar2 == param_1[5]) {
    *(undefined1 *)(param_1 + 0x983) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x983) = 0;
  }
  if (uVar5 == 0) {
    param_1[0x982] = param_1[5];
  }
  if (((param_1[0x473] != 0) &&
      (*(double *)(param_1 + 0x51a) = *(double *)(param_1 + 0x51a) + *(double *)(param_1 + 0x942),
      param_1[0x12] != 0)) && (_DAT_10015180 < *(double *)(param_1 + 0x468))) {
    FUN_1000d391(*(double *)(param_1 + 0x468) / *(double *)(param_1 + 0x942));
    lVar6 = __ftol();
    iVar4 = (int)lVar6 + -1;
    if (iVar4 < 1) {
      param_1[0x468] = 0;
      param_1[0x469] = 0;
    }
    else {
      *(double *)(param_1 + 0x468) = (double)iVar4 * *(double *)(param_1 + 0x942);
    }
  }
  param_1[0x966] = param_1[0x492];
  param_1[0x967] = param_1[0x493];
  if (*(char *)((int)param_1 + 0x2519) == '\0') {
    FUN_1000d1ca(*(double *)(param_1 + 0x94a));
    lVar6 = __ftol();
    uVar5 = param_1[0x966];
    param_1[0x966] = uVar5 + (uint)lVar6;
    param_1[0x967] =
         param_1[0x967] + (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar5,(uint)lVar6);
  }
  param_1[0x968] = param_1[0x496];
  param_1[0x969] = param_1[0x497];
  if (*(char *)((int)param_1 + 0x251a) == '\0') {
    FUN_1000d1ca(*(double *)(param_1 + 0x94c));
    lVar6 = __ftol();
    uVar5 = param_1[0x968];
    param_1[0x968] = uVar5 + (uint)lVar6;
    param_1[0x969] =
         param_1[0x969] + (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar5,(uint)lVar6);
  }
  param_1[0x96a] = param_1[0x48c];
  param_1[0x96b] = param_1[0x48d];
  if ((param_1[0x12] != 0) && (_DAT_10015180 < *(double *)(param_1 + 0x468))) {
    dVar1 = *(double *)(param_1 + 0x468);
    uVar5 = param_1[0x46b];
    *(double *)(param_1 + 0x51c) = dVar1;
    if (uVar5 == 3) {
      if ((param_1[0x490] != 0) &&
         ((double)*(longlong *)(param_1 + 0x966) - _DAT_10015178 <
          dVar1 + *(double *)(param_1 + 0x51a))) {
        dVar1 = *(double *)(param_1 + 0x51c);
        do {
          dVar1 = dVar1 - *(double *)(param_1 + 0x942);
        } while ((double)*(longlong *)(param_1 + 0x966) - _DAT_10015178 <
                 dVar1 + *(double *)(param_1 + 0x51a));
        *(double *)(param_1 + 0x51c) = dVar1;
        *(double *)(param_1 + 0x51c) = *(double *)(param_1 + 0x51c) + *(double *)(param_1 + 0x942);
      }
    }
    else if (uVar5 == 5) {
      if ((param_1[0x494] != 0) &&
         ((double)*(longlong *)(param_1 + 0x968) - _DAT_10015178 <
          dVar1 + *(double *)(param_1 + 0x51a))) {
        dVar1 = *(double *)(param_1 + 0x51c);
        do {
          dVar1 = dVar1 - *(double *)(param_1 + 0x942);
        } while ((double)*(longlong *)(param_1 + 0x968) - _DAT_10015178 <
                 dVar1 + *(double *)(param_1 + 0x51a));
        *(double *)(param_1 + 0x51c) = dVar1;
        *(double *)(param_1 + 0x51c) = *(double *)(param_1 + 0x51c) + *(double *)(param_1 + 0x942);
      }
    }
    else if (uVar5 == 7) {
      if ((param_1[0x490] != 0) &&
         ((double)*(longlong *)(param_1 + 0x966) - _DAT_10015178 <
          dVar1 + *(double *)(param_1 + 0x51a))) {
        dVar1 = *(double *)(param_1 + 0x51c);
        do {
          dVar1 = dVar1 - *(double *)(param_1 + 0x942);
        } while ((double)*(longlong *)(param_1 + 0x966) - _DAT_10015178 <
                 dVar1 + *(double *)(param_1 + 0x51a));
        *(double *)(param_1 + 0x51c) = dVar1;
        *(double *)(param_1 + 0x51c) = *(double *)(param_1 + 0x51c) + *(double *)(param_1 + 0x942);
      }
      if ((param_1[0x494] != 0) &&
         ((double)*(longlong *)(param_1 + 0x968) - _DAT_10015178 <
          *(double *)(param_1 + 0x51a) + *(double *)(param_1 + 0x51c))) {
        dVar1 = *(double *)(param_1 + 0x51c);
        do {
          dVar1 = dVar1 - *(double *)(param_1 + 0x942);
        } while ((double)*(longlong *)(param_1 + 0x968) - _DAT_10015178 <
                 dVar1 + *(double *)(param_1 + 0x51a));
        *(double *)(param_1 + 0x51c) = dVar1;
        *(double *)(param_1 + 0x51c) = *(double *)(param_1 + 0x51c) + *(double *)(param_1 + 0x942);
      }
    }
    if (*(double *)(param_1 + 0x51c) <= _DAT_10015180) {
      param_1[0x468] = 0;
      param_1[0x469] = 0;
    }
    else {
      *(double *)(param_1 + 0x51a) = *(double *)(param_1 + 0x51c) + *(double *)(param_1 + 0x51a);
      *(double *)(param_1 + 0x468) = *(double *)(param_1 + 0x468) - *(double *)(param_1 + 0x51c);
    }
  }
  param_1[0x51e] = param_1[0x51a];
  *(double *)(param_1 + 0x522) = *(double *)(param_1 + 0x51a);
  param_1[0x520] = param_1[0x51a];
  param_1[0x521] = param_1[0x51b];
  param_1[0x51f] = param_1[0x51b];
  param_1[0x947] = 0;
  param_1[0x948] = 0;
  param_1[0x949] = 0;
  param_1[0x934] = param_1[0x938];
  param_1[0x935] = param_1[0x93a];
  param_1[0x936] = param_1[0x93c];
  if ((char)param_1[0x471] != '\0') {
    param_1[0x934] = param_1[0x938] - ((1 < (int)param_1[0xb]) + 2);
  }
  if (((char)param_1[0x97c] != '\0') && (param_1[0xbad] == 0)) {
    param_1[0x935] = param_1[0x93a] - ((1 < (int)param_1[0xb]) + 2);
  }
  if ((*(char *)((int)param_1 + 0x25f1) != '\0') && (param_1[0xbae] == 0)) {
    param_1[0x936] = param_1[0x93c] - ((1 < (int)param_1[0xb]) + 2);
  }
  param_1[0x93d] = 0;
  if ((((char)param_1[0x47a] == '\0') && (*(char *)((int)param_1 + 0x11e9) == '\0')) &&
     (*(char *)((int)param_1 + 0x11ea) == '\0')) {
    FUN_1000d1ca(*(double *)(param_1 + 0x51a));
    lVar6 = __ftol();
    *(longlong *)(param_1 + 0x964) = lVar6;
    if ((param_1[0x46b] & 2) != 0) {
      FUN_100012a0((int)param_1,(int)(param_1 + 0x530),param_1[0x964],
                   (int)((ulonglong)lVar6 >> 0x20));
    }
    if ((param_1[0x46b] & 4) != 0) {
      FUN_100012a0((int)param_1,(int)(param_1 + 0x532),param_1[0x964],param_1[0x965]);
    }
    if ((param_1[0x46b] & 1) != 0) {
      FUN_100012a0((int)param_1,(int)(param_1 + 0x52e),param_1[0x964],param_1[0x965]);
    }
    iVar4 = FUN_100012f0(param_1,(int *)(param_1 + 0x52e));
    if ((((int)param_1[0x934] <= iVar4) && (param_1[0x488] != 0)) &&
       ((double)*(longlong *)(param_1 + 0x96a) - *(double *)(param_1 + 0x522) < _DAT_10015170)) {
      param_1[0x949] = 1;
    }
    if (((((param_1[0x46b] & 2) != 0) && (param_1[0x490] != 0)) &&
        (iVar4 = FUN_100012f0(param_1,(int *)(param_1 + 0x530)), (int)param_1[0x935] <= iVar4)) &&
       (((double)*(longlong *)(param_1 + 0x966) - *(double *)(param_1 + 0x51e) < _DAT_10015178 ||
        ((_DAT_10015178 < *(double *)(param_1 + 0x51e) && (param_1[0x95a] != 0)))))) {
      param_1[0x95a] = 0;
      param_1[0x947] = 1;
    }
    if (((((param_1[0x46b] & 4) != 0) && (param_1[0x494] != 0)) &&
        (iVar4 = FUN_100012f0(param_1,(int *)(param_1 + 0x532)), (int)param_1[0x936] <= iVar4)) &&
       (((double)*(longlong *)(param_1 + 0x968) - *(double *)(param_1 + 0x520) < _DAT_10015178 ||
        ((_DAT_10015178 < *(double *)(param_1 + 0x520) && (param_1[0x95b] != 0)))))) {
      param_1[0x95b] = 0;
LAB_1000874f:
      param_1[0x948] = 1;
    }
  }
  else {
    FUN_1000d1ca(*(double *)(param_1 + 0x51a) + _DAT_10015178);
    lVar6 = __ftol();
    *(longlong *)(param_1 + 0x964) = lVar6;
    if ((param_1[0x46b] & 2) != 0) {
      FUN_100012a0((int)param_1,(int)(param_1 + 0x530),param_1[0x964],
                   (int)((ulonglong)lVar6 >> 0x20));
    }
    if ((param_1[0x46b] & 4) != 0) {
      FUN_100012a0((int)param_1,(int)(param_1 + 0x532),param_1[0x964],param_1[0x965]);
    }
    if ((param_1[0x46b] & 1) != 0) {
      FUN_100012a0((int)param_1,(int)(param_1 + 0x52e),param_1[0x964],param_1[0x965]);
    }
    FUN_1000d1ca(*(double *)(param_1 + 0x51a));
    lVar6 = __ftol();
    *(longlong *)(param_1 + 0x964) = lVar6;
    if ((((param_1[0x46b] & 2) != 0) && (param_1[0x490] != 0)) &&
       (((char)param_1[0x95c] == '\0' &&
        (iVar4 = FUN_100012f0(param_1,(int *)(param_1 + 0x530)), (int)param_1[0x935] <= iVar4)))) {
      param_1[0x947] = 1;
    }
    if ((((param_1[0x46b] & 4) != 0) && (param_1[0x494] != 0)) &&
       ((*(char *)((int)param_1 + 0x2571) == '\0' &&
        (iVar4 = FUN_100012f0(param_1,(int *)(param_1 + 0x532)), (int)param_1[0x936] <= iVar4))))
    goto LAB_1000874f;
  }
  if (param_1[0x46a] == 0) {
    if ((((param_1[0x949] == 0) || (param_1[0x947] != 0)) ||
        ((param_1[0x948] != 0 || (param_1[0x93f] != 0)))) && (param_1[0xb9f] == 0)) {
      if ((param_1[0x947] == 0) && (param_1[0x93f] == 0)) {
        if (param_1[0x948] == 0) {
          if (param_1[0x12] != 0) goto LAB_10008a9d;
          iVar4 = FUN_1000a3b0((uint)param_1,param_1[0x964],param_1[0x965],param_1[0x938]);
          if (iVar4 != 0) {
            return 0x10;
          }
        }
        else {
LAB_100089cc:
          iVar4 = FUN_10009d80((uint)param_1,param_1[0x964],param_1[0x965],param_1[0x960],
                               param_1[0x961],param_1[0x484],param_1[0x481],(int)(param_1 + 0x532),
                               param_1 + 0x494,(char *)((int)param_1 + 0x251a),
                               (int *)(param_1 + 0x97e),(int *)(param_1 + 0x981),
                               *(byte *)((int)param_1 + 0x25f1),*(byte *)((int)param_1 + 0x11b9),
                               *(byte *)((int)param_1 + 0x25fd),
                               (byte *)CONCAT31((int3)((uint)((int)param_1 + 0x2571) >> 8),
                                                *(undefined1 *)((int)param_1 + 0x11bb)),
                               param_1[0x470],param_1[0x936],(char *)((int)param_1 + 0x2571));
          if (iVar4 != 0) {
            return 0x10;
          }
          if ((param_1[0xb] != 1) && (param_1[0xb] != 3)) {
            *(undefined1 *)((int)param_1 + 0x25f1) = 0;
          }
        }
      }
      else {
        if (param_1[0x948] != 0) goto LAB_100089cc;
        iVar4 = FUN_10009d80((uint)param_1,param_1[0x964],param_1[0x965],param_1[0x95e],
                             param_1[0x95f],param_1[0x483],param_1[0x480],(int)(param_1 + 0x530),
                             param_1 + 0x490,(char *)((int)param_1 + 0x2519),
                             (int *)(param_1 + 0x97d),(int *)(param_1 + 0x980),(byte)param_1[0x97c],
                             (byte)param_1[0x46e],(byte)param_1[0x97f],
                             (byte *)CONCAT31((int3)((uint)(param_1 + 0x95c) >> 8),
                                              *(undefined1 *)((int)param_1 + 0x11ba)),param_1[0x46f]
                             ,param_1[0x935],(char *)(param_1 + 0x95c));
        if (iVar4 != 0) {
          return 0x10;
        }
        if ((param_1[0xb] != 1) && (param_1[0xb] != 3)) {
          *(undefined1 *)(param_1 + 0x97c) = 0;
        }
      }
    }
    else if (((param_1[0x93e] == 0) || ((char)param_1[0x946] == '\0')) ||
            ((short)param_1[0x489] != 1)) {
      iVar4 = FUN_10008fc0((uint)param_1,param_1[0x964],param_1[0x965],param_1[0x962],param_1[0x963]
                          );
      if (iVar4 != 0) {
        return 0x10;
      }
      if ((param_1[0xb] != 1) && (param_1[0xb] != 3)) {
        *(undefined1 *)(param_1 + 0x471) = 0;
      }
      param_1[0xb9f] = 0;
    }
    else {
      param_1[0x93e] = 0;
      param_1[0xb9c] = 0;
      if (param_1[0x10] == 0) {
        iVar4 = FUN_1000a3b0((uint)param_1,param_1[0x964],param_1[0x965],param_1[0x934] - 0x15);
      }
      else {
        iVar4 = FUN_1000a660((undefined1 *)param_1,param_1[0x964],param_1[0x965]);
      }
      if (iVar4 != 0) {
        return 0x10;
      }
      param_1[0xb9f] = 1;
      param_1[0x982] = param_1[5];
    }
  }
  else if (param_1[0xb] == 4) {
    iVar4 = FUN_1000a660((undefined1 *)param_1,param_1[0x964],param_1[0x965]);
    if (iVar4 != 0) {
      return 0x10;
    }
    param_1[0x982] = param_1[5];
  }
  else {
    if ((param_1[0xb] == 1) && (param_1[0x473] == 1)) {
      uVar5 = param_1[0x93a];
    }
    else {
      uVar5 = param_1[0x938];
    }
    iVar4 = FUN_1000a3b0((uint)param_1,param_1[0x964],param_1[0x965],uVar5 - 0x15);
    if (iVar4 != 0) {
      return 0x10;
    }
    param_1[0x982] = param_1[5];
  }
  param_1[0x473] = param_1[0x473] + 1;
LAB_10008a9d:
  if (((param_1[0x46b] & 2) == 0) || ((char)param_1[0x95c] != '\0')) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if (((bVar3 & *(byte *)((int)param_1 + 0x11ea)) != 0) &&
     (((param_1[0x46b] & 4) == 0 || (*(char *)((int)param_1 + 0x2571) != '\0')))) {
    param_1[0x488] = 0;
    param_1[0x494] = 0;
    param_1[0x490] = 0;
  }
  return 0;
}


