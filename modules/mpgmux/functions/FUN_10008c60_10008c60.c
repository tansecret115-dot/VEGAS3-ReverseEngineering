/* Module: mpgmux.dll
   Function: FUN_10008c60
   Address: 10008c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10008c60(byte *param_1,int param_2)

{
  double *pdVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  
  pbVar2 = param_1;
  if ((*(int *)(param_1 + 0x4c) != 0) && ((param_2 != 0 || (*(int *)(param_1 + 100) != 0)))) {
    if ((*(int *)(param_1 + 0x2c) == 1) || (2 < *(int *)(param_1 + 0x2c))) {
      pdVar1 = (double *)(param_1 + 0x1468);
      param_1 = param_1 + 400;
      FUN_1000d1ca(*pdVar1);
      lVar7 = __ftol();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 1;
      param_1[3] = 0xba;
      param_1 = param_1 + 4;
      uVar6 = (uint)((ulonglong)lVar7 >> 0x20);
      if (*(int *)(pbVar2 + 0x2c) < 2) {
        FUN_1000c280((int)pbVar2,(uint)lVar7,uVar6,'\x02',(int *)&param_1);
        *param_1 = (byte)(*(int *)(pbVar2 + 0x14b4) >> 0xf) | 0x80;
        param_1[1] = (byte)(*(int *)(pbVar2 + 0x14b4) >> 7);
        param_1 = param_1 + 2;
        *param_1 = pbVar2[0x14b4] << 1 | 1;
      }
      else {
        FUN_1000c280((int)pbVar2,(uint)lVar7,uVar6,'\x01',(int *)&param_1);
        *param_1 = (byte)(*(int *)(pbVar2 + 0x14b4) >> 0xe);
        param_1[1] = (byte)(*(int *)(pbVar2 + 0x14b4) >> 6);
        param_1[2] = pbVar2[0x14b4] << 2 | 3;
        param_1 = param_1 + 3;
        *param_1 = 0xf8;
      }
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 1;
      param_1[4] = 0xbe;
      if (*(int *)(pbVar2 + 0x2c) < 2) {
        iVar4 = -0x16;
      }
      else {
        iVar4 = -0x18;
      }
      iVar4 = *(int *)(pbVar2 + 0x10) + iVar4;
      param_1[5] = (byte)((uint)iVar4 >> 8);
      param_1[6] = (byte)iVar4;
      pbVar3 = param_1 + 7;
      if (*(int *)(pbVar2 + 0x2c) < 2) {
        param_1[7] = 0xf;
        param_1 = param_1 + 8;
        while (iVar4 = iVar4 + -1, iVar4 != 0) {
          *param_1 = 0xff;
          param_1 = param_1 + 1;
        }
      }
      else {
        for (; param_1 = pbVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_1 = 0xff;
          pbVar3 = param_1 + 1;
        }
      }
      uVar6 = *(uint *)(pbVar2 + 0x10);
    }
    else {
      uVar6 = 4;
      param_1 = param_1 + 400;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1 = param_1 + 3;
    *param_1 = 0xb9;
    uVar5 = (**(code **)(*(int *)(pbVar2 + 0x11f8) + 0xc))();
    if (uVar5 != uVar6) {
      FUN_100050f0((int)pbVar2,(byte *)s_Unable_to_write_to_program_file___10017918);
      return 0x10;
    }
    uVar5 = *(uint *)(pbVar2 + 0x80);
    *(uint *)(pbVar2 + 0x80) = uVar5 + uVar6;
    *(uint *)(pbVar2 + 0x84) = *(int *)(pbVar2 + 0x84) + (uint)CARRY4(uVar5,uVar6);
  }
  if (*(int *)(pbVar2 + 0x11c8) == 0) {
    if ((*(int *)(pbVar2 + 0x2600) == 0) && (*(int *)(pbVar2 + 0x2604) == 0)) goto LAB_10008f31;
  }
  else {
    FUN_10005130((int)pbVar2,(byte *)s__u_video_underflows__SCR_>__PTS_o_100178ec);
  }
  if (*(int *)(pbVar2 + 0x2600) != 0) {
    FUN_10005130((int)pbVar2,(byte *)s__u_audio_1_underflows__SCR_>__PT_100178c4);
  }
  if (*(int *)(pbVar2 + 0x2604) != 0) {
    FUN_10005130((int)pbVar2,(byte *)s__u_audio_2_underflows__SCR_>__PT_1001789c);
  }
LAB_10008f31:
  if (((*(int *)(pbVar2 + 0x11c8) != 0) || (*(int *)(pbVar2 + 0x2600) != 0)) ||
     (*(int *)(pbVar2 + 0x2604) != 0)) {
    FUN_10005130((int)pbVar2,&DAT_10017770);
    FUN_10005130((int)pbVar2,(byte *)s_NOTE__The_resulting_file_may_not_10017860);
    if ((*(int *)(pbVar2 + 0x2c) == 1) || (*(int *)(pbVar2 + 0x2c) == 3)) {
      FUN_10005130((int)pbVar2,(byte *)s_Try_reducing_the_video_bitrate_o_100177fc);
      pcVar8 = s_audio_startup_delays__100177e0;
    }
    else {
      pcVar8 = s_Try_increasing_the_mux_rate__1001783c;
    }
    FUN_10005130((int)pbVar2,(byte *)pcVar8);
  }
  FUN_10005130((int)pbVar2,(byte *)s_Finished_multiplexing__s_100177c4);
  return 0;
}


