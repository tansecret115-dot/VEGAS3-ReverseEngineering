/* Module: rmbe3260.dll
   Function: FUN_6600a7f0
   Address: 6600a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6600a7f0(CPNRouter *param_1)

{
  CPNButton *pCVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_124;
  undefined4 local_123 [63];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pCVar1 = operator_new(0xfb);
  if (pCVar1 == (CPNButton *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CPNButton::CPNButton(pCVar1);
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  pCVar1 = operator_new(0xfb);
  if (pCVar1 == (CPNButton *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CPNButton::CPNButton(pCVar1);
  }
  *(int *)(param_1 + 0xd4) = iVar3;
  if ((*(int **)(param_1 + 0xd0) != (int *)0x0) && (iVar3 != 0)) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 0xb8))(0x460,param_1);
    (**(code **)(**(int **)(param_1 + 0xd4) + 0xb8))(0x461,param_1);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0xd0),param_1,0x80000000,1);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0xd4),param_1,0x80000000,1);
    iVar3 = *(int *)param_1;
    local_124 = DAT_66075004;
    puVar6 = local_123;
    for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    piVar4 = (int *)(**(code **)(iVar3 + 0x14))();
    (**(code **)(*piVar4 + 0x24))(&local_124,0xff);
    (**(code **)(*(int *)param_1 + 0x20))(&local_124);
    piVar4 = (int *)(**(code **)(*(int *)param_1 + 0x14))();
    (**(code **)(*piVar4 + 0x40))(&local_24);
    (**(code **)(*(int *)param_1 + 0x40))(&local_14);
    iVar3 = (((local_1c - local_24) / 2 - (local_c - local_14) / 2) + local_24) - local_14;
    local_14 = local_14 + iVar3;
    local_c = local_c + iVar3;
    iVar3 = (((local_18 - local_20) / 2 - (local_8 - local_10) / 2) + local_20) - local_10;
    local_10 = local_10 + iVar3;
    local_8 = local_8 + iVar3;
    (**(code **)(*(int *)param_1 + 0x54))(&local_14);
    MessageBeep(0x30);
    return 1;
  }
  return 0;
}


