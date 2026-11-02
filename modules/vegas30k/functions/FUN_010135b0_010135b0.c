/* Module: vegas30k.dll
   Function: FUN_010135b0
   Address: 010135b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_010135b0(int param_1,tagDIR_ENTRY *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  tagDIR_ENTRY *ptVar6;
  tagDIR_ENTRY *ptVar7;
  
  iVar4 = param_1;
  puVar5 = (undefined1 *)FUN_010128d0(param_1,1,0,0x4b - *(int *)(param_1 + 0x24),0,0,8,0);
  if ((int)puVar5 < 0) {
    return puVar5;
  }
  ptVar6 = DtGetLocalDirEntry(param_2,"KARAOKE");
  if ((ptVar6 == (tagDIR_ENTRY *)0x0) &&
     (puVar5 = (undefined1 *)FUN_010128d0(param_1,1,0,0x4b,0,0,8,0), (int)puVar5 < 0)) {
    return puVar5;
  }
  ptVar6 = DtGetLocalDirEntry(param_2,"VCD");
  if ((ptVar6 != (tagDIR_ENTRY *)0x0) &&
     (ptVar7 = DtGetLocalDirEntry(ptVar6,"INFO.VCD"), ptVar7 != (tagDIR_ENTRY *)0x0)) {
    iVar1 = *(int *)(ptVar7 + 0x34c);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
    param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
    *(int *)(iVar1 + 0x5c) = param_1;
    *(undefined4 *)(iVar1 + 0x60) = 0x800;
    *(undefined4 *)(iVar1 + 100) = 0x80000;
    puVar5 = (undefined1 *)FUN_010128d0(iVar4,5,ptVar7,1,0,0,0x88,0);
    if ((int)puVar5 < 0) {
      return puVar5;
    }
    ptVar7 = DtGetLocalDirEntry(ptVar6,"ENTRIES.VCD");
    if (ptVar7 != (tagDIR_ENTRY *)0x0) {
      iVar1 = *(int *)(ptVar7 + 0x34c);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar4 + 0x24);
      uVar2 = *(undefined4 *)(iVar4 + 0x24);
      param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
      param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
      *(int *)(iVar1 + 0x5c) = param_1;
      *(undefined4 *)(iVar1 + 0x60) = 0x800;
      *(undefined4 *)(iVar1 + 100) = 0x80000;
      puVar5 = (undefined1 *)FUN_010128d0(iVar4,6,ptVar7,1,0,0,0x88,0);
      if ((int)puVar5 < 0) {
        return puVar5;
      }
      ptVar7 = DtGetLocalDirEntry(ptVar6,"LOT.VCD");
      if (ptVar7 == (tagDIR_ENTRY *)0x0) {
        puVar5 = (undefined1 *)FUN_010128d0(iVar4,1,0,0x20,0,0,8,0);
      }
      else {
        iVar1 = *(int *)(ptVar7 + 0x34c);
        *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar4 + 0x24);
        uVar2 = *(undefined4 *)(iVar4 + 0x24);
        param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
        param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
        *(int *)(iVar1 + 0x5c) = param_1;
        *(undefined4 *)(iVar1 + 0x60) = 0x10000;
        *(undefined4 *)(iVar1 + 100) = 0x100;
        puVar5 = (undefined1 *)FUN_010128d0(iVar4,7,ptVar7,0x20,0,0,8,0);
      }
      if ((int)puVar5 < 0) {
        return puVar5;
      }
      ptVar6 = DtGetLocalDirEntry(ptVar6,"PSD.VCD");
      if (ptVar6 == (tagDIR_ENTRY *)0x0) {
        return puVar5;
      }
      iVar1 = *(int *)(ptVar6 + 0x34c);
      iVar3 = *(int *)(ptVar6 + 0x350);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar4 + 0x24);
      uVar2 = *(undefined4 *)(iVar4 + 0x24);
      param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
      param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
      *(int *)(iVar1 + 0x5c) = param_1;
      *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar3 + 0x14);
      uVar2 = *(undefined4 *)(iVar3 + 0x14);
      param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
      param_1 = CONCAT13((char)uVar2,(undefined3)param_1);
      *(int *)(iVar1 + 100) = param_1;
      puVar5 = (undefined1 *)
               FUN_010128d0(iVar4,8,ptVar6,
                            (uint)((*(uint *)(iVar3 + 0x14) & 0x7ff) != 0) +
                            (*(uint *)(iVar3 + 0x14) >> 0xb),0,0,8,0);
      return puVar5;
    }
  }
  return &DAT_80070057;
}


