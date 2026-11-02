/* Module: mpgmux.dll
   Function: FUN_10006bb0
   Address: 10006bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10006bb0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  longlong lVar7;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((param_1[0x46b] & 1) == 0) goto LAB_10006c14;
  uVar5 = param_1[10];
  if (uVar5 == 0) {
    local_24 = param_1[0x4aa] * 0x32;
    if (local_24 != 0) goto LAB_10006c14;
LAB_10006c02:
    uVar5 = param_1[0x4ac];
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 != 2) goto LAB_10006c14;
      goto LAB_10006c02;
    }
    uVar5 = param_1[0x4ab];
  }
  local_24 = uVar5 * 0x32;
LAB_10006c14:
  if ((param_1[0x46b] & 2) != 0) {
    switch(param_1[0x4f9]) {
    case 0:
      *(undefined1 *)(param_1 + 0x46e) = 0xbd;
      *(undefined1 *)(param_1 + 0x97f) = 0x81;
      param_1[0x1d] = 0x3a;
      dVar3 = _DAT_10015168;
      local_20 = param_1[0x4fb] << 7;
      param_1[0x97a] = 0xe800;
      param_1[0x46f] = 0x3a;
      *(undefined1 *)((int)param_1 + 0x11ba) = 1;
      *(double *)(param_1 + 0x94a) =
           (dVar3 / *(double *)(&DAT_10017170 + param_1[0x4fc] * 8)) * _DAT_10015160;
      param_1[0x939] = param_1[0x939] - 4;
      param_1[0x93a] = param_1[0x93a] - 4;
      break;
    case 1:
    case 2:
    case 3:
      *(undefined1 *)(param_1 + 0x46e) = 0xc0;
      local_20 = *(int *)(&DAT_10016f50 + (param_1[0x4fb] + param_1[0x4f9] * -0x10) * 4);
      param_1[0x1d] = 4;
      param_1[0x97a] = 0x1000;
      param_1[0x46f] = 0x20;
      local_20 = local_20 * 0x7d;
      *(double *)(param_1 + 0x94a) =
           ((double)*(uint *)(&DAT_100171bc + param_1[0x4f9] * -4) /
           *(double *)(&DAT_10017150 + param_1[0x4f9] * 8)) * _DAT_10015160;
      break;
    case 4:
      *(undefined1 *)(param_1 + 0x46e) = 0xbd;
      *(undefined1 *)(param_1 + 0x97f) = 0xa1;
      param_1[0x1d] = 0x3a;
      param_1[0x97a] = 0xe800;
      param_1[0x46f] = 0x3a;
      *(undefined1 *)((int)param_1 + 0x11ba) = 1;
      local_20 = param_1[0x4fb] * 0x7d;
      if (param_1[0x4fc] == 0) {
        dVar3 = _DAT_10015158 / _DAT_10017190;
      }
      else {
        dVar3 = _DAT_10015150 / *(double *)(&DAT_10017190 + param_1[0x4fc] * 8);
      }
      *(double *)(param_1 + 0x94a) = dVar3 * _DAT_10015160;
      param_1[0xba8] = 0;
      uVar5 = (param_1[0x501] & 1) << 7;
      param_1[0xba8] = uVar5;
      param_1[0xba8] = (param_1[0x500] & 1) << 6 | uVar5;
      param_1[0xba9] = 0;
      uVar5 = (param_1[0x4ff] & 3) << 6;
      param_1[0xba9] = uVar5;
      uVar5 = (param_1[0x4fc] & 3) << 4 | uVar5;
      param_1[0xba9] = uVar5;
      param_1[0xba9] = param_1[0x4fd] & 7 | uVar5;
      param_1[0xbaa] = param_1[0x4fe];
      param_1[0xba6] = param_1[0x4f7];
      param_1[0x939] = param_1[0x939] - 9;
      param_1[0x93a] = param_1[0x93a] - 0xc;
      param_1[0xbad] = 1;
    }
  }
  if ((param_1[0x46b] & 4) != 0) {
    switch(param_1[0x509]) {
    case 0:
      *(undefined1 *)((int)param_1 + 0x11b9) = 0xbd;
      if ((char)param_1[0x97f] == -0x7f) {
        *(undefined1 *)((int)param_1 + 0x25fd) = 0x82;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x25fd) = 0x81;
      }
      param_1[0x1e] = 0x3a;
      dVar3 = _DAT_10015168;
      param_1[0x97b] = 0xe800;
      param_1[0x470] = 0x3a;
      *(undefined1 *)((int)param_1 + 0x11bb) = 1;
      local_1c = param_1[0x50b] << 7;
      *(double *)(param_1 + 0x94c) =
           (dVar3 / *(double *)(&DAT_10017170 + param_1[0x50c] * 8)) * _DAT_10015160;
      param_1[0x93b] = param_1[0x93b] - 4;
      param_1[0x93c] = param_1[0x93c] - 4;
      break;
    case 1:
    case 2:
    case 3:
      *(undefined1 *)((int)param_1 + 0x11b9) = 0xc1;
      local_1c = *(int *)(&DAT_10016f50 + (param_1[0x50b] + param_1[0x509] * -0x10) * 4);
      param_1[0x1e] = 4;
      param_1[0x97b] = 0x1000;
      param_1[0x470] = 0x20;
      local_1c = local_1c * 0x7d;
      *(double *)(param_1 + 0x94c) =
           ((double)*(uint *)(&DAT_100171bc + param_1[0x509] * -4) /
           *(double *)(&DAT_10017150 + param_1[0x509] * 8)) * _DAT_10015160;
      break;
    case 4:
      *(undefined1 *)((int)param_1 + 0x11b9) = 0xbd;
      if ((char)param_1[0x97f] == -0x5f) {
        *(undefined1 *)((int)param_1 + 0x25fd) = 0xa2;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x25fd) = 0xa1;
      }
      param_1[0x1e] = 0x3a;
      param_1[0x97b] = 0xe800;
      param_1[0x470] = 0x3a;
      *(undefined1 *)((int)param_1 + 0x11bb) = 1;
      local_1c = param_1[0x50b] * 0x7d;
      if (param_1[0x50c] == 0) {
        dVar3 = _DAT_10015158 / _DAT_10017190;
      }
      else {
        dVar3 = _DAT_10015150 / *(double *)(&DAT_10017190 + param_1[0x50c] * 8);
      }
      *(double *)(param_1 + 0x94c) = dVar3 * _DAT_10015160;
      param_1[0xba8] = 0;
      uVar5 = (param_1[0x511] & 1) << 7;
      param_1[0xba8] = uVar5;
      param_1[0xba8] = (param_1[0x510] & 1) << 6 | uVar5;
      param_1[0xba9] = 0;
      uVar5 = (param_1[0x50f] & 3) << 6;
      param_1[0xba9] = uVar5;
      uVar5 = (param_1[0x50c] & 3) << 4 | uVar5;
      param_1[0xba9] = uVar5;
      param_1[0xba9] = param_1[0x50d] & 7 | uVar5;
      param_1[0xbaa] = param_1[0x50e];
      param_1[0xba6] = param_1[0x507];
      param_1[0x93b] = param_1[0x93b] - 9;
      param_1[0x93c] = param_1[0x93c] - 0xc;
      param_1[0xbae] = 1;
    }
  }
  param_1[0x46d] = param_1[0x1f] << 10;
  FUN_10006320(param_1 + 0x52e,param_1[0x1f] << 10);
  FUN_10006320(param_1 + 0x530,param_1[0x97a]);
  FUN_10006320(param_1 + 0x532,param_1[0x97b]);
  uVar5 = local_1c + local_20 + local_24;
  FUN_1000d1ca((double)uVar5 * ((double)param_1[4] / (double)(param_1[5] * param_1[0x937])));
  lVar7 = __ftol();
  param_1[0x52c] = (uint)lVar7;
  if (uVar5 < 100000) {
    FUN_1000d1ca((double)(int)(uint)lVar7 * _DAT_10015148);
    lVar7 = __ftol();
    param_1[0x52c] = (uint)lVar7;
  }
  FUN_1000d1ca((double)(int)param_1[0x52c] * _DAT_10015140);
  lVar7 = __ftol();
  param_1[0x52d] = (uint)lVar7;
  if (param_1[0xf] != 0) {
    if ((int)param_1[0xf] < (int)(uint)lVar7) {
      FUN_10005130((int)param_1,(byte *)s_NOTE__Mux_rate_may_be_too_low_fo_10017774);
    }
    param_1[0x52d] = param_1[0xf];
  }
  param_1[0x52c] = param_1[0x52d] * 0x32;
  if ((param_1[0xb] == 1) && (param_1[0x52d] == 0xdc8)) {
    param_1[0x940] = 0;
    param_1[0x941] = 0x4052c000;
  }
  else {
    fVar6 = FUN_1000d391((double)(int)(param_1[0x52d] * 0x32) / (double)param_1[4]);
    *(double *)(param_1 + 0x940) = (double)fVar6;
  }
  dVar3 = _DAT_10015120 / *(double *)(param_1 + 0x940);
  *(double *)(param_1 + 0x942) = dVar3;
  *(double *)(param_1 + 0x944) = dVar3 + dVar3;
  if ((param_1[0x46b] & 1) != 0) {
    if (param_1[0x15] == 0) {
      param_1[0x474] = 0;
      param_1[0x475] = 0;
    }
    else {
      FUN_1000d1ca((double)param_1[0x15] * _DAT_10015138 - (double)(int)param_1[0x52c]);
      lVar7 = __ftol();
      *(longlong *)(param_1 + 0x474) = lVar7;
    }
    if (param_1[0x16] == 0) {
      param_1[0x476] = 0;
      param_1[0x477] = 0;
    }
    else {
      FUN_1000d1ca((double)param_1[0x16] * _DAT_10015120);
      lVar7 = __ftol();
      iVar4 = (int)((ulonglong)lVar7 >> 0x20);
      *(longlong *)(param_1 + 0x476) = lVar7;
      if (((int)param_1[0x48f] <= iVar4) &&
         (((int)param_1[0x48f] < iVar4 || (param_1[0x48e] < param_1[0x476])))) {
        *(undefined1 *)((int)param_1 + 0x11eb) = 0;
      }
    }
    if (param_1[0x17] == 0) {
      param_1[0x478] = 0;
      param_1[0x479] = 0;
    }
    else {
      FUN_1000d1ca((double)param_1[0x17] * _DAT_10015120);
      lVar7 = __ftol();
      *(longlong *)(param_1 + 0x478) = lVar7;
    }
  }
  uVar5 = param_1[4];
  fVar6 = FUN_1000d1ca((double)param_1[0x488] / (double)(int)param_1[0x937] +
                       (double)param_1[0x490] / (double)(int)param_1[0x939] +
                       (double)param_1[0x494] / (double)(int)param_1[0x93b]);
  fVar6 = ((fVar6 * (float10)uVar5) / (float10)(int)param_1[0x52c]) * (float10)_DAT_10015120 +
          (float10)*(double *)(param_1 + 0x942);
  *(double *)(param_1 + 0x52a) = (double)fVar6;
  *(double *)(param_1 + 0x528) = (double)fVar6;
  *(double *)(param_1 + 0x526) = (double)fVar6;
  if (param_1[1] != 0) {
    *(double *)(param_1 + 0x52a) = (double)param_1[1] * _DAT_10015160;
  }
  if (param_1[2] != 0) {
    *(double *)(param_1 + 0x526) = (double)param_1[2] * _DAT_10015160;
  }
  if (param_1[3] != 0) {
    *(double *)(param_1 + 0x528) = (double)param_1[3] * _DAT_10015160;
  }
  *(double *)(param_1 + 0x524) = (double)*param_1 * _DAT_10015160;
  FUN_1000d1ca((double)*param_1 * (double)uVar5 * *(double *)(param_1 + 0x940) * _DAT_10015130);
  lVar7 = __ftol();
  *(longlong *)(param_1 + 0x20) = lVar7;
  dVar3 = *(double *)(param_1 + 0x524) + *(double *)(param_1 + 0x526) +
          (double)*(longlong *)(param_1 + 0x518);
  param_1[0x51a] = param_1[0x524];
  param_1[0x468] = 0;
  param_1[0x51b] = param_1[0x525];
  param_1[0x469] = 0;
  *(double *)(param_1 + 0x526) = dVar3;
  *(double *)(param_1 + 0x528) =
       (double)*(longlong *)(param_1 + 0x518) + *(double *)(param_1 + 0x524) +
       *(double *)(param_1 + 0x528);
  *(double *)(param_1 + 0x52a) = *(double *)(param_1 + 0x524) + *(double *)(param_1 + 0x52a);
  FUN_1000d1ca(dVar3);
  lVar7 = __ftol();
  *(longlong *)(param_1 + 0x95e) = lVar7;
  FUN_1000d1ca(*(double *)(param_1 + 0x528));
  lVar7 = __ftol();
  *(longlong *)(param_1 + 0x960) = lVar7;
  FUN_1000d1ca((double)CONCAT44(param_1[0x52b],param_1[0x52a]));
  lVar7 = __ftol();
  *(longlong *)(param_1 + 0x962) = lVar7;
  if (((param_1[0x474] != 0 || param_1[0x475] != 0) || (param_1[0x476] != 0 || param_1[0x477] != 0))
     || (param_1[0x478] != 0 || param_1[0x479] != 0)) {
    param_1[0x956] = param_1[0x526];
    param_1[0x957] = param_1[0x527];
    param_1[0x958] = param_1[0x528];
    param_1[0x959] = param_1[0x529];
    param_1[0x954] = param_1[0x52a];
    param_1[0x955] = param_1[0x52b];
    param_1[0x94e] = param_1[0x492];
    param_1[0x94f] = param_1[0x493];
    param_1[0x950] = param_1[0x496];
    param_1[0x952] = param_1[0x48c];
    param_1[0x951] = param_1[0x497];
    param_1[0x953] = param_1[0x48d];
  }
  uVar5 = param_1[0x962];
  uVar1 = param_1[0x48c];
  param_1[0x48c] = uVar1 + uVar5;
  param_1[0x48d] = param_1[0x48d] + param_1[0x963] + (uint)CARRY4(uVar1,uVar5);
  uVar1 = param_1[0x48e];
  uVar2 = param_1[0x492];
  param_1[0x48e] = uVar1 + uVar5;
  param_1[0x48f] = param_1[0x48f] + param_1[0x963] + (uint)CARRY4(uVar1,uVar5);
  param_1[0x492] = uVar2 + param_1[0x95e];
  uVar5 = param_1[0x496];
  param_1[0x493] = param_1[0x493] + param_1[0x95f] + (uint)CARRY4(uVar2,param_1[0x95e]);
  param_1[0x496] = uVar5 + param_1[0x960];
  param_1[0x497] = param_1[0x497] + param_1[0x961] + (uint)CARRY4(uVar5,param_1[0x960]);
  param_1[0xb72] = param_1[0x48e];
  param_1[0xb73] = param_1[0x48f];
  FUN_10005130((int)param_1,&DAT_10017770);
  FUN_10005130((int)param_1,(byte *)s_Multiplexing_information_10017754);
  if ((param_1[0x46b] & 1) != 0) {
    FUN_10005130((int)param_1,(byte *)s_Video_stream_data_rate____d_byte_1001771c);
  }
  if ((param_1[0x46b] & 2) != 0) {
    FUN_10005130((int)param_1,(byte *)s_Audio_stream_1_data_rate____d_by_100176e0);
  }
  if ((param_1[0x46b] & 4) != 0) {
    FUN_10005130((int)param_1,(byte *)s_Audio_stream_2_data_rate____d_by_100176a4);
  }
  if (param_1[0xf] == 0) {
    FUN_10005130((int)param_1,(byte *)s_Overhead_data_rate____d_bytes_se_10017670);
  }
  FUN_10005130((int)param_1,(byte *)s_Total_data_rate____d_bytes_sec___1001763c);
  FUN_10005130((int)param_1,&DAT_10017770);
  FUN_10005130((int)param_1,(byte *)s_Multiplexing_file__s_10017624);
  return 0;
}


