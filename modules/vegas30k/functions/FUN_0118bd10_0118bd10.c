/* Module: vegas30k.dll
   Function: FUN_0118bd10
   Address: 0118bd10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118bd10(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar5 = 1;
  if ((*(uint *)(param_1 + 0x50) & 0x22) == 0) {
    uVar3 = _SfGetMillisec_0();
    *(undefined4 *)(param_1 + 0x20c) = uVar3;
  }
  uVar3 = FUN_01177970(0);
  *(undefined4 *)(param_1 + 0x1c8) = uVar3;
  piVar1 = *(int **)(param_1 + 0x1f0);
  local_14 = 0;
  if ((piVar1 != (int *)0x0) && ((param_4 & 0x30000000) != 0)) {
    iVar5 = (**(code **)(*piVar1 + 0x13c))(piVar1,param_2,param_3);
    if (iVar5 < 0) {
      return iVar5;
    }
    if ((param_4 & 0x800000) != 0) {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x160))
                        (*(int **)(param_1 + 0x1f0),&local_14);
    }
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  piVar1 = *(int **)(param_1 + 0x1fc);
  if ((piVar1 != (int *)0x0) && ((param_4 & 0xc0000000) != 0)) {
    iVar5 = (**(code **)(*piVar1 + 0x34))(piVar1,param_2,param_3);
  }
  if (-1 < iVar5) {
    piVar1 = *(int **)(param_1 + 0x1f8);
    if (piVar1 == (int *)0x0) {
      uVar3 = _SfGetMillisec_0();
    }
    else {
      (**(code **)(*piVar1 + 0xf4))(piVar1,&uStack_8);
      uVar3 = __alldiv(uStack_8,uStack_4,10000,0);
    }
    *(undefined4 *)(param_1 + 0x1c8) = uVar3;
    if ((param_4 & 0x800000) != 0) {
      if ((*(int *)(param_1 + 0x204) == 0) && (local_14 != 0)) {
        *(int *)(param_1 + 0x204) = local_14;
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x10;
        (**(code **)(param_1 + 0x158))
                  (param_1,0xb,&param_4,*(undefined4 *)(param_1 + 0x15c),&param_2,0);
      }
      else {
        iVar4 = local_14 + *(int *)(param_1 + 0x204);
        *(int *)(param_1 + 0x204) = iVar4;
        if (iVar4 != 0) {
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x10;
        }
      }
    }
    uVar2 = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = uVar2 | 0x400;
    if ((uVar2 & 2) == 0) {
      (**(code **)(**(int **)(param_1 + 0x1f0) + 0x34))(*(int **)(param_1 + 0x1f0),&uStack_10,0);
      uStack_10 = __alldiv((undefined4)uStack_10,uStack_10._4_4_,2,0);
      iVar4 = __alldiv(uStack_10,10000,0);
      *(int *)(param_1 + 0x44) = iVar4;
      *(int *)(param_1 + 0x78) = iVar4 * 8;
      SetEvent(*(HANDLE *)(param_1 + 0x40));
    }
    if (*(code **)(param_1 + 0x158) != (code *)0x0) {
      iVar5 = (**(code **)(param_1 + 0x158))
                        (param_1,0x8001,&param_4,*(undefined4 *)(param_1 + 0x15c),&param_2,0);
      if (iVar5 < 0) {
        FUN_0118c050(uStack_10._4_4_,iVar5);
        return iVar5;
      }
      *(uint *)(param_1 + 0x160) = uStack_10._4_4_ & 0xffff;
      *(uint *)(param_1 + 0x164) = uStack_10._4_4_ & 0xffff0000;
    }
  }
  return iVar5;
}


