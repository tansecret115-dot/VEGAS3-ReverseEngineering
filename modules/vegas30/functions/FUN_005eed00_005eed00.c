/* Module: vegas30.exe
   Function: FUN_005eed00
   Address: 005eed00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005eed00(undefined4 param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_118;
  int local_114;
  int local_108;
  undefined1 local_104 [260];
  
  iVar3 = 0;
  iVar7 = 0;
  if (DAT_0064a474 != 0) {
    iVar3 = FUN_005ec620();
    if (iVar3 != 0) {
      if ((*(byte *)(param_2 + 0x134) & 0x20) == 0) {
        iVar3 = 0;
        local_118 = 0;
        local_114 = 0;
        local_108 = 0;
        bVar2 = false;
        do {
          iVar4 = FUN_005f1430(local_118);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 4) == 2)) {
            uVar1 = *(uint *)(iVar4 + 0x8c);
            if (((uVar1 & 10) == 0) &&
               ((((uVar1 & 0x60) != 0 && ((uVar1 & 0x10) == 0)) && (local_114 == 0)))) {
              if (iVar3 == 0) {
                local_108 = Transport_IsAnyOpen();
                if (local_108 != 0) {
                  Transport_Suspend();
                  FUN_00589e10(iVar4);
                }
              }
              FUN_005b83b0(param_1,1);
              *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) | 1;
              FUN_005b84d0(param_1,1);
              iVar7 = FUN_005ef740(iVar4,0,param_2,local_104);
              if (iVar7 == 0) {
                iVar7 = FUN_005ef0c0(param_1,iVar4,local_104,1);
              }
              else {
                bVar2 = true;
                iVar7 = -0x7ff8fff2;
                iVar3 = FUN_004e6c90(0x564);
                if (iVar3 != 0) {
                  FUN_005b83b0(param_1,1);
                  *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) | 8;
                  *(undefined1 **)(iVar3 + 0x20) = &LAB_005ef150;
                  *(undefined4 *)(iVar3 + 0x2c) = 0;
                  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x20;
                  _mbscpy((uchar *)(iVar3 + 0x30),(uchar *)(param_2 + 0x170));
                  *(undefined1 **)(iVar3 + 0x28) = &LAB_005ef640;
                  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 0x10;
                  *(undefined4 *)(iVar3 + 0x18) = 0x22;
                  *(undefined4 *)(iVar3 + 0x134) = param_1;
                  *(int *)(iVar3 + 0x138) = param_2;
                  *(int *)(iVar3 + 0x140) = iVar4;
                  *(int *)(iVar3 + 0x13c) = local_118;
                  uVar5 = _SfGetFileNamePtrA_4((uchar *)(param_2 + 0x170));
                  uVar6 = _SfGetString_8(DAT_00647204,0x578);
                  SfPrintF(iVar3 + 0x24c,uVar6,uVar5);
                  *(undefined4 *)(iVar3 + 0x550) = 0;
                  *(undefined4 *)(iVar3 + 0x554) = 0;
                  *(undefined4 *)(iVar3 + 0x558) = 0;
                  *(undefined4 *)(iVar3 + 0x55c) = 0;
                  *(undefined4 *)(iVar3 + 0x560) = 0;
                  *(undefined4 *)(iVar3 + 0x550) = 1;
                  *(undefined4 *)(iVar3 + 0x554) = *(undefined4 *)(param_2 + 0x144);
                  iVar7 = *(int *)(iVar3 + 0x140);
                  *(undefined4 *)(iVar3 + 0x558) = *(undefined4 *)(param_2 + 0x148);
                  *(undefined2 *)(iVar3 + 0x55c) = *(undefined2 *)(*(int *)(iVar7 + 0x2c) + 2);
                  *(undefined4 *)(iVar3 + 0x55e) = *(undefined4 *)(*(int *)(iVar7 + 0x2c) + 4);
                  *(undefined2 *)(iVar3 + 0x562) = *(undefined2 *)(*(int *)(iVar7 + 0x2c) + 0xe);
                  FUN_005ed3f0(param_2);
                  iVar7 = FUN_005ef670(iVar3 + 0x148,0,param_2);
                  if (-1 < iVar7) {
                    *(undefined4 *)(iVar3 + 0x144) = 0;
                    iVar7 = (**(code **)(*DAT_0064b510 + 0x54))
                                      (DAT_0064b510,(undefined4 *)(iVar3 + 0x144),&DAT_0061b3b0);
                    if (-1 < iVar7) {
                      iVar7 = FUN_004e7190(iVar3);
                      if (-1 < iVar7) {
                        FUN_005b84d0(param_1,1);
                        if (DAT_0065e120 == 0) {
                          DAT_0065e120 = 1;
                          iVar3 = _SfGetMetricBool_12(DAT_00647200,0xe7e,0);
                          if (iVar3 == 0) {
                            iVar3 = _SfDialogBoxParam_20
                                              (DAT_00647204,0x37e,DAT_00647624,&LAB_005eeb80,0);
                            if (iVar3 != 0) {
                              _SfSetMetric_12(DAT_00647200,0xe7e,iVar3);
                            }
                          }
                          DAT_0065e120 = 0;
                        }
                        goto LAB_005ef043;
                      }
                    }
                  }
                  *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) & 0xfffffff7 | 1;
                  FUN_005ed410(param_2,0,0);
                  FUN_005b84d0(param_1,1);
                  FUN_004e6ce0(iVar3);
                }
              }
            }
LAB_005ef043:
            local_114 = local_114 + 1;
            iVar3 = local_108;
          }
          local_118 = local_118 + 1;
        } while ((iVar4 != 0) && (-1 < iVar7));
        if (bVar2) {
          FUN_005c5fc0(param_1,param_2);
        }
        if (iVar3 != 0) {
          DAT_0064767c = DAT_0064767c | 0x300;
          FUN_004011a0();
          Transport_Resume(0);
        }
      }
      return iVar7;
    }
    iVar3 = -0x7ff8fff2;
  }
  return iVar3;
}


