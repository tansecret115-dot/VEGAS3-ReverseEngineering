/* Module: aviplug.dll
   Function: FUN_5f953a70
   Address: 5f953a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f953a70(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  LPSTR lpMultiByteStr;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int local_458;
  int aiStack_454 [6];
  undefined1 *local_43c [4];
  undefined1 *local_42c;
  char local_428 [29];
  undefined4 local_40b;
  undefined4 local_407;
  undefined4 local_403;
  undefined4 local_3ff;
  undefined2 local_3fb;
  undefined1 local_3f9;
  char local_3f8 [41];
  undefined4 local_3cf;
  undefined2 local_3cb;
  undefined1 local_3c9;
  char local_3c8 [29];
  undefined4 local_3ab;
  undefined4 local_3a7;
  undefined4 local_3a3;
  undefined4 local_39f;
  undefined2 local_39b;
  undefined1 local_399;
  undefined4 local_398 [10];
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_351 [6];
  WCHAR aWStack_338 [127];
  undefined2 uStack_23a;
  undefined4 auStack_238 [14];
  wchar_t awStack_200 [256];
  
  if (param_2 == 0) {
    iVar3 = *param_1;
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      uVar1 = *(undefined4 *)(param_1[2] + iVar3 * 4);
      FUN_5f978470(param_1,iVar3,1,0);
      ICRemove(0x63646976,uVar1,0);
    }
  }
  else {
    aiStack_454[1] = 0x6e76645f;
    aiStack_454[2] = 0x6e766477;
    aiStack_454[3] = 0x7076645f;
    aiStack_454[4] = 0x70766477;
    aiStack_454[5] = 0x64737664;
    local_458 = 5;
    FUN_5f978470(param_1,0,-1,0);
    pcVar5 = "Sonic Foundry DV (PAL) Codec";
    pcVar6 = local_428;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    *pcVar6 = *pcVar5;
    local_40b = 0;
    local_407 = 0;
    local_403 = 0;
    local_3ff = 0;
    local_3fb = 0;
    local_43c[0] = &LAB_5f953980;
    local_3f9 = 0;
    local_43c[1] = &LAB_5f9539b0;
    pcVar5 = "Sonic Foundry DV Widescreen (NTSC) Codec";
    pcVar6 = local_3f8;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    local_43c[2] = &LAB_5f9539e0;
    *pcVar6 = *pcVar5;
    local_3cf = 0;
    local_3cb = 0;
    local_3c9 = 0;
    pcVar5 = "Sonic Foundry DV (PAL) Codec";
    pcVar6 = local_3c8;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    *pcVar6 = *pcVar5;
    local_3ab = 0;
    local_3a7 = 0;
    local_3a3 = 0;
    local_39f = 0;
    local_43c[3] = &LAB_5f953a10;
    local_39b = 0;
    local_42c = &LAB_5f953a40;
    local_399 = 0;
    pcVar5 = "Sonic Foundry DV Widescreen (PAL) Codec";
    puVar7 = local_398;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    local_370 = 0;
    local_36c = 0;
    pcVar5 = "Sonic Foundry DV Codec";
    puVar7 = &local_368;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar7 + 2) = pcVar5[2];
    puVar7 = local_351;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = 0;
    if ((param_3 == 0) && (iVar3 = ICOpen(0x63646976,0x64737664,4), iVar3 != 0)) {
      puVar7 = auStack_238;
      for (iVar4 = 0x8e; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      auStack_238[0] = 0x238;
      ICGetInfo(iVar3,auStack_238,0x238);
      ICClose(iVar3);
      lpMultiByteStr = FUN_5f9811c0(DAT_5f9f5978,0x45);
      MultiByteToWideChar(0,1,lpMultiByteStr,-1,aWStack_338,0x80);
      uStack_23a = 0;
      iVar3 = wcscmp(aWStack_338,awStack_200);
      if (iVar3 != 0) {
        local_458 = 4;
      }
    }
    iVar3 = 0;
    if (local_458 != 0) {
      pcVar5 = local_428;
      while( true ) {
        iVar4 = aiStack_454[iVar3 + 1];
        iVar2 = ICInstall(0x63646976,iVar4,local_43c[iVar3],pcVar5,1);
        if (iVar2 == 0) {
          FUN_5f953a70(param_1,0,0);
          return -0x7ffb1fe5;
        }
        aiStack_454[0] = iVar4;
        iVar4 = FUN_5f978180(param_1,-1,aiStack_454,1);
        if (iVar4 < 0) break;
        iVar3 = iVar3 + 1;
        pcVar5 = pcVar5 + 0x30;
        if (local_458 <= iVar3) {
          return iVar4;
        }
      }
      ICRemove(0x63646976,aiStack_454[iVar3 + 1],0);
      FUN_5f953a70(param_1,0,0);
      return iVar4;
    }
  }
  return local_458;
}


