/* Module: vegas30k.dll
   Function: FUN_0118c6e0
   Address: 0118c6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118c6e0(int *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_4;
  
  uVar3 = param_3;
  local_4 = 0;
  if (((code *)param_1[0x56] != (code *)0x0) &&
     (iVar4 = (*(code *)param_1[0x56])(param_1,6,&param_2,param_1[0x57],0,param_3), iVar4 < 0)) {
    return iVar4;
  }
  if ((param_1[0x15] & 0x200000U) != 0) {
    FUN_0118f2c0();
    param_1[0x15] = param_1[0x15] & 0xffdfffff;
  }
  if ((param_1[0x15] & 0x800000U) != 0) {
    FUN_0118e250();
    param_1[0x15] = param_1[0x15] & 0xff7fffff;
  }
  uVar5 = param_2 & 0x30000000;
  if (uVar5 == 0x10000000) {
    piVar1 = (int *)param_1[0x7c];
    if ((param_2 & 0x800000) == 0) {
      iVar4 = (**(code **)(*piVar1 + 0x158))(piVar1);
    }
    else {
      iVar4 = (**(code **)(*piVar1 + 0x164))(piVar1,&local_4);
    }
LAB_0118c7cd:
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else {
    if (uVar5 == 0x20000000) {
      iVar4 = (**(code **)(*(int *)param_1[0x7c] + 0x130))((int *)param_1[0x7c]);
      goto LAB_0118c7cd;
    }
    if (uVar5 == 0x30000000) {
      piVar1 = (int *)param_1[0x7c];
      if ((param_2 & 0x800000) == 0) {
        iVar4 = (**(code **)(*piVar1 + 0x170))(piVar1);
      }
      else {
        iVar4 = (**(code **)(*piVar1 + 0x17c))(piVar1,&local_4);
      }
      goto LAB_0118c7cd;
    }
  }
  uVar5 = param_2 & 0xc0000000;
  if (uVar5 == 0x40000000) {
    iVar4 = (**(code **)(*(int *)param_1[0x7f] + 0x2c))((int *)param_1[0x7f]);
  }
  else if (uVar5 == 0x80000000) {
    iVar4 = (**(code **)(*(int *)param_1[0x7f] + 0x1c))((int *)param_1[0x7f]);
  }
  else {
    if (uVar5 != 0xc0000000) {
      iVar4 = 0;
      goto LAB_0118c833;
    }
    iVar4 = (**(code **)(*(int *)param_1[0x7f] + 0x1c))((int *)param_1[0x7f]);
  }
  if (iVar4 < 0) {
    return iVar4;
  }
LAB_0118c833:
  iVar2 = param_1[0x81];
  param_1[0x81] = iVar2 - local_4;
  if ((param_2 & 0x10000000) != 0) {
    if ((param_2 & 0x800000) == 0) {
      param_1[0x14] = param_1[0x14] & 0xffffffdf;
    }
    else if ((iVar2 - local_4 == 0) && (local_4 != 0)) {
      param_1[0x14] = param_1[0x14] & 0xffffffef;
      (*(code *)param_1[0x56])(param_1,0xd,&param_2,param_1[0x57],0,0);
    }
  }
  if (param_1[0x59] == (param_1[0x59] & param_2)) {
    param_1[0x14] = param_1[0x14] & 0xffff7ffd;
    param_1[0x17] = param_1[0x17] & 0xfffffffd;
    param_1[0x11] = -1;
    ResetEvent((HANDLE)param_1[0x10]);
    (**(code **)(*param_1 + 0x24))(param_1,0,1);
  }
  param_1[0x58] = param_1[0x58] & ~(param_2 & 0xffff);
  param_1[0x59] = param_1[0x59] & ~(param_2 & 0xffff0000);
  if (((code *)param_1[0x56] != (code *)0x0) &&
     (((param_2 & 0x20000000) != 0 || (((param_2 & 0x10000000) != 0 && ((param_2 & 0x800000) == 0)))
      ))) {
    (*(code *)param_1[0x56])(param_1,7,&param_2,param_1[0x57],0,uVar3);
  }
  return iVar4;
}


