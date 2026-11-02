/* Module: vegas30k.dll
   Function: FUN_010130d0
   Address: 010130d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010130d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  tagSFVCD_INFO *ptVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  tagSFVCD_INFO local_c [4];
  tagSFVCD_INFO local_8;
  
  puVar2 = param_1;
  iVar6 = 0;
  iVar7 = *(int *)(param_2 + 0x34c);
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    iVar5 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"VCD");
    if (((iVar5 != 0) &&
        (iVar5 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"KARAOKE"), iVar5 != 0)) &&
       (iVar5 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"MPEGAV"), iVar5 != 0)) {
      iVar6 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"SEGMENT");
      if (iVar6 == 0) {
        ptVar4 = sfvcdGetVCD_INFO(*(tagDIR_ENTRY **)*param_1);
        iVar5 = *(int *)(param_2 + 0x350);
        if (((uint)param_1[9] % 0x4b == 0) ||
           (iVar6 = FUN_010128d0(param_1,1,0,0x4b - (uint)param_1[9] % 0x4b,0,0,8,0), -1 < iVar6)) {
          *(undefined4 *)(iVar7 + 0x58) = param_1[9];
          uVar3 = param_1[9];
          param_1._0_2_ = CONCAT11((char)((uint)uVar3 >> 0x10),(char)((uint)uVar3 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)uVar3 >> 8),param_1._0_2_);
          param_1 = (undefined4 *)CONCAT13((char)uVar3,(uint3)param_1);
          *(undefined4 **)(iVar7 + 0x5c) = param_1;
          *(int *)(iVar7 + 0x60) = *(int *)(iVar5 + 0x10) * 0x4b000;
          iVar6 = *(int *)(iVar5 + 0x10) * 0x4b000;
          param_1._0_2_ = CONCAT11((char)((uint)iVar6 >> 0x10),(char)((uint)iVar6 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)iVar6 >> 8),param_1._0_2_);
          param_1 = (undefined4 *)(uint)(uint3)param_1;
          *(undefined4 **)(iVar7 + 100) = param_1;
          iVar7 = lstrcmpA((LPCSTR)(param_2 + 0x110),"ITEM0001.DAT");
          if (iVar7 == 0) {
            cdr_LBAToMSF((_cdrmsf *)local_c,puVar2[9] + 0x96);
            ptVar4[0x78] = local_c[0];
            ptVar4[0x79] = local_8;
            ptVar4[0x7a] = (tagSFVCD_INFO)0x0;
          }
          iVar6 = FUN_010128d0(puVar2,0xc,param_2,*(undefined4 *)(iVar5 + 4),1,0,0x62,0);
          if ((-1 < iVar6) &&
             (iVar7 = *(int *)(iVar5 + 0x10) * 0x96 - *(int *)(iVar5 + 4), iVar7 != 0)) {
            iVar7 = FUN_010128d0(puVar2,1,0,iVar7,1,0,0x60,0x1f);
            return iVar7;
          }
        }
      }
      else {
        if ((param_1[0xf] != -1) && (0x20000 < *(uint *)(iVar7 + 8))) {
          *(uint *)(iVar7 + 0x18) = (-(uint)(*(uint *)(iVar7 + 8) < 0x80000) & 0xfffffffe) + 4;
          *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 2;
        }
        *(undefined4 *)(iVar7 + 0x58) = param_1[9];
        uVar3 = param_1[9];
        param_1._0_2_ = CONCAT11((char)((uint)uVar3 >> 0x10),(char)((uint)uVar3 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar3 >> 8),param_1._0_2_);
        param_1 = (undefined4 *)CONCAT13((char)uVar3,(uint3)param_1);
        *(undefined4 **)(iVar7 + 0x5c) = param_1;
        *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(iVar7 + 8);
        uVar3 = *(undefined4 *)(iVar7 + 8);
        param_1._0_2_ = CONCAT11((char)((uint)uVar3 >> 0x10),(char)((uint)uVar3 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar3 >> 8),param_1._0_2_);
        param_1 = (undefined4 *)CONCAT13((char)uVar3,(uint3)param_1);
        *(undefined4 **)(iVar7 + 100) = param_1;
        iVar6 = FUN_010128d0(puVar2,0xb,param_2,
                             (uint)((*(uint *)(iVar7 + 8) & 0x7ff) != 0) +
                             (*(uint *)(iVar7 + 8) >> 0xb),0,0,8,0);
      }
    }
  }
  else {
    iVar7 = 0;
    while( true ) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if (iVar5 <= iVar7) break;
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      if ((iVar7 < 0) || (iVar6 + -1 < iVar7)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(piVar1[2] + iVar7 * 4);
      }
      iVar6 = FUN_010130d0(param_1,uVar3);
      if (iVar6 < 0) {
        return iVar6;
      }
      iVar7 = iVar7 + 1;
    }
  }
  return iVar6;
}


