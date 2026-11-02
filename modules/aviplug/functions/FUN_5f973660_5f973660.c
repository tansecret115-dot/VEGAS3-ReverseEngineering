/* Module: aviplug.dll
   Function: FUN_5f973660
   Address: 5f973660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973660(uint *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  lVar4 = DAT_5f9dff68;
  iVar6 = 5;
  do {
    iVar1 = *param_3;
    param_3 = param_3 + 1;
    iVar7 = 6;
    do {
      uVar14 = 0;
      uVar2 = *param_1;
      plVar9 = param_2 + 1;
      uVar12 = param_1[2];
      puVar8 = param_1 + 2;
      *param_2 = *(longlong *)param_1;
      while (uVar12 != 0x1556) {
        uVar11 = (int)puVar8[1] >> 0x10;
        uVar10 = (int)((puVar8[1] ^ uVar11) - uVar11) >>
                 (ulonglong)
                 *(uint *)(&DAT_5f9daa78 + (uVar12 >> 0x10) * 4 + (uVar2 & 3) * 0x10 + iVar1 * 0x40)
        ;
        iVar5 = (uVar12 & 0xffff) + uVar14;
        uVar12 = -(uint)(uVar10 == 0);
        uVar11 = (uVar10 ^ uVar11) - uVar11;
        iVar3 = *(int *)(&DAT_5f9dff70 + iVar5 * 4);
        uVar13 = -(uint)(iVar3 < (int)uVar10);
        puVar8 = puVar8 + 2;
        plVar9[1] = (ulonglong)uVar11 << 0x20;
        uVar14 = iVar5 + (uint)(uVar10 == 0) & uVar12;
        *plVar9 = CONCAT44(~uVar13 & uVar11,iVar5 + uVar13);
        plVar9 = plVar9 + 1 + uVar12 + (iVar3 < (int)uVar10);
        uVar12 = *puVar8;
      }
      *plVar9 = lVar4;
      param_1 = puVar8 + 2;
      param_2 = plVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


