/* Module: vidcap30.exe
   Function: FUN_0041e270
   Address: 0041e270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041e3f3) */
/* WARNING: Removing unreachable block (ram,0x0041e3fe) */
/* WARNING: Removing unreachable block (ram,0x0041e284) */

undefined4 FUN_0041e270(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int local_7ec;
  short *local_7e8;
  short *local_7e4;
  int local_7d8;
  short local_7d0;
  short local_7ce [999];
  
  sVar7 = 0;
  local_7ec = 0;
  psVar6 = &local_7d0;
  for (iVar4 = 500; iVar4 != 0; iVar4 = iVar4 + -1) {
    psVar6[0] = 0;
    psVar6[1] = 0;
    psVar6 = psVar6 + 2;
  }
  local_7e4 = local_7ce;
  iVar4 = 0;
  local_7e8 = &local_7d0;
  local_7d8 = 5;
  psVar6 = (short *)(PTR_DAT_005b52b0 + 10);
  do {
    bVar2 = false;
    *local_7e8 = sVar7;
    iVar3 = 1;
    pcVar5 = (char *)((int)psVar6 + 3);
    do {
      if (*pcVar5 == '\0') {
        if (!bVar2) {
          if (*psVar6 == psVar6[-1]) goto LAB_0041e37d;
          *local_7e4 = *psVar6;
          goto joined_r0x0041e37b;
        }
        break;
      }
      iVar1 = iVar4 + iVar3;
      iVar8 = local_7d8 + iVar3;
      iVar3 = iVar3 + 1;
      pcVar5 = pcVar5 + 2;
      bVar2 = true;
      local_7ce[iVar1] = *(short *)(PTR_DAT_005b52b0 + iVar8 * 2);
    } while (iVar3 < 4);
    *local_7e4 = *psVar6;
joined_r0x0041e37b:
    local_7e4 = local_7e4 + 5;
    local_7e8 = local_7e8 + 5;
    iVar4 = iVar4 + 5;
    local_7ec = local_7ec + 1;
    if (iVar4 == 0x14) break;
LAB_0041e37d:
    local_7d8 = local_7d8 + 10;
    sVar7 = sVar7 + 1;
    psVar6 = psVar6 + 10;
  } while (local_7d8 < 0x7d5);
  if (local_7ec == 0) {
    _SfDeleteMetric_12(DAT_005ba29c,0x4b0,3);
  }
  else {
    _SfSetMetricBinary_16(DAT_005ba29c,0x4b0,&local_7d0,local_7ec * 10);
  }
  if (DAT_005ba4d4 != (HACCEL)0x0) {
    DestroyAcceleratorTable(DAT_005ba4d4);
    DAT_005ba4d4 = (HACCEL)0x0;
  }
  return 1;
}


