/* Module: mp3plug.dll
   Function: FUN_5f68c550
   Address: 5f68c550
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f68c550(void *this,uint param_1,int param_2)

{
  DWORD nNumberOfBytesToRead;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  LONG local_44;
  DWORD local_40 [4];
  uint local_30;
  LONG local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f72ca00;
  puStack_10 = &DAT_5f72a230;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff98;
  if (*(int *)((int)this + 4) == -1) {
    return -0x7ff8ffa9;
  }
  uVar8 = *(uint *)((int)this + 0x16e8);
  uVar7 = param_1 + uVar8;
  uVar8 = param_2 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(param_1,uVar8);
  if ((uVar7 == *(uint *)((int)this + 8)) && (uVar8 == *(uint *)((int)this + 0xc))) {
    return 0;
  }
  if ((*(int *)((int)this + 0x24) <= (int)uVar8) &&
     ((*(int *)((int)this + 0x24) < (int)uVar8 || (*(uint *)((int)this + 0x20) < uVar7)))) {
    return -0x7ff5ffda;
  }
  ExceptionList = &local_14;
  FUN_5f710580((int *)((int)this + 0x834));
  local_28 = FUN_5f68bf10(this,uVar7,uVar8,&local_30,&local_24);
  if (local_28 < 0) {
    ExceptionList = local_14;
    return local_28;
  }
  local_44 = local_2c;
  SetFilePointer(*(HANDLE *)((int)this + 4),local_30,&local_44,0);
  *(undefined4 *)((int)this + 0x830) = 0;
  *(uint *)((int)this + 8) = local_24;
  *(undefined4 *)((int)this + 0xc) = local_20;
  *(uint *)((int)this + 0x10) = local_30;
  *(LONG *)((int)this + 0x14) = local_2c;
  *(undefined4 *)((int)this + 0x874) = 0;
  *(undefined4 *)((int)this + 0x860) = 0;
  *(undefined4 *)((int)this + 0x864) = 0;
  while( true ) {
    puVar9 = (uint *)((int)this + 0x10);
    uVar5 = *(uint *)((int)this + 0x864);
    uVar4 = *puVar9;
    *puVar9 = *puVar9 + uVar5;
    *(int *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar4,uVar5);
    if (*(int *)((int)this + 0x860) == 0) {
      nNumberOfBytesToRead = 0x1000;
      uVar4 = *(uint *)((int)this + 0x844);
      if (1 < (int)uVar4) {
        nNumberOfBytesToRead = uVar4 * (int)(0x1000 / (ulonglong)uVar4);
      }
      BVar1 = ReadFile(*(HANDLE *)((int)this + 4),*(LPVOID *)((int)this + 0x868),
                       nNumberOfBytesToRead,local_40,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        ExceptionList = local_14;
        return -0x7ffb1ff8;
      }
      *(int *)((int)this + 0x860) = *(int *)((int)this + 0x860) + local_40[0];
    }
    *(undefined4 *)((int)this + 0x864) = 0;
    *(undefined4 *)((int)this + 0x874) = 0;
    local_8 = 0;
    iVar2 = FUN_5f70ffe0((int *)((int)this + 0x834),(int *)((int)this + 0x85c),
                         (int *)((int)this + 0x86c));
    local_8 = 0xffffffff;
    if (iVar2 != 0) {
      uVar8 = *(uint *)((int)this + 0x864);
      iVar2 = ((int)uVar8 >> 0x1f) + *(int *)((int)this + 0x14) +
              (uint)CARRY4(uVar8,*(uint *)((int)this + 0x10));
      *(uint *)((int)this + 0x18) = uVar8 + *(uint *)((int)this + 0x10);
      *(int *)((int)this + 0x1c) = iVar2;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x18);
      *(int *)((int)this + 0x14) = iVar2;
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 8);
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0xc);
      ExceptionList = local_14;
      return -0x7ffb1ff8;
    }
    *(undefined4 *)((int)this + 0x830) = 0;
    iVar2 = *(int *)((int)this + 0x860);
    if ((iVar2 == 0) && (*(int *)((int)this + 0x874) == 0)) break;
    iVar6 = *(int *)((int)this + 0x864);
    if (((iVar6 != 0) && (iVar6 < iVar2)) && (iVar3 = 0, iVar2 != iVar6 && -1 < iVar2 - iVar6)) {
      do {
        *(undefined1 *)(*(int *)((int)this + 0x868) + iVar3) =
             *(undefined1 *)(iVar6 + *(int *)((int)this + 0x868) + iVar3);
        iVar3 = iVar3 + 1;
        iVar6 = *(int *)((int)this + 0x864);
      } while (iVar3 < *(int *)((int)this + 0x860) - iVar6);
    }
    *(int *)((int)this + 0x860) = *(int *)((int)this + 0x860) - *(int *)((int)this + 0x864);
    if (0 < *(int *)((int)this + 0x874)) {
      iVar2 = *(int *)((int)this + 0x830);
      uVar5 = (uint)*(ushort *)((int)this + 0x88c);
      uVar4 = (*(int *)((int)this + 0x874) - iVar2) / (int)uVar5;
      iVar6 = ((int)uVar4 >> 0x1f) + *(int *)((int)this + 0xc) +
              (uint)CARRY4(uVar4,*(uint *)((int)this + 8));
      if (((int)uVar8 <= iVar6) &&
         (((int)uVar8 < iVar6 || (uVar7 <= uVar4 + *(uint *)((int)this + 8))))) {
        *(uint *)((int)this + 0x830) = (uVar7 - *(int *)((int)this + 8)) * uVar5 + iVar2;
        *(uint *)((int)this + 8) = uVar7;
        *(uint *)((int)this + 0xc) = uVar8;
        ExceptionList = local_14;
        return local_28;
      }
      uVar4 = *(uint *)((int)this + 0x1c);
      if (((int)uVar4 <= *(int *)((int)this + 0x14)) &&
         (((int)uVar4 < *(int *)((int)this + 0x14) ||
          (*(uint *)((int)this + 0x18) <= *(uint *)((int)this + 0x10))))) {
        uVar10 = __alldiv(*(uint *)((int)this + 0x18),uVar4,uVar5,0);
        *(undefined8 *)((int)this + 8) = uVar10;
        ExceptionList = local_14;
        return -0x7ff5ffda;
      }
      uVar5 = *(int *)((int)this + 0x874) / (int)uVar5;
      uVar4 = *(uint *)((int)this + 8);
      *(uint *)((int)this + 8) = uVar5 + *(uint *)((int)this + 8);
      *(uint *)((int)this + 0xc) =
           ((int)uVar5 >> 0x1f) + *(int *)((int)this + 0xc) + (uint)CARRY4(uVar5,uVar4);
      *(int *)((int)this + 0x830) = iVar2 + *(int *)((int)this + 0x874);
    }
  }
  uVar8 = *(uint *)((int)this + 0x864);
  iVar2 = ((int)uVar8 >> 0x1f) + *(int *)((int)this + 0x14) +
          (uint)CARRY4(uVar8,*(uint *)((int)this + 0x10));
  *(uint *)((int)this + 0x18) = uVar8 + *(uint *)((int)this + 0x10);
  *(int *)((int)this + 0x1c) = iVar2;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x18);
  *(int *)((int)this + 0x14) = iVar2;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0xc);
  ExceptionList = local_14;
  return -0x7ff5ffda;
}


