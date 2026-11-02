/* Module: sfcdi.dll
   Function: FUN_5bf48260
   Address: 5bf48260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf48260(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_c [4];
  undefined1 local_8;
  
  puVar3 = param_1;
  iVar6 = 0;
  iVar7 = *(int *)(param_2 + 0x34c);
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    iVar5 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"VCD");
    if (((iVar5 != 0) &&
        (iVar5 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"KARAOKE"), iVar5 != 0)) &&
       (iVar5 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"MPEGAV"), iVar5 != 0)) {
      iVar6 = lstrcmpiA((LPCSTR)(*(int *)(param_2 + 0x21c) + 0x110),"SEGMENT");
      if (iVar6 == 0) {
        iVar4 = FUN_5bf3f280(*(int *)*param_1);
        iVar5 = *(int *)(param_2 + 0x350);
        if (((uint)param_1[9] % 0x4b == 0) ||
           (iVar6 = FUN_5bf47a60((int)param_1,1,0,0x4b - (uint)param_1[9] % 0x4b,0,0,8,0),
           -1 < iVar6)) {
          *(undefined4 *)(iVar7 + 0x58) = param_1[9];
          uVar2 = param_1[9];
          param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),param_1._0_2_);
          param_1 = (undefined4 *)CONCAT13((char)uVar2,(uint3)param_1);
          *(undefined4 **)(iVar7 + 0x5c) = param_1;
          *(int *)(iVar7 + 0x60) = *(int *)(iVar5 + 0x10) * 0x4b000;
          iVar6 = *(int *)(iVar5 + 0x10) * 0x4b000;
          param_1._0_2_ = CONCAT11((char)((uint)iVar6 >> 0x10),(char)((uint)iVar6 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)iVar6 >> 8),param_1._0_2_);
          param_1 = (undefined4 *)(uint)(uint3)param_1;
          *(undefined4 **)(iVar7 + 100) = param_1;
          iVar7 = lstrcmpA((LPCSTR)(param_2 + 0x110),"ITEM0001.DAT");
          if (iVar7 == 0) {
            FUN_5bf2b5e0((uint *)local_c,puVar3[9] + 0x96);
            *(undefined1 *)(iVar4 + 0x78) = local_c[0];
            *(undefined1 *)(iVar4 + 0x79) = local_8;
            *(undefined1 *)(iVar4 + 0x7a) = 0;
          }
          iVar6 = FUN_5bf47a60((int)puVar3,0xc,param_2,*(int *)(iVar5 + 4),1,0,0x62,0);
          if ((-1 < iVar6) &&
             (iVar7 = *(int *)(iVar5 + 0x10) * 0x96 - *(int *)(iVar5 + 4), iVar7 != 0)) {
            iVar7 = FUN_5bf47a60((int)puVar3,1,0,iVar7,1,0,0x60,0x1f);
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
        uVar2 = param_1[9];
        param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),param_1._0_2_);
        param_1 = (undefined4 *)CONCAT13((char)uVar2,(uint3)param_1);
        *(undefined4 **)(iVar7 + 0x5c) = param_1;
        *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(iVar7 + 8);
        uVar2 = *(undefined4 *)(iVar7 + 8);
        param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),param_1._0_2_);
        param_1 = (undefined4 *)CONCAT13((char)uVar2,(uint3)param_1);
        *(undefined4 **)(iVar7 + 100) = param_1;
        iVar6 = FUN_5bf47a60((int)puVar3,0xb,param_2,
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
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar1[2] + iVar7 * 4);
      }
      iVar6 = FUN_5bf48260(param_1,iVar6);
      if (iVar6 < 0) {
        return iVar6;
      }
      iVar7 = iVar7 + 1;
    }
  }
  return iVar6;
}


