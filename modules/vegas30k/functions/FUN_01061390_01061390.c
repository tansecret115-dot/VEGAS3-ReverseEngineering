/* Module: vegas30k.dll
   Function: FUN_01061390
   Address: 01061390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_01061390(int param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,uint param_6,
            int param_7,int param_8,int *param_9)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar8 = *(int *)(param_1 + 0x250);
  iVar7 = *(int *)(param_1 + 0x270);
  *param_9 = 0;
  iVar2 = *(int *)(param_1 + 0x244);
  iVar1 = __alldiv(param_2,param_3,iVar2,iVar2 >> 0x1f);
  iVar2 = __alldiv(param_2 + param_6,param_3 + param_7 + (uint)CARRY4(param_2,param_6),iVar2,
                   iVar2 >> 0x1f);
  iVar4 = iVar2 - iVar1;
  if (iVar4 < 1) {
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0x248) < iVar2) {
    param_8 = (int)(((longlong)param_8 * (longlong)(*(int *)(param_1 + 0x248) - iVar1)) /
                   (longlong)iVar4);
    iVar4 = *(int *)(param_1 + 0x248) - iVar1;
    if (iVar4 < 1) {
      return 0x80004005;
    }
  }
  puVar9 = (undefined4 *)(iVar8 + iVar1 * iVar7 * 2);
  if (param_8 == iVar4) {
    puVar10 = param_5;
    for (uVar5 = (iVar7 * param_8 & 0x7fffffffU) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = iVar7 * param_8 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  else {
    FUN_010614e0(param_5,iVar4,param_8,0,puVar9,iVar4,iVar7);
  }
  if (param_4 != 0x31) {
    iVar7 = iVar7 * param_8;
    iVar8 = iVar7 + -1;
    if (-1 < iVar8) {
      pbVar3 = (byte *)((int)param_5 + iVar8 * 2);
      psVar6 = (short *)(param_5 + iVar8);
      do {
        psVar6[1] = (ushort)pbVar3[1] << 8;
        iVar7 = iVar7 + -1;
        *psVar6 = (ushort)*pbVar3 << 8;
        pbVar3 = pbVar3 + -2;
        psVar6 = psVar6 + -2;
      } while (iVar7 != 0);
    }
  }
  *param_9 = param_8;
  return 0;
}


