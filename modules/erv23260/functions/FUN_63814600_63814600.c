/* Module: erv23260.dll
   Function: FUN_63814600
   Address: 63814600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63814600(void *this,byte *param_1,undefined4 param_2,byte *param_3,byte *param_4,int *param_5,
            int param_6,uint *param_7,undefined4 *param_8,int *param_9,int *param_10)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *puVar8;
  byte *pbVar9;
  uint uVar10;
  int local_8;
  
  pbVar5 = param_1;
  uVar6 = *(uint *)(param_6 + 0x14);
  if ((*(int *)((int)this + 0x15c) != 0) && (uVar6 = uVar6 * 2, uVar6 < 0x1f)) {
    uVar6 = 0x1f;
  }
  if (*(int *)((int)this + 0xe8) == 0) {
    bVar2 = param_1[0x65];
    puVar8 = *(ushort **)param_1;
    if ((bVar2 & 1) == 0) {
      puVar8 = (ushort *)((int)puVar8 - uVar6);
    }
    pbVar7 = *(byte **)(param_1 + 4);
    pbVar9 = pbVar7;
    if ((bVar2 & 4) == 0) {
      pbVar9 = pbVar7 + -uVar6;
    }
    local_8 = *(int *)param_1;
    if ((bVar2 & 2) == 0) {
      local_8 = local_8 + uVar6;
    }
    pbVar1 = param_1 + 0x65;
    param_1 = pbVar7;
    if ((*pbVar1 & 8) != 0) goto LAB_638146c3;
  }
  else {
    uVar10 = 0xf;
    if (uVar6 < 0x10) {
      uVar10 = uVar6;
    }
    uVar4 = uVar6;
    if ((param_1[0x65] & 1) != 0) {
      uVar4 = uVar10;
    }
    puVar8 = (ushort *)(*(int *)param_1 - uVar4);
    uVar4 = uVar6;
    if ((param_1[0x65] & 4) != 0) {
      uVar4 = uVar10;
    }
    pbVar9 = (byte *)(*(int *)(param_1 + 4) - uVar4);
    uVar4 = uVar6;
    if ((param_1[0x65] & 2) != 0) {
      uVar4 = uVar10;
    }
    local_8 = uVar4 + *(int *)param_1;
    pbVar7 = *(byte **)(param_1 + 4);
    if ((param_1[0x65] & 8) != 0) {
      param_1 = pbVar7 + uVar10;
      goto LAB_638146c3;
    }
  }
  param_1 = pbVar7 + uVar6;
LAB_638146c3:
  FUN_638147f0(this,(int)param_3,(int)param_4,puVar8,(int)pbVar9,local_8,(int)param_1,param_6,uVar6,
               (int *)pbVar5,param_5,param_7,(int *)&param_5,param_10);
  if (*param_10 == 0) {
    if ((*(int *)((int)this + 0xec) == 0) || (*(int *)(param_6 + 8) == 0)) {
      *param_9 = 0;
    }
    else {
      param_10 = param_5;
      FUN_63814d60(this,(int)param_3,(int)param_4,(int)puVar8,(int)pbVar9,local_8,(int)param_1,
                   param_6,(int *)param_7,(int *)pbVar5,(int *)&param_10);
      iVar3 = *(int *)(&DAT_6382e750 + *(int *)(param_6 + 0x18) * 4);
      if ((int)param_10 + iVar3 < (int)param_5) {
        *param_9 = 1;
        param_5 = (int *)((int)param_10 + iVar3);
      }
    }
    if (*(int *)(param_6 + 4) != 0) {
      if (*param_9 == 0) {
        FUN_63814f00(this,(int)param_3,(int)param_4,*(int *)pbVar5,*(byte **)(pbVar5 + 4),
                     (int)puVar8,(int)pbVar9,local_8,param_1,param_6,(int *)param_7,(int *)&param_5)
        ;
        *param_8 = param_5;
        return;
      }
      FUN_63815220(this,param_3,param_4);
    }
  }
  *param_8 = param_5;
  return;
}


