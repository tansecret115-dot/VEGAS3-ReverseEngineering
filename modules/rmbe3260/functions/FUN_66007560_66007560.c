/* Module: rmbe3260.dll
   Function: FUN_66007560
   Address: 66007560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66007560(int *param_1)

{
  int iVar1;
  void *pvVar2;
  CPNText *this;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_34 [4];
  int local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if ((param_1[0x44] != 0) && (param_1[0x45] != 0)) {
    pvVar2 = operator_new(param_1[0x45] * param_1[0x44] * 4);
    param_1[0x43] = (int)pvVar2;
    iVar4 = param_1[0x54] + 3;
    local_18 = 0;
    local_14 = 0;
    local_10 = iVar4;
    if (param_1[0x44] != 0) {
      local_8 = 0;
      do {
        local_24 = iVar4 * local_8 + 3 + param_1[0x48];
        uVar7 = 0;
        local_c = 0;
        if (param_1[0x45] != 0) {
          local_1c = local_8 + 0x439;
          do {
            iVar4 = param_1[uVar7 * 2 + 0x47];
            iVar5 = (uVar7 + 1) * local_1c;
            this = operator_new(0xc0);
            if (this == (CPNText *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = CPNText::CPNText(this);
            }
            iVar1 = local_24;
            *(undefined4 *)(param_1[0x43] + (local_8 * param_1[0x45] + uVar7) * 4) = uVar3;
            if ((param_1[0x46] == 0) || (local_8 != param_1[0x44] - 1U)) {
              (**(code **)(**(int **)(param_1[0x43] + (local_8 * param_1[0x45] + uVar7) * 4) + 300))
                        (iVar5 * 2,param_1,iVar4,local_24,param_1[uVar7 * 2 + 0x53],local_10 + -3,
                         0x10000200,&DAT_66075004,param_1[uVar7 + 0x5f] | 0x400);
              local_18 = iVar1 + -3 + local_10;
            }
            else {
              (**(code **)(*param_1 + 0x184))(local_14,local_c);
            }
            local_c = local_c + 1;
            uVar7 = local_c & 0xffff;
            iVar4 = local_10;
          } while (uVar7 < (uint)param_1[0x45]);
        }
        local_14 = local_14 + 1;
        local_8 = local_14 & 0xffff;
      } while (local_8 < (uint)param_1[0x44]);
    }
    uVar7 = local_18;
    (**(code **)(*(int *)param_1[0x74] + 0x50))(local_2c);
    (**(code **)(*(int *)param_1[0x74] + 0x38))(local_34);
    local_30 = (uVar7 - local_28) + 9;
    (**(code **)(*(int *)param_1[0x74] + 0x34))(local_34);
    if (param_1[0x46] != 0) {
      iVar4 = local_28 + 3 + local_30;
      (**(code **)(*(int *)param_1[0x75] + 0x50))(local_2c);
      local_28 = iVar4;
      (**(code **)(*(int *)param_1[0x75] + 0x44))(local_2c);
      uVar7 = param_1[0x45];
      local_24 = iVar4 + 0x12;
      local_18 = 0;
      if (uVar7 != 0) {
        do {
          iVar4 = param_1[0x44] + -1;
          if (-1 < iVar4) {
            uVar6 = local_18 & 0xffff;
            (**(code **)(**(int **)(param_1[0x43] + (iVar4 * uVar7 + uVar6) * 4) + 0x50))(local_20);
            local_1c = local_24;
            (**(code **)(**(int **)(param_1[0x43] + (iVar4 * param_1[0x45] + uVar6) * 4) + 0x44))
                      (local_20);
          }
          uVar7 = param_1[0x45];
          local_18 = local_18 + 1;
        } while ((local_18 & 0xffff) < uVar7);
      }
    }
  }
  return;
}


