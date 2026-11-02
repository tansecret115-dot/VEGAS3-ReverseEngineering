/* Module: mp3plug.dll
   Function: FUN_5f689790
   Address: 5f689790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f6897ed) */

void __thiscall FUN_5f689790(void *this,undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int local_3c;
  undefined8 local_34;
  uint local_2c;
  int iStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  ushort local_c [6];
  
  local_2c = *(uint *)((int)this + 0x20);
  iStack_28 = *(int *)((int)this + 0x24);
  *(uint *)((int)this + 0x82c) = *(uint *)((int)this + 0x82c) | 1;
  lVar7 = ftol();
  uVar3 = (ulonglong)lVar7 >> 0x20;
  local_14 = (undefined4)lVar7;
  local_3c = 1;
  if (lVar7 <= CONCAT44(iStack_28,local_2c)) {
    while( true ) {
      local_24._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
      uVar5 = local_24._4_4_;
      local_24._0_4_ = (undefined4)lVar7;
      uVar4 = (undefined4)local_24;
      if (9 < local_3c) break;
      local_24 = lVar7;
      ftol();
      lVar8 = ftol();
      local_34 = lVar8 + CONCAT44(param_2,param_1);
      local_1c = local_34;
      SetFilePointer(*(HANDLE *)((int)this + 4),(LONG)local_34,(PLONG)((int)&local_1c + 4),0);
      iVar6 = FUN_5f688530(*(HANDLE *)((int)this + 4),local_c,1,(uint *)&local_34);
      if (iVar6 < 0) {
        return;
      }
      FUN_5f68c2e0(this,uVar4,uVar5,(uint)local_34,local_34._4_4_);
      lVar1 = CONCAT44((int)uVar3,local_14);
      lVar2 = lVar7 + lVar1;
      iVar6 = (int)((ulonglong)lVar2 >> 0x20);
      lVar8 = lVar7 + lVar1;
      local_34 = local_34 + *(longlong *)((int)this + 0x1710);
      local_3c = local_3c + 1;
      local_2c = *(uint *)((int)this + 0x20);
      iStack_28 = *(int *)((int)this + 0x24);
      lVar7 = lVar7 + lVar1;
      if (iStack_28 <= iVar6) {
        if (iStack_28 < iVar6) {
          return;
        }
        lVar7 = lVar8;
        if (local_2c < (uint)lVar2) {
          return;
        }
      }
    }
  }
  return;
}


