/* Module: rmto3260.dll
   Function: FUN_662c7240
   Address: 662c7240
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_662c7240(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this;
  uint uVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  int local_8;
  
  iVar3 = *param_1;
  iVar1 = *param_2;
  local_8 = 0;
  FUN_662d0dc0(param_2,iVar3,(char *)&local_8,s_video_x_pn_realvideo_6630a07c);
  if (local_8 == 0) {
    FUN_662d0dc0(this,iVar3,(char *)&local_8,s_video_x_pn_multirate_realvideo_6630a05c);
  }
  bVar9 = false;
  if (*(byte *)(iVar3 + 0x2d) == *(byte *)(iVar1 + 0x2d)) {
    uVar4 = (uint)*(byte *)(iVar3 + 0x2d);
    bVar8 = true;
    pcVar6 = *(char **)(iVar3 + 0x2e);
    pcVar7 = *(char **)(iVar1 + 0x2e);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    bVar9 = false;
    if (bVar8) {
      bVar8 = true;
      if (local_8 != 0) {
        bVar8 = *(int *)(iVar3 + 0xc) == *(int *)(iVar1 + 0xc);
      }
      bVar9 = false;
      if (bVar8) {
        bVar9 = *(int *)((int)param_1 + 0x16) == *(int *)((int)param_2 + 0x16);
      }
    }
  }
  bVar8 = false;
  if ((((bVar9) && (bVar8 = false, *(int *)((int)param_1 + 0x1a) == *(int *)((int)param_2 + 0x1a)))
      && (bVar8 = false, *(int *)((int)param_1 + 0x1e) == *(int *)((int)param_2 + 0x1e))) &&
     (bVar8 = *(int *)((int)param_1 + 0x22) == *(int *)((int)param_2 + 0x22), bVar8)) {
    FUN_662d0dc0(param_2,iVar3,(char *)&param_1,s_audio_x_pn_realaudio_6630a044);
    pvVar5 = extraout_ECX;
    if (param_1 != (int *)0x0) {
      iVar2 = FUN_662c7170(*(byte **)(iVar3 + 0x36),*(uint *)(iVar3 + 0x32),*(byte **)(iVar1 + 0x36)
                           ,*(uint *)(iVar1 + 0x32));
      bVar8 = iVar2 == 0;
      pvVar5 = extraout_ECX_00;
      if (param_1 != (int *)0x0) {
        return bVar8;
      }
    }
    FUN_662d0dc0(pvVar5,iVar3,(char *)&param_1,s_audio_x_pn_multirate_realaudio_6630a024);
    if (param_1 != (int *)0x0) {
      iVar2 = FUN_662c7170(*(byte **)(iVar3 + 0x36),*(uint *)(iVar3 + 0x32),*(byte **)(iVar1 + 0x36)
                           ,*(uint *)(iVar1 + 0x32));
      bVar8 = iVar2 == 0;
      if (param_1 != (int *)0x0) {
        return bVar8;
      }
    }
    FUN_662d0dc0(&param_1,iVar3,(char *)&param_1,s_video_x_pn_realvideo_6630a07c);
    pvVar5 = extraout_ECX_01;
    if (param_1 != (int *)0x0) {
      iVar2 = FUN_662c6cd0(*(char **)(iVar3 + 0x36),*(uint *)(iVar3 + 0x32),*(char **)(iVar1 + 0x36)
                           ,*(uint *)(iVar1 + 0x32));
      bVar8 = iVar2 == 0;
      pvVar5 = extraout_ECX_02;
      if (param_1 != (int *)0x0) {
        return bVar8;
      }
    }
    FUN_662d0dc0(pvVar5,iVar3,(char *)&param_1,s_video_x_pn_multirate_realvideo_6630a05c);
    if (param_1 != (int *)0x0) {
      iVar3 = FUN_662c6cd0(*(char **)(iVar3 + 0x36),*(uint *)(iVar3 + 0x32),*(char **)(iVar1 + 0x36)
                           ,*(uint *)(iVar1 + 0x32));
      bVar8 = iVar3 == 0;
    }
  }
  return bVar8;
}


