/* Module: vegas30k.dll
   Function: HorizontalPass
   Address: 010719d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CMeshWarp::HorizontalPass(struct tWARP_MESH *,struct tSFDIBGENERICPARAMS
   const *) */

void __thiscall
CMeshWarp::HorizontalPass(CMeshWarp *this,tWARP_MESH *param_1,tSFDIBGENERICPARAMS *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uchar *unaff_EDI;
  int local_110;
  undefined1 local_f0 [4];
  uint local_ec;
  undefined4 uStack_e8;
  int local_e4;
  long local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 uStack_d4;
  double local_d0;
  tSFDIBXCHGPARAMS local_c4 [20];
  undefined4 local_b0;
  undefined4 local_a0;
  int local_60;
  undefined4 local_5c;
  int local_50;
  uint local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
                    /* 0x719d0  107
                       ?HorizontalPass@CMeshWarp@@AAEXPAUtWARP_MESH@@PBUtSFDIBGENERICPARAMS@@@Z */
  iVar2 = *(int *)(param_2 + 0x6c);
  local_e4 = *(int *)(param_2 + 0x4c);
  local_110 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)(param_2 + 0x3c);
  uVar10 = _SfGetPixelType_4(*(undefined4 *)(param_2 + 0x44));
  uVar11 = _SfGetPixelType_4(*(undefined4 *)(param_2 + 0x14));
  local_dc = _SfGetPixelBitsPerChannel_8(uVar10,local_f0);
  _SfGetPixelBitsPerChannel_8(uVar11,local_f0);
  _SfXCHGGetFunctionPointers_20(uVar11,uVar10,*(undefined4 *)(param_2 + 0x88),local_c4,0);
  local_38 = *(undefined4 *)(param_2 + 0x70);
  local_34 = *(undefined4 *)(param_2 + 0x40);
  lVar4 = *(long *)(param_2 + 4);
  local_30 = *(undefined4 *)(param_2 + 0x74);
  iVar5 = *(int *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0xc);
  local_e0 = *(long *)(param_2 + 0x34);
  iVar7 = *(int *)(param_2 + 0x38);
  if (*(int *)(param_2 + 100) == 1) {
    local_b0 = local_a0;
  }
  local_50 = iVar2;
  if (*(int *)(param_2 + 0x68) == 1) {
    local_50 = 0;
  }
  if (0 < iVar7) {
    local_d0 = (double)iVar7;
    local_d8 = *(uint *)(param_2 + 8);
    iVar12 = 1;
    do {
      local_60 = local_110;
      local_5c = *(undefined4 *)(param_2 + 0x20);
      if (iVar7 <= iVar12) {
        local_50 = 0;
      }
      local_48 = local_d8 & 0x3fff;
      uVar1 = local_d8 + iVar5;
      uStack_e8 = 0;
      uStack_d4 = 0;
      dVar9 = ((double)uVar1 * _DAT_011dba40) / local_d0;
      local_ec = uVar1;
      RenderScanLine(this,param_1,local_c4,lVar4,local_e0,lVar6,
                     (double)CONCAT44(SUB84(dVar9,0),
                                      (int)((ulonglong)
                                            (((double)local_d8 * _DAT_011dba40) / local_d0) >> 0x20)
                                     ),(double)CONCAT44(local_dc,(int)((ulonglong)dVar9 >> 0x20)),
                     iVar2,(local_d8 >> 0xe) * iVar2 + local_e4,unaff_EDI);
      local_110 = local_110 + iVar3;
      bVar8 = iVar12 < iVar7;
      local_d8 = uVar1;
      iVar12 = iVar12 + 1;
    } while (bVar8);
  }
  return;
}


