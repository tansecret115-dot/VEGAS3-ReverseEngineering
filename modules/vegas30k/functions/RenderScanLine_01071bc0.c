/* Module: vegas30k.dll
   Function: RenderScanLine
   Address: 01071bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CMeshWarp::RenderScanLine(struct tWARP_MESH *,struct tSFDIBXCHGPARAMS
   *,long,long,long,double,double,int,int,unsigned char *) */

void __thiscall
CMeshWarp::RenderScanLine
          (CMeshWarp *this,tWARP_MESH *param_1,tSFDIBXCHGPARAMS *param_2,long param_3,long param_4,
          long param_5,double param_6,double param_7,int param_8,int param_9,uchar *param_10)

{
  int iVar1;
  double dVar2;
  double _X;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  undefined4 in_stack_00000018;
  int local_50;
  int local_48;
  int local_3c;
  int local_38;
  int local_28;
  
                    /* 0x71bc0  263
                       ?RenderScanLine@CMeshWarp@@AAEXPAUtWARP_MESH@@PAUtSFDIBXCHGPARAMS@@JJJNNHHPAE@Z
                        */
  local_3c = 0;
  if (*(int *)this + -1 < 1) {
    return;
  }
  dVar2 = ((double)param_4 / (double)(*(int *)this + -1)) * (double)param_5 * _DAT_011e1da8;
  iVar9 = param_4 << 0xe;
  iVar8 = 0;
  do {
    lVar3 = GetCurMeshPos(this,param_1,iVar8,(double)CONCAT44(param_6._0_4_,in_stack_00000018),iVar9
                          ,1);
    lVar4 = GetCurMeshPos(this,param_1,iVar8,(double)CONCAT44(param_7._0_4_,param_6._4_4_),iVar9,1);
    iVar5 = (lVar4 + lVar3) / 2;
    iVar1 = iVar8 + 1;
    lVar3 = GetCurMeshPos(this,param_1,iVar1,(double)CONCAT44(param_6._0_4_,in_stack_00000018),iVar9
                          ,1);
    lVar4 = GetCurMeshPos(this,param_1,iVar1,(double)CONCAT44(param_7._0_4_,param_6._4_4_),iVar9,1);
    _X = (double)iVar5 * _DAT_011dba40;
    iVar10 = (lVar4 + lVar3) / 2;
    dVar12 = ceil(_X);
    local_38 = SUB84(dVar12 + _DAT_011dbdd0,0);
    iVar7 = local_38 + -0x80000000;
    dVar12 = ceil((double)iVar10 * _DAT_011dba40);
    local_48 = SUB84(dVar12 + _DAT_011dbdd0,0);
    local_38 = (local_48 - iVar7) + -0x80000000;
    local_50 = SUB84(((double)iVar8 * (double)param_5 * (double)param_4) /
                     (double)(*(int *)this + -1) + _DAT_011dbdd0,0);
    local_48 = SUB84(dVar2 / (double)(iVar10 - iVar5) + _DAT_011dbdd0,0);
    local_28 = SUB84(((double)iVar7 - _X) * (double)(local_48 + -0x80000000) + _DAT_011dbdd0,0);
    uVar11 = local_28 + local_50;
    iVar8 = local_3c + local_38;
    if (param_4 + -2 <= iVar8) {
      local_38 = (param_4 - local_3c) + -3;
    }
    if (0 < local_38) {
      do {
        uVar6 = ((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x3fffU)) >> 0xe) * param_7._4_4_;
        *(uint *)(param_2 + 0x60) = uVar6 & 7;
        *(int *)(param_2 + 0x5c) = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3) + param_9;
        uVar6 = uVar11 & 0x80003fff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffffc000) + 1;
        }
        *(uint *)(param_2 + 0x78) = uVar6;
        (**(code **)(param_2 + 0x14))();
        (**(code **)(param_2 + 0x10))(param_2);
        uVar11 = uVar11 + local_48 + -0x80000000;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
    local_3c = iVar8;
    iVar8 = iVar1;
  } while (iVar1 < *(int *)this + -1);
  return;
}


