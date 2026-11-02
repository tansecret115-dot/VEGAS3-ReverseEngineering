/* Module: vegas30k.dll
   Function: FUN_0118c940
   Address: 0118c940
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118c940(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_38 [4];
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_14;
  
  if (((code *)param_1[0x56] == (code *)0x0) ||
     (iVar2 = (*(code *)param_1[0x56])(param_1,0,&param_4,param_1[0x57],&param_2,0), iVar2 == 0)) {
    if (param_1[0x3f] != 0) {
      puVar4 = (uint *)(param_1 + 0x36);
      puVar5 = local_38;
      for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if ((((local_38[0] & local_38[1]) != 0xffffffff) && ((uStack_28 & uStack_24) != 0xffffffff))
         && ((param_2 & param_3) != 0xffffffff)) {
        iVar2 = uStack_24 + local_38[1] + (uint)CARRY4(uStack_28,local_38[0]);
        if ((iVar2 <= (int)param_3) &&
           ((iVar2 < (int)param_3 || (uStack_28 + local_38[0] < param_2)))) {
          uStack_14 = 0;
          (**(code **)(*param_1 + 0xdc))(param_1,local_38);
        }
      }
    }
    param_1[0x44] = 0;
    param_1[0x30] = 0;
    if ((((param_4 & 0x20000000) != 0) ||
        (((param_4 & 0x10000000) != 0 && ((param_4 & 0x800000) == 0)))) &&
       ((param_1[0x15] & 0x50000U) != 0)) {
      iVar2 = (**(code **)(*param_1 + 0x40))(param_1,0,1);
      if (iVar2 < 0) {
        if ((code *)param_1[0x56] != (code *)0x0) {
          (*(code *)param_1[0x56])(param_1,7,&param_4,param_1[0x57],0,0);
        }
      }
      else {
        param_1[0x30] = 1;
      }
      if (iVar2 < 0) goto LAB_0118cb6f;
    }
    (**(code **)(*(int *)param_1[0x7c] + 0xdc))((int *)param_1[0x7c],0,0);
    uVar3 = param_4 & 0x30000000;
    if (uVar3 == 0x10000000) {
      piVar1 = (int *)param_1[0x7c];
      if ((param_4 & 0x800000) == 0) {
        iVar2 = (**(code **)(*piVar1 + 0x15c))(piVar1,param_2,param_3);
      }
      else {
        iVar2 = (**(code **)(*piVar1 + 0x168))(piVar1);
      }
LAB_0118cb07:
      if (iVar2 < 0) goto LAB_0118cb6f;
    }
    else {
      if (uVar3 == 0x20000000) {
        iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x134))((int *)param_1[0x7c],param_2,param_3);
        goto LAB_0118cb07;
      }
      if (uVar3 == 0x30000000) {
        iVar2 = *(int *)param_1[0x7c];
        if ((param_4 & 0x800000) == 0) {
          iVar2 = (**(code **)(iVar2 + 0x174))((int *)param_1[0x7c],param_2,param_3);
        }
        else {
          iVar2 = (**(code **)(iVar2 + 0x180))();
        }
        goto LAB_0118cb07;
      }
    }
    uVar3 = param_4 & 0xc0000000;
    if (uVar3 == 0x40000000) {
      iVar2 = (**(code **)(*(int *)param_1[0x7f] + 0x28))((int *)param_1[0x7f]);
    }
    else if (uVar3 == 0x80000000) {
      iVar2 = (**(code **)(*(int *)param_1[0x7f] + 0x18))((int *)param_1[0x7f],param_2,param_3);
    }
    else {
      if (uVar3 != 0xc0000000) {
        return 0;
      }
      iVar2 = (**(code **)(*(int *)param_1[0x7f] + 0x48))((int *)param_1[0x7f]);
    }
  }
  if (-1 < iVar2) {
    return iVar2;
  }
LAB_0118cb6f:
  if ((code *)param_1[0x56] != (code *)0x0) {
    (*(code *)param_1[0x56])(param_1,7,&param_4,param_1[0x57],0,0);
  }
  return iVar2;
}


