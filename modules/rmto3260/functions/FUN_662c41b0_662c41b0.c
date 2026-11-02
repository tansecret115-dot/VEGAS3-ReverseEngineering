/* Module: rmto3260.dll
   Function: FUN_662c41b0
   Address: 662c41b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c41b0(int *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  char *_Dest;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ushort uVar11;
  char *pcVar12;
  int local_30 [3];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  short local_6;
  
  local_c = 0;
  uVar4 = FUN_662dfa00((int)param_2);
  local_1c = CONCAT22(extraout_var,uVar4);
  uVar4 = FUN_662dee20((int)param_2);
  local_14 = CONCAT22(extraout_var_00,uVar4);
  _Dest = operator_new(100);
  FUN_662dedc0(param_2,local_30);
  iVar5 = FUN_662ef820(local_30,s_audio_x_pn_multirate_realaudio_6630a024);
  if (iVar5 == -1) {
    iVar5 = FUN_662ef820(local_30,s_video_x_pn_multirate_realvideo_6630a05c);
    if (iVar5 == -1) goto LAB_662c42a5;
    param_1[10] = (int)param_2;
    iVar5 = sprintf(_Dest,s_Stream_dBandwidth_6630a14c,local_14 & 0xffff);
    pcVar6 = operator_new(iVar5 + 1);
    param_1[0x15] = (int)pcVar6;
  }
  else {
    param_1[9] = (int)param_2;
    iVar5 = sprintf(_Dest,s_Stream_dBandwidth_6630a14c,uVar4);
    pcVar6 = operator_new(iVar5 + 1);
    param_1[0x14] = (int)pcVar6;
  }
  if (pcVar6 == (char *)0x0) {
    local_c = -0x7ff8fff2;
  }
  else {
    uVar8 = 0xffffffff;
    pcVar10 = _Dest;
    do {
      pcVar12 = pcVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar10 = pcVar12 + -uVar8;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar6 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
LAB_662c42a5:
  if (_Dest != (char *)0x0) {
    operator_delete(_Dest);
  }
  local_18 = 0;
  if ((ushort)local_1c != 0) {
    do {
      uVar8 = local_18;
      if (local_c != 0) break;
      iVar5 = FUN_662dff70(param_2,local_18 & 0xffff,&local_6,&local_24);
      local_c = iVar5;
      if (-1 < iVar5) {
        iVar2 = param_1[0x11];
        local_20 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) {
          local_10 = 0;
        }
        else {
          local_10 = *(undefined4 *)(iVar2 + 0x10);
        }
        uVar11 = 0;
        bVar3 = false;
        uVar8 = local_18;
        if ((ushort)local_10 != 0) {
          do {
            uVar8 = local_18;
            if ((iVar5 != 0) || (bVar3)) break;
            piVar7 = (int *)FUN_662ed930(&local_20);
            iVar2 = *piVar7;
            if (iVar2 == 0) {
              local_c = -0x7ffbff7f;
              iVar5 = -0x7ffbff7f;
            }
            if ((-1 < iVar5) && (*(short *)(iVar2 + 4) == local_6)) {
              bVar3 = true;
              *(undefined4 *)(iVar2 + 8) = local_24;
              *(undefined2 *)(iVar2 + 6) = (undefined2)local_14;
            }
            uVar11 = uVar11 + 1;
            uVar8 = local_18;
          } while (uVar11 < (ushort)local_10);
        }
      }
      local_18 = uVar8 + 1;
    } while ((ushort)local_18 < (ushort)local_1c);
  }
  if (-1 < local_c) {
    local_c = (**(code **)(*param_1 + 0x54))(param_1,param_2);
  }
  if (-1 < local_c) {
    local_c = (**(code **)(*param_1 + 0x50))(param_1,param_2);
  }
  FUN_662ef0f0(local_30);
  return local_c;
}


