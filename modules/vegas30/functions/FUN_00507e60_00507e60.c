/* Module: vegas30.exe
   Function: FUN_00507e60
   Address: 00507e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00507e60(void)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int local_7ec;
  short *local_7e8;
  short *local_7e4;
  uint local_7dc;
  int local_7d8;
  short local_7d0;
  short local_7ce [999];
  
  local_7dc = 0;
  do {
    sVar8 = 0;
    local_7ec = 0;
    puVar2 = (&PTR_DAT_00643530)[local_7dc * 0x11];
    psVar7 = &local_7d0;
    for (iVar5 = 500; iVar5 != 0; iVar5 = iVar5 + -1) {
      psVar7[0] = 0;
      psVar7[1] = 0;
      psVar7 = psVar7 + 2;
    }
    local_7e4 = local_7ce;
    iVar5 = 0;
    local_7e8 = &local_7d0;
    local_7d8 = 5;
    psVar7 = (short *)(puVar2 + 10);
    do {
      bVar3 = false;
      *local_7e8 = sVar8;
      iVar4 = 1;
      pcVar6 = (char *)((int)psVar7 + 3);
      do {
        if (*pcVar6 == '\0') {
          if (!bVar3) {
            if (*psVar7 == psVar7[-1]) goto LAB_00507f6d;
            *local_7e4 = *psVar7;
            goto joined_r0x00507f6b;
          }
          break;
        }
        iVar1 = iVar5 + iVar4;
        iVar9 = local_7d8 + iVar4;
        iVar4 = iVar4 + 1;
        pcVar6 = pcVar6 + 2;
        bVar3 = true;
        local_7ce[iVar1] = *(short *)(puVar2 + iVar9 * 2);
      } while (iVar4 < 4);
      *local_7e4 = *psVar7;
joined_r0x00507f6b:
      local_7e4 = local_7e4 + 5;
      local_7e8 = local_7e8 + 5;
      iVar5 = iVar5 + 5;
      local_7ec = local_7ec + 1;
      if (iVar5 == 0x14) break;
LAB_00507f6d:
      local_7d8 = local_7d8 + 10;
      sVar8 = sVar8 + 1;
      psVar7 = psVar7 + 10;
    } while (local_7d8 < 0x7d5);
    if (local_7ec == 0) {
      _SfDeleteMetric_12(DAT_00647200,local_7dc + 0x4b0,3);
    }
    else {
      _SfSetMetricBinary_16(DAT_00647200,local_7dc + 0x4b0,&local_7d0,local_7ec * 10);
    }
    if (local_7dc == 0) {
      if (DAT_00647644 != (HACCEL)0x0) {
        DestroyAcceleratorTable(DAT_00647644);
        DAT_00647644 = (HACCEL)0x0;
      }
    }
    else if ((&DAT_00647644)[local_7dc] != (HACCEL)0x0) {
      DestroyAcceleratorTable((&DAT_00647644)[local_7dc]);
      (&DAT_00647644)[local_7dc] = (HACCEL)0x0;
    }
    local_7dc = local_7dc + 1;
    if (9 < local_7dc) {
      return 1;
    }
  } while( true );
}


