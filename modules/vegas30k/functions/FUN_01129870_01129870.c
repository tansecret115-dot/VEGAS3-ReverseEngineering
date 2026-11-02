/* Module: vegas30k.dll
   Function: FUN_01129870
   Address: 01129870
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_01129870(int param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  uint local_c;
  int local_8;
  int local_4;
  
  lVar7 = 0;
  local_4 = param_3;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0x14) + 0x350) + 4) * 0x914;
  iVar2 = param_3;
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      lVar7 = SfMpegStreamOpen((tagMPEG_BIT_STREAM *)(param_1 + 0x4c),
                               (char *)(*(int *)(iVar3 + 0x14) + 0x224));
      if ((lVar7 < 0) ||
         (lVar7 = SfMpegStreamSeekNextStartCode((tagMPEG_BIT_STREAM *)(param_1 + 0x4c)), lVar7 < 0))
      goto LAB_011299b3;
    }
    iVar3 = param_2 + 0x10;
    while( true ) {
      param_2 = iVar5 - *(int *)(param_1 + 0x40);
      iVar2 = iVar3 + 8;
      if (0x913 < param_2) {
        param_2 = 0x914;
      }
      local_8 = iVar3;
      lVar7 = FUN_01012be0(param_1,iVar3,iVar2,&local_c);
      if ((lVar7 < 0) || (local_c != param_2)) break;
      iVar4 = *(int *)(param_1 + 0x40) + local_c;
      iVar3 = iVar3 + 0x930;
      param_3 = param_3 + -0x930;
      *(int *)(param_1 + 0x40) = iVar4;
      if ((param_3 == 0) || (iVar4 == iVar5)) break;
    }
    if (*(int *)(param_1 + 0x40) == iVar5) {
      if (local_c != 0x914) {
        puVar8 = (undefined4 *)(local_c + iVar2);
        for (uVar6 = 0x914 - local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = 0x914 - local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      *(byte *)(local_8 + 2) = *(byte *)(local_8 + 2) | 0x81;
      SfMpegStreamClose((tagMPEG_BIT_STREAM *)(param_1 + 0x4c));
      iVar2 = local_4;
    }
    else {
      lVar7 = 1;
      iVar2 = local_4;
    }
  }
LAB_011299b3:
  *param_4 = iVar2 - param_3;
  return lVar7;
}


