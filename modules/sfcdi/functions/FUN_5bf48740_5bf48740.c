/* Module: sfcdi.dll
   Function: FUN_5bf48740
   Address: 5bf48740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf48740(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1;
  iVar3 = FUN_5bf47a60(param_1,1,0,0x4b - *(int *)(param_1 + 0x24),0,0,8,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = FUN_5bf3e580(param_2,"KARAOKE");
  if ((iVar3 == 0) && (iVar3 = FUN_5bf47a60(param_1,1,0,0x4b,0,0,8,0), iVar3 < 0)) {
    return iVar3;
  }
  iVar3 = FUN_5bf3e580(param_2,"VCD");
  if ((iVar3 != 0) && (iVar4 = FUN_5bf3e580(iVar3,"INFO.VCD"), iVar4 != 0)) {
    iVar1 = *(int *)(iVar4 + 0x34c);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
    param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
    *(int *)(iVar1 + 0x5c) = param_1;
    *(undefined4 *)(iVar1 + 0x60) = 0x800;
    *(undefined4 *)(iVar1 + 100) = 0x80000;
    iVar4 = FUN_5bf47a60(iVar5,5,iVar4,1,0,0,0x88,0);
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar4 = FUN_5bf3e580(iVar3,"ENTRIES.VCD");
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x34c);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar5 + 0x24);
      uVar2 = *(undefined4 *)(iVar5 + 0x24);
      param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
      param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
      *(int *)(iVar1 + 0x5c) = param_1;
      *(undefined4 *)(iVar1 + 0x60) = 0x800;
      *(undefined4 *)(iVar1 + 100) = 0x80000;
      iVar4 = FUN_5bf47a60(iVar5,6,iVar4,1,0,0,0x88,0);
      if (iVar4 < 0) {
        return iVar4;
      }
      iVar4 = FUN_5bf3e580(iVar3,"LOT.VCD");
      if (iVar4 == 0) {
        iVar4 = FUN_5bf47a60(iVar5,1,0,0x20,0,0,8,0);
      }
      else {
        iVar1 = *(int *)(iVar4 + 0x34c);
        *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar5 + 0x24);
        uVar2 = *(undefined4 *)(iVar5 + 0x24);
        param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
        param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
        *(int *)(iVar1 + 0x5c) = param_1;
        *(undefined4 *)(iVar1 + 0x60) = 0x10000;
        *(undefined4 *)(iVar1 + 100) = 0x100;
        iVar4 = FUN_5bf47a60(iVar5,7,iVar4,0x20,0,0,8,0);
      }
      if (iVar4 < 0) {
        return iVar4;
      }
      iVar3 = FUN_5bf3e580(iVar3,"PSD.VCD");
      if (iVar3 == 0) {
        return iVar4;
      }
      iVar4 = *(int *)(iVar3 + 0x34c);
      iVar1 = *(int *)(iVar3 + 0x350);
      *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar5 + 0x24);
      uVar2 = *(undefined4 *)(iVar5 + 0x24);
      param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
      param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
      *(int *)(iVar4 + 0x5c) = param_1;
      *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(iVar1 + 0x14);
      uVar2 = *(undefined4 *)(iVar1 + 0x14);
      param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
      param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
      *(int *)(iVar4 + 100) = param_1;
      iVar5 = FUN_5bf47a60(iVar5,8,iVar3,
                           (uint)((*(uint *)(iVar1 + 0x14) & 0x7ff) != 0) +
                           (*(uint *)(iVar1 + 0x14) >> 0xb),0,0,8,0);
      return iVar5;
    }
  }
  return -0x7ff8ffa9;
}


