/* Module: vegas30.exe
   Function: FUN_00560cc0
   Address: 00560cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00560cc0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  undefined4 *puVar10;
  CHAR *pCVar11;
  undefined4 unaff_retaddr;
  undefined4 local_a48;
  char *local_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  CHAR local_a30 [260];
  undefined4 local_92c;
  int *local_928;
  int *local_920;
  undefined4 local_91c;
  undefined4 local_918;
  undefined4 local_914;
  undefined4 local_910;
  undefined4 local_90c;
  undefined4 local_908;
  undefined4 local_904;
  EMIXERTYPE local_900;
  undefined4 local_8fc;
  int local_8f8;
  int local_8f4;
  undefined4 local_8f0;
  undefined2 local_8ec;
  undefined4 local_8e8;
  undefined4 local_8e4;
  int local_8e0;
  int local_8dc;
  undefined4 local_8d8;
  undefined2 local_8d4 [18];
  undefined4 local_8b0;
  undefined1 auStack_484 [1064];
  undefined1 auStack_5c [64];
  undefined4 uStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_4;
  
  pCVar11 = local_a30;
  for (iVar8 = 0x28c; iVar8 != 0; iVar8 = iVar8 + -1) {
    pCVar11[0] = '\0';
    pCVar11[1] = '\0';
    pCVar11[2] = '\0';
    pCVar11[3] = '\0';
    pCVar11 = pCVar11 + 4;
  }
  local_a48 = 0;
  iVar8 = *(int *)(param_2 + 0x50);
  if (iVar8 == 0) {
    return -0x7fffbffb;
  }
  iVar9 = *(int *)(iVar8 + 0x18);
  if (iVar9 == 0) {
    return -0x7fffbffb;
  }
  iVar3 = FUN_005f13f0(2);
  if (iVar3 == 0) {
    return -0x7fffbffb;
  }
  iVar9 = iVar9 + 0x170;
  _SfGetPathNameFromFilePath_12(iVar9,&DAT_006474f4,0x104);
  iVar4 = _SfIsDirectoryWritable_4(&DAT_006474f4);
  if (iVar4 == 0) {
    lstrcpynA(&DAT_006474f4,&DAT_006486bc,0x104);
    DAT_006475f7 = 0;
    iVar4 = _SfIsDirectoryWritable_4(&DAT_006474f4);
    if (iVar4 == 0) {
      return -0x7fffbffb;
    }
  }
  iVar4 = *(int *)(iVar8 + 0x20);
  if (*(int *)(iVar8 + 0x20) == 0) {
    iVar4 = iVar9;
  }
  iVar8 = FUN_00560ab0(param_1,iVar4,local_a30);
  if (iVar8 != 0) {
    return -0x7fffbffb;
  }
  local_91c = 1;
  local_8e8 = 1;
  local_92c = 0;
  if ((DAT_0064a694 == 0) || (param_3 != 0)) {
    Mixer_GetDeviceAudioFormat((tWAVEFORMATEX *)&local_8fc,0);
    if ((param_2 != 0) && (iVar8 = *(int *)(param_2 + 0xf8), iVar8 != 1000)) goto LAB_00560e72;
    uVar7 = (local_8f0._2_2_ >> 3) << 1;
    local_8f0 = CONCAT22(local_8f0._2_2_,uVar7);
    local_8fc = 0x20001;
    local_8f4 = (uint)uVar7 * local_8f8;
LAB_00560f01:
    local_8ec = 0;
  }
  else {
    puVar10 = *(undefined4 **)(iVar3 + 0x2c);
    local_8fc = *puVar10;
    local_8f8 = puVar10[1];
    local_8f4 = puVar10[2];
    local_8f0 = puVar10[3];
    local_8ec = *(undefined2 *)(puVar10 + 4);
    if ((param_2 != 0) && (iVar8 = *(int *)(param_2 + 0xf8), iVar8 != 1000)) {
LAB_00560e72:
      sVar2 = FUN_00591b00(iVar8);
      local_8fc = CONCAT22(sVar2,1);
      uVar7 = (local_8f0._2_2_ >> 3) * sVar2;
      local_8f0 = CONCAT22(local_8f0._2_2_,uVar7);
      local_8f4 = (uint)uVar7 * local_8f8;
      goto LAB_00560f01;
    }
  }
  local_900 = Mixer_GetMixerType((ISFMixer *)0x0);
  local_908 = 0;
  local_8e4 = local_8fc;
  local_8d8 = local_8f0;
  local_8e0 = local_8f8;
  local_8dc = local_8f4;
  local_8d4[0] = local_8ec;
  local_8b0 = local_8e8;
  local_904 = 0;
  local_910 = 0;
  local_90c = 0;
  local_918 = 0;
  local_914 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_0052de30(param_1,local_a30,0);
  local_928 = (int *)0x1;
  pcVar5 = (char *)FUN_005bad20(param_1);
  local_a44 = pcVar5;
  if (*pcVar5 != '\0') {
    puVar10 = *(undefined4 **)(pcVar5 + 8);
    bVar1 = *(byte *)(puVar10 + 6);
    while ((bVar1 & 2) != 2) {
      iVar8 = lstrcmpiA(local_a30,(LPCSTR)*puVar10);
      if (iVar8 == 0) break;
      if (iVar8 < 0) {
        puVar10 = (undefined4 *)puVar10[4];
      }
      else {
        puVar10 = (undefined4 *)puVar10[5];
      }
      bVar1 = *(byte *)(puVar10 + 6);
    }
    iVar8 = 1;
    if ((*(byte *)(puVar10 + 6) & 2) != 2) goto LAB_00561011;
  }
  iVar8 = param_4;
LAB_00561011:
  while( true ) {
    if (iVar8 == 0) {
      uStack_a40 = DAT_0060f448;
      uStack_a38 = DAT_0060f450;
      uStack_a34 = DAT_0060f454;
      uStack_a3c = DAT_0060f44c;
      iVar8 = (**(code **)(*DAT_0064b510 + 0x3c))(DAT_0064b510,&local_920,&uStack_a40);
      if (iVar8 < 0) goto LAB_005611dc;
      uVar6 = (**(code **)(*local_920 + 0x10))(local_920);
      iVar8 = (**(code **)(*DAT_0064b510 + 0x74))
                        (DAT_0064b510,uVar6,&local_8e8,1,local_8d4,auStack_484,uStack_1c,auStack_5c,
                         1);
      if ((iVar8 < 0) ||
         (iVar8 = (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,uVar6,0), pcVar5 = local_a44,
         iVar8 < 0)) goto LAB_005611dc;
    }
    else {
      iVar8 = FUN_00531170(param_1,DAT_00647624,local_a30,1);
      if (iVar8 != 0) goto LAB_005611dc;
    }
    if (*pcVar5 == '\0') break;
    puVar10 = *(undefined4 **)(pcVar5 + 8);
    bVar1 = *(byte *)(puVar10 + 6);
    while ((bVar1 & 2) != 2) {
      iVar8 = lstrcmpiA(local_a30,(LPCSTR)*puVar10);
      if (iVar8 == 0) break;
      if (iVar8 < 0) {
        puVar10 = (undefined4 *)puVar10[4];
      }
      else {
        puVar10 = (undefined4 *)puVar10[5];
      }
      bVar1 = *(byte *)(puVar10 + 6);
    }
    if ((*(byte *)(puVar10 + 6) & 2) == 2) break;
    iVar8 = 1;
    SfMsgBox(DAT_00647624,0x10,"%s is part of the project and can\'t be used. Please rename.",
             local_a30);
    if (local_920 != (int *)0x0) {
      (**(code **)(*local_920 + 8))(local_920);
      local_920 = (int *)0x0;
    }
  }
  (**(code **)(*local_920 + 0x60))(local_920,&local_a48);
  iVar8 = FUN_00560750(uStack_4,unaff_retaddr,param_1,local_928,&uStack_a38,
                       *(int *)(unaff_EBP + 0x424),*(int *)(unaff_EBP + 0x424) + 0x1a,param_3);
  (**(code **)(*local_928 + 0x68))(local_928,unaff_EBP);
LAB_005611dc:
  FUN_0052e040(local_a30);
  if (local_920 != (int *)0x0) {
    (**(code **)(*local_920 + 8))(local_920);
  }
  return iVar8;
}


