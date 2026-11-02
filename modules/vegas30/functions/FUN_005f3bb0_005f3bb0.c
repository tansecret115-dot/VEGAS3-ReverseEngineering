/* Module: vegas30.exe
   Function: FUN_005f3bb0
   Address: 005f3bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005f3f88) */
/* WARNING: Removing unreachable block (ram,0x005f4007) */
/* WARNING: Removing unreachable block (ram,0x005f400d) */
/* WARNING: Removing unreachable block (ram,0x005f4015) */
/* WARNING: Removing unreachable block (ram,0x005f401b) */
/* WARNING: Removing unreachable block (ram,0x005f4029) */
/* WARNING: Removing unreachable block (ram,0x005f4041) */
/* WARNING: Removing unreachable block (ram,0x005f404d) */
/* WARNING: Removing unreachable block (ram,0x005f4196) */

int FUN_005f3bb0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                undefined4 *param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  undefined4 unaff_ESI;
  char *pcVar7;
  int **ppiVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  int iStack_a0;
  int iStack_9c;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 local_80;
  int *apiStack_78 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  char *pcStack_5c;
  int iStack_58;
  char *pcStack_54;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [2];
  undefined1 auStack_38 [8];
  uint uStack_30;
  
  iStack_9c = 0x5f3bce;
  WaitForSingleObject((HANDLE)param_1[0x21],0xffffffff);
  FUN_005f41e0();
  iVar4 = *(int *)param_1[0x13];
  param_1[0x133] = param_1[0x20];
  puVar13 = &local_80;
  param_1[0x134] = 0;
  iStack_a0 = param_1[0x131];
  uVar12 = 0;
  iStack_9c = 0;
  local_80 = (double)((ulonglong)local_80._4_4_ << 0x20);
  apiStack_78[1] = (int *)0x0;
  iVar3 = (**(code **)(*(int *)param_1[0x26] + 0x14))((int *)param_1[0x26],param_1[0x133]);
  if (iVar3 != 0) {
    puVar13 = (undefined8 *)0x1;
  }
  if ((iVar4 < 1) || (iVar3 < 0)) {
    *param_8 = param_2;
    param_8[1] = param_3;
    *param_4 = 0;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
    return 1;
  }
  iStack_9c = 0;
  iVar4 = param_1[0x1e];
  puVar1 = (undefined4 *)**(int **)(param_1[0x13] + 8);
  uVar2 = param_1[0x1d];
  if ((iVar4 < 0) || ((iVar4 < 1 && (uVar2 < 2)))) {
    local_80 = 0.0;
  }
  else {
    local_80 = (double)CONCAT44(iVar4 - (uint)(uVar2 == 0),uVar2 - 1);
    local_80 = (double)CONCAT44(param_3,param_2) / (double)(longlong)local_80;
  }
  uVar11 = ftol();
  iVar4 = FUN_0057c190(0,param_1 + 0x14,4);
  iVar3 = FUN_0057c190(iVar4,param_1 + 0x25,4);
  iVar4 = iVar4 + iVar3;
  if ((*(byte *)(puVar1 + 0x1e) & 0x10) != 0) {
    iVar3 = FUN_0057c190(iVar4,&param_2,8);
    iVar4 = iVar4 + iVar3;
  }
  if (((int *)puVar1[0x18] == (int *)0x0) || (*(int *)puVar1[0x18] < 2)) {
    iVar3 = FUN_0057c190(iVar4,puVar1 + 0x1f,4);
    iVar5 = FUN_0057c190(iVar4 + iVar3,puVar1,0x10);
    iVar5 = iVar4 + iVar3 + iVar5;
    if ((iVar5 != param_1[0x20]) || ((param_1[0x20] == 0 || (puVar13 != (undefined8 *)0x0)))) {
      param_1[0x20] = iVar5;
      goto LAB_005f3f67;
    }
  }
  else {
    ppiVar8 = apiStack_78;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppiVar8 = (int *)0x0;
      ppiVar8 = ppiVar8 + 1;
    }
    apiStack_78[0] = (int *)puVar1[4];
    apiStack_78[1] = (int *)puVar1[5];
    apiStack_78[2] = (int *)*puVar1;
    apiStack_78[3] = (int *)puVar1[1];
    uStack_68 = puVar1[2];
    uStack_64 = puVar1[3];
    auStack_40[0] = (uint)(puVar1[0x1d] == 1);
    if (apiStack_78[0] != (int *)0x0) {
      (**(code **)(*apiStack_78[0] + 4))(apiStack_78[0]);
    }
    if (apiStack_78[1] != (int *)0x0) {
      (**(code **)(*apiStack_78[1] + 4))(apiStack_78[1]);
      (**(code **)(*param_1 + 0x1c))(param_1,&iStack_a0);
      _SfVideoPlugin_GetAutomationParamsAt_56
                (&pcStack_5c,&iStack_60,&pcStack_54,&iStack_58,auStack_50,puVar1,uVar11,0,0,
                 iStack_9c,uVar12,param_1[0x1b],param_1[0x1c]);
    }
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_30 = (uint)puVar1[0x1e] >> 1 & 2 |
                CONCAT31((int3)((uStack_30 & 0xfffffffe) >> 8),
                         (byte)((uint)puVar1[0x1e] >> 1) & 1 | (byte)(uStack_30 & 0xfffffffe)) &
                0xfffffffd;
    iVar3 = FUN_0057c190(iVar4,apiStack_78 + 2,0x10);
    iVar5 = FUN_0057c190(iVar4 + iVar3,&iStack_60,4);
    iVar5 = iVar4 + iVar3 + iVar5;
    iVar4 = FUN_0057c190(iVar5,pcStack_5c,iStack_60);
    iVar5 = iVar5 + iVar4;
    iVar4 = FUN_0057c190(iVar5,&iStack_58,4);
    iVar5 = iVar5 + iVar4;
    iVar4 = FUN_0057c190(iVar5,pcStack_54,iStack_58);
    iVar5 = iVar5 + iVar4;
    iStack_9c = iVar5;
    if (iStack_60 == iStack_58) {
      if (iStack_60 != 0) {
        bVar10 = true;
        pcVar7 = pcStack_5c;
        pcVar9 = pcStack_54;
        do {
          if (iStack_60 == 0) break;
          iStack_60 = iStack_60 + -1;
          bVar10 = *pcVar7 == *pcVar9;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (!bVar10) {
          iVar4 = FUN_0057c190(iVar5,auStack_50,8);
          iVar5 = iVar5 + iVar4;
          iStack_9c = iVar5;
        }
      }
    }
    else if (iStack_58 != 0) {
      iVar4 = FUN_0057c190(iVar5,auStack_50,8);
      iVar5 = iVar5 + iVar4;
    }
    iVar4 = FUN_0057c190(iVar5,&uStack_48,8);
    iVar3 = FUN_0057c190(iVar5 + iVar4,auStack_40,4);
    iVar3 = iVar5 + iVar4 + iVar3;
    if ((uStack_30 & 4) != 0) {
      iVar4 = FUN_0057c190(iVar3,auStack_38,8);
      iVar3 = iVar3 + iVar4;
    }
    if (((iVar3 != param_1[0x20]) || (param_1[0x20] == 0)) || (puVar13 != (undefined8 *)0x0)) {
      param_1[0x20] = iVar3;
      iStack_9c = 1;
LAB_005f3f67:
      iVar4 = (**(code **)(*param_1 + 0x1c))(param_1,&stack0xffffff70);
      if (-1 < iVar4) {
        iVar4 = _SfVideoPlugin_ApplyFilterAuto_96
                          (param_1 + 0x27,0,param_1 + 0x16,0,param_1 + 3,puVar1,unaff_ESI,0,0,
                           param_1 + 0x16,0,0,0,0,puVar1,DAT_0064b50c,uVar11,0,0,0,uVar12,puVar13,
                           param_1[0x25]);
        *param_8 = param_2;
        param_8[1] = param_3;
        *param_4 = 0;
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = param_1 + 0x27;
        }
        if (-1 < iVar4) {
          return iVar4;
        }
      }
      return iVar4;
    }
    if (apiStack_78[0] != (int *)0x0) {
      (**(code **)(*apiStack_78[0] + 8))(apiStack_78[0]);
    }
    if (apiStack_78[1] != (int *)0x0) {
      (**(code **)(*apiStack_78[1] + 8))(apiStack_78[1]);
    }
    if (pcStack_5c != (char *)0x0) {
      pvVar6 = GlobalHandle(pcStack_5c);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pcStack_5c);
      GlobalFree(pvVar6);
    }
    if (pcStack_54 != (char *)0x0) {
      pvVar6 = GlobalHandle(pcStack_54);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pcStack_54);
      GlobalFree(pvVar6);
    }
  }
  *param_8 = param_2;
  param_8[1] = param_3;
  *param_4 = iStack_a0;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_1 + 0x27;
  }
  return 0;
}


