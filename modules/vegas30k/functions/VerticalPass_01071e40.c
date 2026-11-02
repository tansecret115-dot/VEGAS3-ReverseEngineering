/* Module: vegas30k.dll
   Function: VerticalPass
   Address: 01071e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CMeshWarp::VerticalPass(struct tWARP_MESH *,struct tSFDIBGENERICPARAMS
   const *) */

void __thiscall
CMeshWarp::VerticalPass(CMeshWarp *this,tWARP_MESH *param_1,tSFDIBGENERICPARAMS *param_2)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_110;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  long local_e4;
  uint local_e0;
  undefined4 uStack_dc;
  double local_d8;
  uint local_cc;
  undefined4 uStack_c8;
  tSFDIBXCHGPARAMS local_c4 [20];
  undefined4 local_b0;
  undefined4 local_a0;
  int local_60;
  uint local_5c;
  int local_50;
  uint local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
                    /* 0x71e40  588
                       ?VerticalPass@CMeshWarp@@AAEXPAUtWARP_MESH@@PBUtSFDIBGENERICPARAMS@@@Z */
  iVar2 = *(int *)(param_2 + 0x6c);
  puVar3 = *(uchar **)(param_2 + 0x4c);
  iVar4 = *(int *)(param_2 + 0x1c);
  local_ec = *(int *)(param_2 + 0x3c);
  uVar7 = _SfGetPixelType_4(*(undefined4 *)(param_2 + 0x44));
  uVar8 = _SfGetPixelType_4(*(undefined4 *)(param_2 + 0x14));
  iVar9 = _SfGetPixelBitsPerChannel_8(uVar7,local_f0);
  iVar10 = _SfGetPixelBitsPerChannel_8(uVar8,local_f0);
  _SfXCHGGetFunctionPointers_20(uVar8,uVar7,*(undefined4 *)(param_2 + 0x88),local_c4,0);
  local_38 = *(undefined4 *)(param_2 + 0x70);
  local_34 = *(undefined4 *)(param_2 + 0x40);
  lVar5 = *(long *)(param_2 + 8);
  local_30 = *(undefined4 *)(param_2 + 0x74);
  local_e8 = *(int *)(param_2 + 0xc);
  local_e4 = *(long *)(param_2 + 0x10);
  iVar11 = *(int *)(param_2 + 0x34);
  lVar6 = *(long *)(param_2 + 0x38);
  if (*(int *)(param_2 + 100) == 1) {
    local_b0 = local_a0;
  }
  local_50 = iVar2;
  if (*(int *)(param_2 + 0x68) == 1) {
    local_50 = 0;
  }
  if (1 < iVar11) {
    local_d8 = (double)iVar11;
    local_110 = iVar10 * 2;
    iVar11 = iVar11 + -1;
    local_cc = *(uint *)(param_2 + 4);
    do {
      local_4c = local_cc & 0x3fff;
      local_5c = local_110 - iVar10;
      local_60 = (local_5c >> 3) + iVar4;
      uVar1 = local_cc + local_e8;
      uStack_dc = 0;
      uStack_c8 = 0;
      local_e0 = uVar1;
      RenderVertScanLine(this,param_1,local_c4,lVar5,lVar6,local_e4,local_cc,
                         ((double)local_cc * _DAT_011dba40) / local_d8,
                         ((double)uVar1 * _DAT_011dba40) / local_d8,iVar9,iVar10,iVar2,local_ec,
                         puVar3);
      iVar11 = iVar11 + -1;
      local_110 = local_110 + iVar10;
      local_cc = uVar1;
    } while (iVar11 != 0);
  }
  return;
}


