/* Module: pngu3266.dll
   Function: FUN_6061e160
   Address: 6061e160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061e160(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  bVar2 = true;
  DVar3 = GetTickCount();
  uVar4 = *(uint *)((int)this + 0x28);
  if (DVar3 < uVar4) {
    uVar4 = (DVar3 - uVar4) - 1;
  }
  else {
    uVar4 = DVar3 - uVar4;
  }
  if (*(uint *)((int)this + 0x48) <= uVar4) {
    local_8 = 1;
  }
  if ((param_1 == 0) && (*(uint *)((int)this + 0x44) <= uVar4)) {
    local_c = 1;
  }
  if ((local_c != 0) || (local_8 != 0)) {
    iVar7 = *(int *)((int)this + 0x24) + uVar4 * 1000;
    *(int *)((int)this + 0x24) = iVar7;
    if (999999 < iVar7) {
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + iVar7 / 1000000;
      *(int *)((int)this + 0x24) = iVar7 % 1000000;
    }
    *(DWORD *)((int)this + 0x28) = DVar3;
  }
  if (local_8 == 0 && local_c == 0) {
    iVar7 = *(int *)((int)this + 8);
    bVar2 = false;
    if (*(int *)(iVar7 + 0x80c) != 0) {
      local_14 = *(int *)(iVar7 + 0x818);
      local_10 = *(undefined4 *)(iVar7 + 0x81c);
      iVar7 = FUN_6061e520(&local_14,(int *)((int)this + 0x34));
      if (iVar7 != 0) {
        bVar2 = true;
        *(int *)((int)this + 0x34) = *(int *)(*(int *)((int)this + 8) + 0x818);
        *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(*(int *)((int)this + 8) + 0x81c);
      }
    }
    iVar7 = *(int *)((int)this + 0x10);
    if (*(int *)(iVar7 + 0x80c) != 0) {
      local_1c = *(int *)(iVar7 + 0x818);
      local_18 = *(undefined4 *)(iVar7 + 0x81c);
      iVar7 = FUN_6061e520(&local_1c,(int *)((int)this + 0x3c));
      if (iVar7 != 0) {
        bVar2 = true;
        *(int *)((int)this + 0x3c) = *(int *)(*(int *)((int)this + 0x10) + 0x818);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(*(int *)((int)this + 0x10) + 0x81c);
      }
    }
  }
  if (bVar2) {
    if ((local_8 != 0) && ((*(int **)((int)this + 0x10))[0x203] != 0)) {
      (**(code **)(**(int **)((int)this + 0x10) + 4))
                (*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24));
      for (iVar7 = 0;
          (((piVar1 = *(int **)((int)this + 0x10), piVar1[0x203] != 0 && (piVar1[0x206] == 0)) &&
           (piVar1[0x207] == 0)) && (iVar7 < 100)); iVar7 = iVar7 + iVar5) {
        iVar5 = (**(code **)(*piVar1 + 4))
                          (*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24));
      }
    }
    if ((local_c != 0) && ((*(int **)((int)this + 8))[0x203] != 0)) {
      (**(code **)(**(int **)((int)this + 8) + 4))
                (*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24));
      for (iVar7 = 0;
          ((piVar1 = *(int **)((int)this + 8), piVar1[0x203] != 0 && (piVar1[0x206] == 0)) &&
          ((piVar1[0x207] == 0 && (iVar7 < 100)))); iVar7 = iVar7 + iVar5) {
        iVar5 = (**(code **)(*piVar1 + 4))
                          (*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24));
      }
      iVar7 = *(int *)((int)this + 8);
      bVar2 = false;
      if (*(int *)(iVar7 + 0x80c) == 0) {
        if ((*(uint *)((int)this + 0x58) < 0x14) && (4 < 0x14 - *(uint *)((int)this + 0x58))) {
          bVar2 = true;
          *(undefined4 *)((int)this + 0x58) = 0x14;
        }
      }
      else {
        uVar4 = *(uint *)((int)this + 0x58);
        if (5 < uVar4) {
          iVar5 = *(int *)(iVar7 + 0x818) - *(int *)((int)this + 0x20);
          for (iVar7 = *(int *)(iVar7 + 0x81c) - *(int *)((int)this + 0x24); iVar7 < 0;
              iVar7 = iVar7 + 1000000) {
            iVar5 = iVar5 + -1;
          }
          if (iVar5 < 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = iVar7 / 1000 + iVar5 * 1000;
          }
          if (((0 < (int)uVar6) && (uVar6 < uVar4)) && (4 < uVar4 - uVar6)) {
            bVar2 = true;
            if ((int)uVar6 < 5) {
              uVar6 = 5;
            }
            *(uint *)((int)this + 0x58) = uVar6;
          }
        }
      }
      if (bVar2) {
        FUN_6061ea00(*(UINT_PTR **)((int)this + 0x54));
        FUN_6061ec30(*(void **)((int)this + 0x54),*(undefined4 *)((int)this + 0x58));
        FUN_6061eb40(*(UINT_PTR **)((int)this + 0x54));
      }
    }
    iVar7 = *(int *)((int)this + 8);
    if (*(int *)(iVar7 + 0x80c) == 0) {
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x58);
    }
    else {
      iVar5 = *(int *)(iVar7 + 0x818) - *(int *)((int)this + 0x20);
      for (iVar7 = *(int *)(iVar7 + 0x81c) - *(int *)((int)this + 0x24); iVar7 < 0;
          iVar7 = iVar7 + 1000000) {
        iVar5 = iVar5 + -1;
      }
      if (iVar5 < 0) {
        *(undefined4 *)((int)this + 0x44) = 0;
      }
      else {
        *(int *)((int)this + 0x44) = iVar7 / 1000 + iVar5 * 1000;
      }
    }
    iVar7 = *(int *)((int)this + 0x10);
    if (*(int *)(iVar7 + 0x80c) != 0) {
      iVar5 = *(int *)(iVar7 + 0x818) - *(int *)((int)this + 0x20);
      for (iVar7 = *(int *)(iVar7 + 0x81c) - *(int *)((int)this + 0x24); iVar7 < 0;
          iVar7 = iVar7 + 1000000) {
        iVar5 = iVar5 + -1;
      }
      if (iVar5 < 0) {
        *(undefined4 *)((int)this + 0x48) = 0;
        return 0;
      }
      *(int *)((int)this + 0x48) = iVar7 / 1000 + iVar5 * 1000;
      return 0;
    }
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x58);
  }
  return 0;
}


