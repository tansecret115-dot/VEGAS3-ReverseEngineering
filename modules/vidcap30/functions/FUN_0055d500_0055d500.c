/* Module: vidcap30.exe
   Function: FUN_0055d500
   Address: 0055d500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055d500(short *param_1,undefined4 *param_2)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  int local_4;
  
  iVar3 = (int)param_1;
  psVar2 = (short *)*param_2;
  iVar8 = -1;
  iVar7 = *(int *)param_2[2];
  local_4 = ((int *)param_2[2])[3];
  iVar5 = 0;
  local_8 = -1;
  *(undefined4 *)((int)param_1 + 0x1446) = 0;
  *(undefined4 *)((int)param_1 + 0x144a) = 0x23d;
  psVar6 = psVar2;
  if (0 < local_4) {
    do {
      if (*psVar6 == 0) {
        psVar6[1] = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x1446) + 1;
        *(int *)((int)param_1 + 0x1446) = iVar8;
        *(int *)((int)param_1 + 0xb52 + iVar8 * 4) = iVar5;
        *(undefined1 *)(iVar5 + 0x144e + (int)param_1) = 0;
        iVar8 = iVar5;
        local_8 = iVar5;
      }
      iVar5 = iVar5 + 1;
      psVar6 = psVar6 + 2;
    } while (iVar5 < local_4);
  }
  iVar5 = *(int *)((int)param_1 + 0x1446);
  while (iVar5 < 2) {
    if (iVar8 < 2) {
      iVar9 = iVar8 + 1;
      iVar8 = iVar9;
    }
    else {
      iVar9 = 0;
    }
    *(int *)((int)param_1 + 0x1446) = iVar5 + 1;
    *(int *)((int)param_1 + 0xb52 + (iVar5 + 1) * 4) = iVar9;
    psVar2[iVar9 * 2] = 1;
    *(undefined1 *)((int)param_1 + 0x144e + iVar9) = 0;
    *(int *)((int)param_1 + 0x169b) = *(int *)((int)param_1 + 0x169b) + -1;
    if (iVar7 != 0) {
      *(uint *)((int)param_1 + 0x169f) =
           *(int *)((int)param_1 + 0x169f) - (uint)*(ushort *)(iVar7 + 2 + iVar9 * 4);
    }
    local_8 = iVar8;
    iVar5 = *(int *)((int)param_1 + 0x1446);
  }
  param_2[1] = iVar8;
  for (iVar7 = *(int *)((int)param_1 + 0x1446) / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    FUN_0055d730(param_1,psVar2,iVar7);
  }
  param_1 = psVar2 + local_4 * 2;
  do {
    iVar7 = *(int *)(iVar3 + 0xb56);
    *(undefined4 *)(iVar3 + 0xb56) = *(undefined4 *)(iVar3 + 0xb52 + *(int *)(iVar3 + 0x1446) * 4);
    *(int *)(iVar3 + 0x1446) = *(int *)(iVar3 + 0x1446) + -1;
    FUN_0055d730(iVar3,psVar2,1);
    iVar8 = *(int *)(iVar3 + 0xb56);
    iVar5 = *(int *)(iVar3 + 0x144a) + -1;
    *(int *)(iVar3 + 0x144a) = iVar5;
    *(int *)(iVar3 + 0xb52 + iVar5 * 4) = iVar7;
    iVar5 = *(int *)(iVar3 + 0x144a) + -1;
    *(int *)(iVar3 + 0x144a) = iVar5;
    *(int *)(iVar3 + 0xb52 + iVar5 * 4) = iVar8;
    *param_1 = psVar2[iVar8 * 2] + psVar2[iVar7 * 2];
    bVar1 = *(byte *)(iVar3 + 0x144e + iVar7);
    bVar4 = *(byte *)(iVar3 + 0x144e + iVar8);
    if (bVar4 <= bVar1) {
      bVar4 = bVar1;
    }
    *(byte *)(iVar3 + 0x144e + local_4) = bVar4 + 1;
    psVar2[iVar8 * 2 + 1] = (short)local_4;
    psVar2[iVar7 * 2 + 1] = (short)local_4;
    *(int *)(iVar3 + 0xb56) = local_4;
    local_4 = local_4 + 1;
    param_1 = param_1 + 2;
    FUN_0055d730(iVar3,psVar2,1);
  } while (1 < *(int *)(iVar3 + 0x1446));
  iVar7 = *(int *)(iVar3 + 0x144a) + -1;
  *(int *)(iVar3 + 0x144a) = iVar7;
  *(undefined4 *)(iVar3 + 0xb52 + iVar7 * 4) = *(undefined4 *)(iVar3 + 0xb56);
  FUN_0055d810(iVar3,param_2);
  FUN_0055da40(psVar2,local_8,iVar3 + 0xb32);
  return;
}


