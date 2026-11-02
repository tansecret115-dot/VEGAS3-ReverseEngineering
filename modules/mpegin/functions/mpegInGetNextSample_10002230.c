/* Module: mpegin.dll
   Function: mpegInGetNextSample
   Address: 10002230
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl mpegInGetNextSample(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
                    /* 0x2230  7  mpegInGetNextSample */
  uVar4 = 0;
  if (param_1 == 0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4e58) == 4) {
    uVar4 = FUN_1000abc0(param_1,(int)param_2,param_3);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x98) == 5) {
    FUN_10007e90(param_1,(byte *)s_AC3_decoding_not_supported_10018298);
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x98) == 3) {
    FUN_10007e90(param_1,(byte *)s_MPEG_Layer_3_decoding_not_suppor_10018274);
    return 0xffffffff;
  }
  if ((int)param_3 < 1) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    FUN_10007e90(param_1,(byte *)s_Invalid_destination_buffer_10018258);
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0x84);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x12e54) + 0x60);
  if (uVar3 <= uVar2) {
    FUN_10007e90(param_1,(byte *)s_Requested_sample___d__is_greater_10018210);
    return 0xffffffff;
  }
  if (uVar3 <= uVar2 + param_3) {
    param_3 = uVar3 - uVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x240) = 0;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x12e54) + 100);
  if (uVar3 != 0) {
    uVar4 = uVar3;
    if ((int)param_3 <= (int)uVar3) {
      uVar4 = param_3;
    }
    uVar4 = *(int *)(param_1 + 0xa4) * uVar4;
    puVar5 = (undefined4 *)
             ((*(int *)(param_1 + 0xcb0) - uVar3) * *(int *)(param_1 + 0xa4) +
             *(int *)(*(int *)(param_1 + 0x12e54) + 0x5c));
    puVar6 = param_2;
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if ((int)uVar4 < (int)(param_3 * *(int *)(param_1 + 0xa4))) {
    do {
      iVar1 = *(int *)(param_1 + 0x12e54);
      if ((*(int *)(iVar1 + 0x240) != 0) || (*(int *)(iVar1 + 0x244) != 0)) break;
      if (*(uint *)(iVar1 + 0x210) < *(uint *)(iVar1 + 0x20c)) {
        iVar7 = *(uint *)(iVar1 + 0x210) - *(int *)(iVar1 + 0x204);
      }
      else {
        iVar7 = *(uint *)(iVar1 + 0x20c) - *(int *)(iVar1 + 0x204);
      }
      if (iVar7 < 1) {
        FUN_10007e90(param_1,(byte *)s_SeekSample____bytes_to_process_<_100181e8);
        return 0xffffffff;
      }
      *(uint *)(iVar1 + 0x354) = uVar4 + (int)param_2;
      *(uint *)(*(int *)(param_1 + 0x12e54) + 0x358) = param_3 * *(int *)(param_1 + 0xa4) - uVar4;
      iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
      (**(code **)(iVar1 + 0x14))(iVar1,0,0x10001,*(int *)(param_1 + 0x12e54) + 0x354,8);
      iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
      uVar3 = (**(code **)(iVar1 + 0xc))
                        (iVar1,*(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x204),iVar7);
      iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
      uVar2 = (**(code **)(iVar1 + 0x14))(iVar1,0,0x10003,0,0);
      uVar4 = uVar4 + *(int *)(*(int *)(param_1 + 0x12e54) + 0x358);
      iVar1 = FUN_10006340((int *)(*(int *)(param_1 + 0x12e54) + 0x200),uVar3);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x240) != 0) {
LAB_10002546:
          FUN_10007e90(param_1,(byte *)s_Could_not_get_a_complete_audio_h_100181c0);
          return 0xffffffff;
        }
        if ((uVar2 & 1) == 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
          (**(code **)(iVar1 + 0xc))(iVar1,0,0);
          iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
          uVar3 = (**(code **)(iVar1 + 0x14))(iVar1,0,0x10003,0,0);
          if ((uVar3 & 1) == 0) goto LAB_10002546;
          uVar4 = uVar4 + *(int *)(*(int *)(param_1 + 0x12e54) + 0x358);
        }
      }
    } while ((int)uVar4 < (int)(*(int *)(param_1 + 0xa4) * param_3));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 100) = 0;
  iVar1 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar1 + 0x240) != 0) {
    return 0xffffffff;
  }
  *(uint *)(param_1 + 0x88) = uVar4;
  *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + (int)uVar4 / *(int *)(param_1 + 0xa4);
  return (int)uVar4 / *(int *)(param_1 + 0xa4);
}


