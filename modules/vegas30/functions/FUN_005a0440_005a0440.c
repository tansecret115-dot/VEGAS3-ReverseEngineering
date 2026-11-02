/* Module: vegas30.exe
   Function: FUN_005a0440
   Address: 005a0440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a0440(int param_1,uint param_2,int *param_3,undefined4 param_4,uint param_5,int *param_6,
                byte *param_7,undefined4 param_8,int *param_9)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_EBX;
  int iVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int iVar7;
  bool bVar8;
  uint unaff_retaddr;
  undefined4 uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  uint uStack_24;
  int iStack_20;
  undefined1 auStack_1c [24];
  uint uStack_4;
  
  pbVar1 = param_7;
  iVar7 = 0;
  local_30 = FUN_005627f0(*(undefined4 *)(param_7 + 0x94));
  uVar3 = *(uint *)(pbVar1 + 0xa0) + *(uint *)(pbVar1 + 0xa8);
  uVar4 = uVar3 + *(uint *)(pbVar1 + 0x98);
  (**(code **)(*param_9 + 0x14))
            (param_9,uVar4 + param_5,
             (int)param_6 +
             (uint)CARRY4(uVar4,param_5) +
             *(int *)(pbVar1 + 0xa4) + *(int *)(pbVar1 + 0xac) +
             (uint)CARRY4(*(uint *)(pbVar1 + 0xa0),*(uint *)(pbVar1 + 0xa8)) +
             *(int *)(pbVar1 + 0x9c) + (uint)CARRY4(uVar3,*(uint *)(pbVar1 + 0x98)));
  if ((*pbVar1 & 2) != 0) {
    (**(code **)(**(int **)(pbVar1 + 0x88) + 0x24))(*(int **)(pbVar1 + 0x88));
  }
  uVar3 = 0;
  iVar6 = 0;
  if ((-1 < *(int *)(pbVar1 + 0x9c)) &&
     ((0 < *(int *)(pbVar1 + 0x9c) || (*(int *)(pbVar1 + 0x98) != 0)))) {
    do {
      iVar7 = *(int *)(pbVar1 + 0xb8);
      if (iVar7 < 0) {
        iVar7 = *(int *)(pbVar1 + 0xb4);
      }
      iVar2 = (**(code **)(**(int **)(pbVar1 + 0x88) + 0x28))
                        (*(int **)(pbVar1 + 0x88),*(undefined4 *)(pbVar1 + 0xbc),iVar7);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar7 = (**(code **)(*param_3 + 0x18))(param_3,uVar3,iVar6);
      if (iVar7 != 0) break;
      bVar8 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + (uint)bVar8;
    } while ((iVar6 < *(int *)(pbVar1 + 0x9c)) ||
            ((iVar7 = iVar2, iVar6 <= *(int *)(pbVar1 + 0x9c) && (uVar3 < *(uint *)(pbVar1 + 0x98)))
            ));
    if (iVar7 < 0) {
      return iVar7;
    }
  }
  uVar3 = 0;
  iVar6 = 0;
  if ((-1 < *(int *)(pbVar1 + 0xa4)) &&
     ((0 < *(int *)(pbVar1 + 0xa4) || (*(int *)(pbVar1 + 0xa0) != 0)))) {
    do {
      iVar2 = (**(code **)(**(int **)(pbVar1 + 0x88) + 0x28))
                        (*(int **)(pbVar1 + 0x88),*(undefined4 *)(pbVar1 + 0xc0),
                         *(undefined4 *)(pbVar1 + 0xb4));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar7 = (**(code **)(*param_3 + 0x18))
                        (param_3,*(uint *)(pbVar1 + 0x98) + uVar3,
                         *(int *)(pbVar1 + 0x9c) + iVar6 +
                         (uint)CARRY4(*(uint *)(pbVar1 + 0x98),uVar3));
      if (iVar7 != 0) break;
      bVar8 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + (uint)bVar8;
    } while ((iVar6 < *(int *)(pbVar1 + 0xa4)) ||
            ((iVar7 = iVar2, iVar6 <= *(int *)(pbVar1 + 0xa4) && (uVar3 < *(uint *)(pbVar1 + 0xa0)))
            ));
  }
  if (-1 < iVar7) {
    uStack_24 = unaff_retaddr + param_2;
    iStack_20 = (int)param_3 + (uint)CARRY4(unaff_retaddr,param_2) + param_1;
    if ((param_1 <= iStack_20) &&
       ((iVar6 = param_1, uStack_2c = unaff_retaddr, param_1 < iStack_20 ||
        (unaff_retaddr < uStack_24)))) {
      while (iVar7 = FUN_0059f400(uStack_2c,iVar6,0,0,uStack_4,&stack0xffffffc0,0,&param_4,
                                  &stack0xffffffc8,&local_30,&uStack_34,auStack_1c,2,unaff_EBP,0,1),
            iVar7 == 0) {
        iVar2 = (**(code **)(**(int **)(pbVar1 + 0x88) + 0x2c))
                          (*(int **)(pbVar1 + 0x88),unaff_ESI,param_4,unaff_EBX,
                           *(undefined4 *)(pbVar1 + 0xb0));
        FUN_005a0d50(uStack_4,unaff_ESI,param_4,uStack_34);
        uVar3 = uStack_2c;
        iVar7 = iVar2;
        if ((iVar2 != 0) ||
           (uVar4 = *(uint *)(pbVar1 + 0xa0) - unaff_retaddr,
           uVar5 = uVar4 + *(uint *)(pbVar1 + 0x98),
           iVar7 = (**(code **)(*param_6 + 0x18))
                             (param_6,uVar5 + uStack_2c,
                              ((*(int *)(pbVar1 + 0xa4) - param_1) -
                              (uint)(*(uint *)(pbVar1 + 0xa0) < unaff_retaddr)) +
                              *(int *)(pbVar1 + 0x9c) + (uint)CARRY4(uVar4,*(uint *)(pbVar1 + 0x98))
                              + iVar6 + (uint)CARRY4(uVar5,uStack_2c)), iVar7 != 0)) break;
        uStack_2c = uVar3 + 1;
        iVar6 = iVar6 + (uint)(0xfffffffe < uVar3);
        if ((iStack_20 <= iVar6) && ((iVar7 = iVar2, iStack_20 < iVar6 || (uStack_24 <= uStack_2c)))
           ) break;
      }
    }
    if (iVar7 == 1) {
      return -0x7fff0001;
    }
    iVar6 = 0;
    uStack_2c = 0;
    if ((-1 < *(int *)(pbVar1 + 0xac)) &&
       ((0 < *(int *)(pbVar1 + 0xac) || (*(int *)(pbVar1 + 0xa8) != 0)))) {
      while( true ) {
        do {
          iVar7 = (**(code **)(**(int **)(pbVar1 + 0x88) + 0x28))
                            (*(int **)(pbVar1 + 0x88),*(undefined4 *)(pbVar1 + 0xc0),
                             *(undefined4 *)(pbVar1 + 0xb4));
          if (iVar7 < 0) {
            return iVar7;
          }
          uVar3 = *(uint *)(pbVar1 + 0xa0) + *(uint *)(pbVar1 + 0x98);
          uVar4 = uVar3 + unaff_EBX;
          iVar2 = (**(code **)(*param_3 + 0x18))
                            (param_3,uVar4 + uStack_4,
                             *(int *)(pbVar1 + 0xa4) + *(int *)(pbVar1 + 0x9c) +
                             (uint)CARRY4(*(uint *)(pbVar1 + 0xa0),*(uint *)(pbVar1 + 0x98)) + iVar6
                             + (uint)CARRY4(uVar3,unaff_EBX) + unaff_retaddr +
                             (uint)CARRY4(uVar4,uStack_4));
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar8 = 0xfffffffe < uStack_2c;
          uStack_2c = uStack_2c + 1;
          iVar6 = iVar6 + (uint)bVar8;
        } while (iVar6 < *(int *)(pbVar1 + 0xac));
        if (*(int *)(pbVar1 + 0xac) < iVar6) break;
        if (*(uint *)(pbVar1 + 0xa8) <= uStack_2c) {
          return iVar7;
        }
      }
    }
  }
  return iVar7;
}


