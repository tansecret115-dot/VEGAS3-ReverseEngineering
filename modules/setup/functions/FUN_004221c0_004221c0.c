/* Module: Setup.exe
   Function: FUN_004221c0
   Address: 004221c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004221c0(int *param_1,int *param_2)

{
  byte bVar1;
  short *psVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  int local_4;
  
  piVar3 = param_1;
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
        *(int *)((int)param_1 + iVar8 * 4 + 0xb52) = iVar5;
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
    *(int *)((int)param_1 + (iVar5 + 1) * 4 + 0xb52) = iVar9;
    psVar2[iVar9 * 2] = 1;
    *(undefined1 *)((int)param_1 + iVar9 + 0x144e) = 0;
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
    FUN_004223f0((int)param_1,(int)psVar2,iVar7);
  }
  param_1 = (int *)(psVar2 + local_4 * 2);
  do {
    iVar7 = *(int *)((int)piVar3 + 0xb56);
    *(undefined4 *)((int)piVar3 + 0xb56) =
         *(undefined4 *)((int)piVar3 + *(int *)((int)piVar3 + 0x1446) * 4 + 0xb52);
    *(int *)((int)piVar3 + 0x1446) = *(int *)((int)piVar3 + 0x1446) + -1;
    FUN_004223f0((int)piVar3,(int)psVar2,1);
    iVar8 = *(int *)((int)piVar3 + 0xb56);
    iVar5 = *(int *)((int)piVar3 + 0x144a) + -1;
    *(int *)((int)piVar3 + 0x144a) = iVar5;
    *(int *)((int)piVar3 + iVar5 * 4 + 0xb52) = iVar7;
    iVar5 = *(int *)((int)piVar3 + 0x144a) + -1;
    *(int *)((int)piVar3 + 0x144a) = iVar5;
    *(int *)((int)piVar3 + iVar5 * 4 + 0xb52) = iVar8;
    *(short *)param_1 = psVar2[iVar8 * 2] + psVar2[iVar7 * 2];
    bVar1 = *(byte *)((int)piVar3 + iVar7 + 0x144e);
    bVar4 = *(byte *)((int)piVar3 + iVar8 + 0x144e);
    if (bVar4 <= bVar1) {
      bVar4 = bVar1;
    }
    *(byte *)((int)piVar3 + local_4 + 0x144e) = bVar4 + 1;
    psVar2[iVar8 * 2 + 1] = (short)local_4;
    psVar2[iVar7 * 2 + 1] = (short)local_4;
    *(int *)((int)piVar3 + 0xb56) = local_4;
    local_4 = local_4 + 1;
    param_1 = param_1 + 1;
    FUN_004223f0((int)piVar3,(int)psVar2,1);
  } while (1 < *(int *)((int)piVar3 + 0x1446));
  iVar7 = *(int *)((int)piVar3 + 0x144a) + -1;
  *(int *)((int)piVar3 + 0x144a) = iVar7;
  *(undefined4 *)((int)piVar3 + iVar7 * 4 + 0xb52) = *(undefined4 *)((int)piVar3 + 0xb56);
  FUN_004224d0(piVar3,param_2);
  FUN_00422700(psVar2,local_8,(int)piVar3 + 0xb32);
  return;
}


