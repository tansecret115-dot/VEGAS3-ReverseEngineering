/* Module: rmbe3260.dll
   Function: FUN_66009840
   Address: 66009840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66009840(CPNRouter *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1d7;
  CPNText local_d4 [192];
  int local_14 [3];
  CPNRouter *local_8;
  
  (**(code **)(*(int *)(param_1 + 0xd8) + 0xb8))(0x411,param_1);
  (**(code **)(*(int *)(param_1 + 0x1d3) + 0xb8))(0x412,param_1);
  local_8 = param_1 + 0x2ce;
  (**(code **)(*(int *)(param_1 + 0x2ce) + 0xb8))(0x410,param_1);
  CPNRouter::AddObserver(param_1 + 0xd8,param_1,0x80000000,1);
  CPNRouter::AddObserver(param_1 + 0x1d3,param_1,0x80000000,1);
  CPNText::CPNText(local_d4);
  FUN_6605b650(local_14);
  puVar2 = &local_1d7;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  CPNWindow::AttachWindowItem((CPNWindow *)local_d4,0x40d,(CPNWindow *)param_1);
  CPNWindow::DetachWindowItem((CPNWindow *)local_d4);
  (**(code **)(*(int *)param_1 + 0x20))("Cancel Configuration");
  if (*(int *)(param_1 + 0xd0) == 0) {
    (**(code **)(*(int *)local_8 + 0x98))(0);
  }
  FUN_6605b770(local_14);
  CPNText::~CPNText(local_d4);
  return 1;
}


