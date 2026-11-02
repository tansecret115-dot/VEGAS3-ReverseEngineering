/* Module: vegas30k.dll
   Function: RenderVertScanLine
   Address: 01072020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CMeshWarp::RenderVertScanLine(struct tWARP_MESH *,struct
   tSFDIBXCHGPARAMS *,long,long,long,long,double,double,int,int,int,int,unsigned char *) */

void __thiscall
CMeshWarp::RenderVertScanLine
          (CMeshWarp *this,tWARP_MESH *param_1,tSFDIBXCHGPARAMS *param_2,long param_3,long param_4,
          long param_5,long param_6,double param_7,double param_8,int param_9,int param_10,
          int param_11,int param_12,uchar *param_13)

{
  int iVar1;
  double dVar2;
  double _X;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  int local_3c;
  int local_20;
  int local_8;
  
                    /* 0x72020  264
                       ?RenderVertScanLine@CMeshWarp@@AAEXPAUtWARP_MESH@@PAUtSFDIBXCHGPARAMS@@JJJJNNHHHHPAE@Z
                        */
  lVar3 = param_5;
  local_3c = 0;
  dVar2 = (double)param_5;
  param_5 = 0;
  if (*(int *)(this + 4) + -1 < 1) {
    return;
  }
  dVar2 = ((double)param_4 / (double)(*(int *)(this + 4) + -1)) * dVar2 * _DAT_011e1da8;
  iVar10 = param_4 << 0xe;
  do {
    lVar4 = GetCurMeshPos(this,param_1,param_5,param_7,iVar10,1);
    lVar5 = GetCurMeshPos(this,param_1,param_5,param_8,iVar10,1);
    iVar1 = param_5 + 1;
    iVar9 = (lVar5 + lVar4) / 2;
    lVar4 = GetCurMeshPos(this,param_1,iVar1,param_7,iVar10,1);
    lVar5 = GetCurMeshPos(this,param_1,iVar1,param_8,iVar10,1);
    _X = (double)iVar9 * _DAT_011dba40;
    iVar11 = (lVar5 + lVar4) / 2;
    dVar13 = ceil(_X);
    local_20 = SUB84(dVar13 + _DAT_011dbdd0,0);
    iVar7 = local_20 + -0x80000000;
    dVar13 = ceil((double)iVar11 * _DAT_011dba40);
    local_20 = SUB84(dVar13 + _DAT_011dbdd0,0);
    param_3 = (local_20 - iVar7) + -0x80000000;
    local_8 = SUB84(((double)param_5 * (double)lVar3 * (double)param_4) /
                    (double)(*(int *)(this + 4) + -1) + _DAT_011dbdd0,0);
    local_20 = SUB84(dVar2 / (double)(iVar11 - iVar9) + _DAT_011dbdd0,0);
    iVar9 = local_20 + -0x80000000;
    local_20 = SUB84(((double)iVar7 - _X) * (double)iVar9 + _DAT_011dbdd0,0);
    uVar12 = local_20 + local_8;
    iVar7 = param_3 + local_3c;
    if (param_4 + -2 <= iVar7) {
      param_3 = (param_4 - local_3c) + -3;
    }
    if (0 < param_3) {
      uVar6 = ((int)(param_6 + (param_6 >> 0x1f & 0x3fffU)) >> 0xe) * param_9;
      do {
        *(uint *)(param_2 + 0x60) = uVar6 & 7;
        uVar8 = uVar12 & 0x80003fff;
        *(uchar **)(param_2 + 0x5c) =
             param_13 +
             ((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x3fffU)) >> 0xe) * param_11 +
             ((int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3);
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffc000) + 1;
        }
        *(uint *)(param_2 + 0x7c) = uVar8;
        (**(code **)(param_2 + 0x14))();
        (**(code **)(param_2 + 0x10))(param_2);
        *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) - param_10;
        uVar12 = uVar12 + iVar9;
        param_3 = param_3 + -1;
        *(int *)(param_2 + 100) =
             *(int *)(param_2 + 100) + (param_12 - ((int)(param_10 + (param_10 >> 0x1f & 7U)) >> 3))
        ;
      } while (param_3 != 0);
    }
    param_5 = iVar1;
    local_3c = iVar7;
  } while (iVar1 < *(int *)(this + 4) + -1);
  return;
}


