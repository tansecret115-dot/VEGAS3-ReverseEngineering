/* Module: aviplug.dll
   Function: FUN_5f973840
   Address: 5f973840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973840(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_28 [5];
  int aiStack_14 [5];
  
  piVar5 = param_2;
  puVar1 = (uint *)(param_2 + 0xf00);
  iVar6 = 0;
  local_40 = 0;
  FUN_5f973390((int)puVar1,(ulonglong *)(param_2 + 0x3920));
  FUN_5f973770((int)param_2);
  local_38 = param_2 + 0x2e6a;
  local_3c = param_2 + 0x326e;
  iVar8 = 0x32b0;
  param_2 = param_2 + 0x326f;
  do {
    iVar7 = 0xf;
    iVar3 = *local_3c;
    while ((*param_2 == iVar3 && (0 < iVar7))) {
      iVar7 = iVar7 + -1;
      iVar3 = piVar5[iVar8 + iVar7 + -0x51];
    }
    iVar3 = FUN_5f9734a0((uint *)*local_38,iVar7);
    *(int *)((int)local_28 + iVar6) = iVar7;
    piVar5[iVar8 + iVar7] = iVar3;
    *(int *)((int)aiStack_14 + iVar6) = iVar3;
    local_40 = local_40 + iVar3;
    iVar8 = iVar8 + 0x10;
    param_2 = param_2 + 0x10;
    local_3c = local_3c + 0x10;
    local_38 = local_38 + 1;
    iVar6 = iVar6 + 4;
    iVar3 = local_34;
  } while (iVar8 < 0x3300);
  for (; 0xa00 < local_40; local_40 = (local_40 - iVar8) + iVar6) {
    iVar8 = 0;
    param_2 = local_28;
    local_3c = (int *)0x7fffffff;
    local_38 = (int *)0x0;
    iVar6 = 0x325f;
    local_34 = iVar3;
    do {
      iVar7 = *param_2;
      local_38 = (int *)((int)local_38 + iVar7);
      if (iVar7 != 0) {
        piVar4 = piVar5 + iVar6 + iVar7 + 1;
        do {
          iVar2 = piVar4[-1];
          iVar7 = iVar7 + -1;
          piVar4 = piVar4 + -1;
          if (iVar7 < 1) break;
        } while (iVar2 == piVar5[iVar6 + iVar7]);
        iVar3 = local_34;
        if (iVar2 < (int)local_3c) {
          iVar3 = iVar8;
          local_3c = (int *)iVar2;
          local_34 = iVar8;
          local_30 = iVar7;
        }
      }
      iVar6 = iVar6 + 0x10;
      iVar8 = iVar8 + 1;
      param_2 = param_2 + 1;
    } while (iVar6 < 0x32af);
    if (local_38 == (int *)0x0) break;
    iVar6 = (iVar3 + 0x32b) * 0x10 + local_30;
    if (piVar5[iVar6] < 0) {
      iVar8 = FUN_5f9734a0((uint *)piVar5[iVar3 + 0x2e6a],local_30);
      piVar5[iVar6] = iVar8;
    }
    iVar8 = aiStack_14[iVar3];
    iVar6 = piVar5[iVar6];
    aiStack_14[iVar3] = iVar6;
    local_28[iVar3] = local_30;
    iVar3 = local_34;
  }
  piVar4 = local_28;
  iVar6 = 5;
  piVar5 = (int *)(param_1 + 4);
  do {
    iVar8 = *piVar4;
    piVar4 = piVar4 + 1;
    *piVar5 = iVar8;
    piVar5 = piVar5 + 0x12;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_5f973660(puVar1,*(longlong **)(param_1 + 8),local_28);
  return;
}


