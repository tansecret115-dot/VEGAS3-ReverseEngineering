/* Module: vidpcore.dll
   Function: FUN_5de22f50
   Address: 5de22f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de22f50(int **param_1,uint param_2,int *param_3,uint param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  int *piStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  int **ppiStack_2c;
  undefined4 uStack_28;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  ppiStack_2c = &local_8;
  uStack_28 = 0;
  puStack_30 = &DAT_5df176d0;
  iStack_34 = ((uint)param_5 & 1) << 2;
  uStack_38 = 0xffffffff;
  uStack_3c = param_4;
  piStack_40 = param_3;
  uStack_44 = 0x5de22f7d;
  iVar3 = (**(code **)(*param_3 + 0x28))();
  if (-1 < iVar3) {
    puStack_48 = &param_3;
    uStack_44 = 0;
    puStack_4c = &DAT_5df176e0;
    uStack_50 = 1;
    uStack_54 = 0xffffffff;
    uStack_58 = param_2;
    piStack_5c = (int *)param_1;
    piStack_60 = (int *)0x5de22fa1;
    iVar3 = (**(code **)((int)*param_1 + 0x28))();
    if (-1 < iVar3) {
      piStack_60 = (int *)0x0;
      piStack_64 = local_8;
      uStack_68 = 0x5de22fb9;
      uVar4 = (**(code **)(*local_8 + 0x10))();
      uStack_68 = 0;
      piStack_6c = param_3;
      uVar5 = (**(code **)(*param_3 + 0x10))();
      bVar9 = (uVar4 & 0x60000) == 0;
      param_1 = (int **)0x0;
      if (uVar4 != 0x60001) {
        FUN_5df157d0();
        param_1 = &piStack_6c;
      }
      if ((((uint)param_5 & 2) != 0) && ((uVar5 & 0x700000) <= (uVar4 & 0x700000))) {
        param_5 = (uint *)((uint)param_5 & 0xfffffffd);
      }
      uVar4 = (uint)param_5 & 2;
      if ((uVar4 == 0) && ((((uint)param_5 & 1) == 0 || (bVar9)))) {
        (**(code **)(*param_3 + 0x40))(param_3,param_1,0,local_8,0,bVar9);
      }
      else {
        local_c = (undefined1 *)0x0;
        if (uVar5 != 0x60001) {
          FUN_5df157d0();
          local_c = (undefined1 *)&piStack_6c;
        }
        iVar1 = *(int *)(param_4 + 0x14);
        iVar2 = *(int *)(param_4 + 0x10);
        if (uVar4 == 0) {
          param_2 = 0;
          uVar4 = param_4;
          if (iVar1 != iVar2) {
            do {
              param_4 = uVar4;
              param_4 = (**(code **)(*local_8 + 0x20))(local_8,param_2,&param_5);
              (**(code **)(*param_3 + 0x18))(param_3,param_2);
              do {
                uVar4 = *param_5 >> 2;
                switch(*param_5 & 3) {
                case 0:
                  (**(code **)(*local_8 + 0x14))(local_8,uVar4);
                  (**(code **)(*param_3 + 0x14))(param_3,uVar4);
                  break;
                case 1:
                  (**(code **)(*param_3 + 0x3c))(param_3,local_c,local_8,uVar4,1);
                  break;
                case 2:
                  iVar6 = (**(code **)(*local_8 + 0x28))(local_8,param_1,uVar4,1);
                  puVar7 = (undefined4 *)(**(code **)(*param_3 + 0x28))(param_3,local_c,uVar4,0);
                  if (uVar4 != 0) {
                    iVar6 = iVar6 - (int)puVar7;
                    uVar5 = uVar4;
                    do {
                      *puVar7 = *(undefined4 *)(iVar6 + (int)puVar7);
                      puVar7 = puVar7 + 1;
                      uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                  }
                  (**(code **)(*param_3 + 0x34))(param_3,local_c,uVar4);
                  break;
                case 3:
                  iVar6 = *param_3;
                  uVar8 = (**(code **)(*local_8 + 0x28))(local_8,param_1,uVar4,1,uVar4);
                  (**(code **)(iVar6 + 0x50))(param_3,local_c,uVar8);
                }
                param_5 = param_5 + 1;
                param_4 = param_4 + -1;
              } while (param_4 != 0);
              param_2 = param_2 + 1;
              param_4 = 0;
              uVar4 = 0;
            } while (param_2 < (uint)(iVar1 - iVar2));
          }
        }
        else {
          if (param_1 == (int **)0x0) {
            FUN_5df157d0();
            param_1 = &piStack_6c;
          }
          uVar4 = ~(uint)param_5;
          param_4 = 0;
          if (iVar1 != iVar2) {
            do {
              local_10 = (**(code **)(*local_8 + 0x20))(local_8,param_4,&param_5);
              (**(code **)(*param_3 + 0x18))(param_3,param_4);
              do {
                uVar5 = *param_5 >> 2;
                if ((*param_5 & 3) == 0) {
                  (**(code **)(*local_8 + 0x14))(local_8,uVar5);
                  if ((uVar4 & 1) == 0) {
                    (**(code **)(*param_3 + 0x14))(param_3,uVar5);
                  }
                  else {
                    (**(code **)(*param_3 + 0x44))(param_3,param_1,0,uVar5,0);
                  }
                }
                else {
                  (**(code **)(*local_8 + 0x28))(local_8,param_1,uVar5,1);
                  if (((uVar4 & 1) == 0) && (((byte)*param_5 & 3) != 1)) {
                    (**(code **)(*param_3 + 0x50))(param_3,local_c,param_1,uVar5);
                  }
                  else {
                    (**(code **)(*param_3 + 0x34))(param_3,param_1,uVar5);
                  }
                }
                param_5 = param_5 + 1;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
              param_4 = param_4 + 1;
            } while (param_4 < (uint)(iVar1 - iVar2));
          }
        }
      }
      (**(code **)(*param_3 + 8))(param_3);
    }
    piStack_60 = local_8;
    piStack_64 = (int *)0x5de232a5;
    (**(code **)(*local_8 + 8))();
  }
  return iVar3;
}


