/* Module: g2plug.dll
   Function: SfRealG2_GetStatistics
   Address: 5f80a010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* long __stdcall SfRealG2_GetStatistics(struct SFG2_STAT_PARAMS *) */

long SfRealG2_GetStatistics(SFG2_STAT_PARAMS *param_1)

{
  int iVar1;
  SFG2_STAT_PARAMS *pSVar2;
  char *pcStack_50;
  char **ppcStack_4c;
  char **ppcStack_48;
  char *pcStack_44;
  char **ppcStack_40;
  undefined **ppuStack_3c;
  char *pcStack_38;
  char **ppcStack_34;
  int *piStack_30;
  char *pcStack_2c;
  undefined **ppuStack_28;
  int *piStack_24;
  char *pcStack_20;
  int *piStack_1c;
  undefined4 *puStack_18;
  undefined *puStack_14;
  int *piStack_10;
  int local_4;
  
  pSVar2 = param_1;
                    /* 0xa010  37  ?SfRealG2_GetStatistics@@YGJPAUSFG2_STAT_PARAMS@@@Z */
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar2 = 0;
    pSVar2 = pSVar2 + 4;
  }
  local_4 = 0;
  if (DAT_5f87749c == (undefined4 *)0x0) {
    return -0x7fffbffb;
  }
  piStack_10 = &local_4;
  puStack_14 = &DAT_5f86a680;
  puStack_18 = DAT_5f87749c;
  piStack_1c = (int *)0x5f80a04d;
  iVar1 = (**(code **)*DAT_5f87749c)();
  if (iVar1 == 0) {
    piStack_1c = (int *)&stack0xfffffff8;
    pcStack_20 = "videostreams.1.maxframerate";
    piStack_24 = piStack_10;
    ppuStack_28 = (undefined **)0x5f80a069;
    iVar1 = (**(code **)(*piStack_10 + 0x18))();
    if (iVar1 == 0) {
      *(double *)(param_1 + 8) = (double)(int)puStack_14 * _DAT_5f86b0a8;
    }
    ppuStack_28 = &puStack_14;
    pcStack_2c = "videostreams.1.averageframerate";
    piStack_30 = piStack_1c;
    ppcStack_34 = (char **)0x5f80a08e;
    iVar1 = (**(code **)(*piStack_1c + 0x18))();
    if (iVar1 == 0) {
      *(double *)(param_1 + 0x10) = (double)(int)pcStack_20 * _DAT_5f86b0a8;
    }
    ppcStack_34 = &pcStack_20;
    pcStack_38 = "videostreams.1.targetbitrate";
    ppuStack_3c = ppuStack_28;
    ppcStack_40 = (char **)0x5f80a0b3;
    iVar1 = (**(code **)(*ppuStack_28 + 0x18))();
    if (iVar1 == 0) {
      *(double *)(param_1 + 0x18) = (double)(int)pcStack_2c;
    }
    ppcStack_40 = &pcStack_2c;
    pcStack_44 = "videostreams.1.bitrate";
    ppcStack_48 = ppcStack_34;
    ppcStack_4c = (char **)0x5f80a0d2;
    iVar1 = (**(code **)(*ppcStack_34 + 0x18))();
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x28) = pcStack_38;
    }
    ppcStack_4c = &pcStack_38;
    pcStack_50 = "videostreams.1.latency";
    iVar1 = (**(code **)(*ppcStack_40 + 0x18))(ppcStack_40);
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x2c) = pcStack_44;
    }
    iVar1 = (**(code **)(*ppcStack_4c + 0x18))(ppcStack_4c);
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x20) = pcStack_50;
    }
    iVar1 = (**(code **)(pcStack_44 + 0x18))(&pcStack_44,"audiostreams.1.latency");
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x24) = "audiostreams.1.bitrate";
    }
    if (&pcStack_50 != (char **)0x0) {
      (**(code **)(pcStack_50 + 8))(&pcStack_50);
    }
  }
  return 0;
}


