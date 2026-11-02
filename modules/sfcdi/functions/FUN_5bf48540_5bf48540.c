/* Module: sfcdi.dll
   Function: FUN_5bf48540
   Address: 5bf48540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf48540(int param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = param_2;
  iVar5 = *(int *)(param_2 + 0x34c);
  FUN_5bf481e0(param_1,param_2);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  param_2._0_2_ = CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18));
  param_2._0_3_ = CONCAT12((char)((uint)uVar1 >> 8),(undefined2)param_2);
  param_2 = CONCAT13((char)uVar1,(uint3)param_2);
  *(uint *)(iVar5 + 0x5c) = param_2;
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x10) << 0xb;
  iVar4 = *(int *)(iVar5 + 0x10) << 0xb;
  param_2._0_2_ = CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18));
  param_2._0_3_ = CONCAT12((char)((uint)iVar4 >> 8),(undefined2)param_2);
  param_2 = (uint)(uint3)param_2;
  *(uint *)(iVar5 + 100) = param_2;
  *(undefined4 *)(iVar5 + 0xad) = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  param_2._0_2_ = CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18));
  param_2._0_3_ = CONCAT12((char)((uint)uVar1 >> 8),(undefined2)param_2);
  param_2 = CONCAT13((char)uVar1,(uint3)param_2);
  *(uint *)(iVar5 + 0xb1) = param_2;
  *(int *)(iVar5 + 0xb5) = *(int *)(iVar5 + 0x10) << 0xb;
  iVar4 = *(int *)(iVar5 + 0x10) << 0xb;
  param_2._0_2_ = CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18));
  param_2._0_3_ = CONCAT12((char)((uint)iVar4 >> 8),(undefined2)param_2);
  param_2 = (uint)(uint3)param_2;
  *(uint *)(iVar5 + 0xb9) = param_2;
  if (*(int *)(uVar3 + 0x21c) == 0) {
    *(undefined4 *)(iVar5 + 0x102) = *(undefined4 *)(param_1 + 0x24);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    param_2._0_2_ = CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18));
    param_2._0_3_ = CONCAT12((char)((uint)uVar1 >> 8),(undefined2)param_2);
    param_2 = CONCAT13((char)uVar1,(uint3)param_2);
    *(uint *)(iVar5 + 0x106) = param_2;
    *(int *)(iVar5 + 0x10a) = *(int *)(iVar5 + 0x10) << 0xb;
    iVar4 = *(int *)(iVar5 + 0x10) << 0xb;
    param_2._0_2_ = CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18));
    param_2._0_3_ = CONCAT12((char)((uint)iVar4 >> 8),(undefined2)param_2);
    param_2 = (uint)(uint3)param_2;
    *(uint *)(iVar5 + 0x10e) = param_2;
  }
  else {
    iVar4 = *(int *)(*(int *)(uVar3 + 0x21c) + 0x34c);
    *(undefined4 *)(iVar5 + 0x102) = *(undefined4 *)(iVar4 + 0xad);
    *(undefined4 *)(iVar5 + 0x106) = *(undefined4 *)(iVar4 + 0xb1);
    iVar4 = *(int *)(*(int *)(uVar3 + 0x21c) + 0x34c);
    *(undefined4 *)(iVar5 + 0x10a) = *(undefined4 *)(iVar4 + 0xb5);
    *(undefined4 *)(iVar5 + 0x10e) = *(undefined4 *)(iVar4 + 0xb9);
  }
  iVar5 = FUN_5bf47a60(param_1,10,uVar3,*(int *)(iVar5 + 0x10),0,0,8,0);
  if (-1 < iVar5) {
    iVar4 = 0;
    while( true ) {
      piVar2 = *(int **)(uVar3 + 0x214);
      if (piVar2 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar2;
      }
      if (iVar7 <= iVar4) break;
      if (piVar2 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar2;
      }
      if ((iVar4 < 0) || (iVar7 + -1 < iVar4)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(piVar2[2] + iVar4 * 4);
      }
      if (((*(uint *)(uVar6 + 8) & 0x10) != 0) && (iVar5 = FUN_5bf48540(param_1,uVar6), iVar5 < 0))
      {
        return iVar5;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return iVar5;
}


