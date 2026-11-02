/* Module: mp3plug.dll
   Function: FUN_5f689660
   Address: 5f689660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f6896d5) */

void __thiscall FUN_5f689660(void *this,uint param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  uint local_24;
  int local_20;
  uint local_1c;
  LONG LStack_18;
  undefined4 local_14;
  ushort local_c [6];
  
  local_1c = *(undefined4 *)((int)this + 0x20);
  LStack_18 = *(LONG *)((int)this + 0x24);
  *(uint *)((int)this + 0x82c) = *(uint *)((int)this + 0x82c) | 1;
  lVar7 = ftol();
  uVar4 = (ulonglong)lVar7 >> 0x20;
  local_14 = (undefined4)lVar7;
  local_24 = *(uint *)((int)this + 0x1710) + param_1;
  local_20 = *(int *)((int)this + 0x1714) + param_2 +
             (uint)CARRY4(*(uint *)((int)this + 0x1710),param_1);
  param_1 = 0;
  if (lVar7 <= CONCAT44(LStack_18,local_1c)) {
    while( true ) {
      if (9 < (int)param_1) break;
      local_1c = local_24;
      LStack_18 = local_20;
      SetFilePointer(*(HANDLE *)((int)this + 4),local_24,&LStack_18,0);
      iVar5 = FUN_5f688530(*(HANDLE *)((int)this + 4),local_c,1,&local_24);
      if (iVar5 < 0) {
        return;
      }
      FUN_5f68c2e0(this,(int)lVar7,(int)((ulonglong)lVar7 >> 0x20),local_24,local_20);
      lVar2 = CONCAT44((int)uVar4,local_14);
      lVar3 = lVar7 + lVar2;
      iVar5 = (int)((ulonglong)lVar3 >> 0x20);
      lVar1 = lVar7 + lVar2;
      bVar6 = CARRY4(local_24,*(uint *)((int)this + 0x1710));
      local_24 = local_24 + *(uint *)((int)this + 0x1710);
      local_20 = local_20 + *(int *)((int)this + 0x1714) + (uint)bVar6;
      param_1 = param_1 + 1;
      lVar7 = lVar7 + lVar2;
      if (*(int *)((int)this + 0x24) <= iVar5) {
        if (*(int *)((int)this + 0x24) < iVar5) {
          return;
        }
        lVar7 = lVar1;
        if (*(uint *)((int)this + 0x20) < (uint)lVar3) {
          return;
        }
      }
    }
  }
  return;
}


