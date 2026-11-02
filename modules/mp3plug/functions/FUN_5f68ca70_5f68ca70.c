/* Module: mp3plug.dll
   Function: FUN_5f68ca70
   Address: 5f68ca70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f68ca70(HANDLE param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  char cVar1;
  byte bVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  BOOL BVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 local_12c;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  DWORD local_124;
  DWORD local_120;
  uint local_11c;
  int local_118;
  ushort local_114 [4];
  int local_10c;
  uint local_108 [2];
  undefined4 local_100;
  
  if (param_7 != 0) {
    DVar3 = SetFilePointer(param_1,0,(PLONG)0x0,1);
    local_11c = 0;
    local_120 = DVar3;
    iVar4 = FUN_5f688530(param_1,local_114,0,&local_120);
    if (iVar4 < 0) {
      return iVar4;
    }
    SetFilePointer(param_1,local_10c + DVar3,(PLONG)0x0,0);
    iVar4 = FUN_5f688530(param_1,local_114,0,&local_120);
    if (iVar4 < 0) {
      return iVar4;
    }
    uVar5 = FUN_5f688910(local_114);
    *(undefined4 *)(param_2 + 4) = uVar5;
    cVar1 = FUN_5f68b530((int)local_114);
    param_3 = CONCAT31(extraout_var,cVar1);
    uVar8 = FUN_5f68b6c0(param_1,local_120,local_11c,0,0,1,&local_12c,local_108);
    if (local_12c == 0) {
      return 0;
    }
    uVar8 = __alldiv((uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20),0x480,0);
    *(int *)(param_2 + 0xc) = (int)uVar8;
    *(uint *)(param_2 + 0x10) = local_108[0];
    SetFilePointer(param_1,local_120,(PLONG)0x0,0);
  }
  if (*(int *)(param_2 + 4) != 0xac44) {
    return 0;
  }
  bVar2 = (-(param_5 != 0) & 4U) + 0x40;
  if (param_4 != 0) {
    bVar2 = bVar2 | 8;
  }
  local_12c._2_1_ = 0x30;
  if (param_6 != 0) {
    local_12c._2_1_ = 0x31;
  }
  if (param_3 == 1) {
    bVar2 = bVar2 | 0xc0;
  }
  else {
    bVar2 = bVar2 | 0x40;
  }
  local_12c = CONCAT13(bVar2,CONCAT12(local_12c._2_1_,0xfbff));
  local_118 = local_12c;
  BVar6 = WriteFile(param_1,&local_118,4,&local_124,(LPOVERLAPPED)0x0);
  if (BVar6 != 0) {
    puVar7 = &local_100;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    BVar6 = WriteFile(param_1,&local_100,0x20,&local_124,(LPOVERLAPPED)0x0);
    if (BVar6 == 0) {
      return -0x7ffb1ff7;
    }
    local_100._0_1_ = 0x58;
    local_100._1_1_ = 0x69;
    local_100._2_1_ = 0x6e;
    local_100._3_1_ = 0x67;
    BVar6 = WriteFile(param_1,&local_100,4,&local_124,(LPOVERLAPPED)0x0);
    if (BVar6 == 0) {
      return -0x7ffb1ff7;
    }
    local_12c = *(int *)(param_2 + 8);
    local_125 = (undefined1)local_12c;
    local_126 = (undefined1)((uint)local_12c >> 8);
    local_127 = (undefined1)((uint)local_12c >> 0x10);
    local_128 = (undefined1)((uint)local_12c >> 0x18);
    BVar6 = WriteFile(param_1,&local_128,4,&local_124,(LPOVERLAPPED)0x0);
    if (BVar6 != 0) {
      local_12c = *(int *)(param_2 + 0xc);
      local_125 = (undefined1)local_12c;
      local_126 = (undefined1)((uint)local_12c >> 8);
      local_127 = (undefined1)((uint)local_12c >> 0x10);
      local_128 = (undefined1)((uint)local_12c >> 0x18);
      BVar6 = WriteFile(param_1,&local_128,4,&local_124,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        return -0x7ffb1ff7;
      }
      local_12c = *(int *)(param_2 + 0x10);
      local_125 = (undefined1)local_12c;
      local_126 = (undefined1)((uint)local_12c >> 8);
      local_127 = (undefined1)((uint)local_12c >> 0x10);
      local_128 = (undefined1)((uint)local_12c >> 0x18);
      BVar6 = WriteFile(param_1,&local_128,4,&local_124,(LPOVERLAPPED)0x0);
      if (BVar6 != 0) {
        DVar3 = 0x68;
        if ((*(byte *)(param_2 + 8) & 4) != 0) {
          BVar6 = WriteFile(param_1,(LPCVOID)(param_2 + 0x18),100,&local_124,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            return -0x7ffb1ff7;
          }
          DVar3 = 4;
        }
        puVar7 = &local_100;
        for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        BVar6 = WriteFile(param_1,&local_100,DVar3,&local_124,(LPOVERLAPPED)0x0);
        return (-(uint)(BVar6 != 0) & 0x7ffb1ff7) + 0x8004e009;
      }
      return -0x7ffb1ff7;
    }
    return -0x7ffb1ff7;
  }
  return -0x7ffb1ff7;
}


