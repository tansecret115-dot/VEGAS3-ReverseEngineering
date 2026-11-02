/* Module: vegas30.exe
   Function: FUN_0056c070
   Address: 0056c070
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0056c070(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  HCURSOR hCursor;
  int iVar4;
  undefined4 uVar5;
  int *unaff_EBP;
  int *unaff_EDI;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  ISFGraphBuilder *local_13c;
  int local_138;
  int local_134;
  HCURSOR pHStack_130;
  undefined4 local_12c;
  uint local_128;
  HCURSOR local_124;
  uint uStack_120;
  uint uStack_11c;
  
  local_134 = 0;
  if (((*param_3 == 0) || (*(int *)param_3[2] == 0)) ||
     (puVar1 = *(uint **)(*(int *)param_3[2] + 0x20c), puVar1 == (uint *)0x0)) {
    return 0;
  }
  if (param_6 == 0) {
    return (-(uint)((*puVar1 & 1) != 0) & 0x7f79) + 0xf;
  }
  if (param_6 == 2) {
    return 1;
  }
  if (param_6 != 3) {
    return 0;
  }
  lVar2 = Mixer_GetDeviceGraph(&local_13c,1,*(ulong *)(param_2 + 0x224));
  if (lVar2 < 0) {
    return local_134;
  }
  FUN_004e9f70(*(undefined4 *)(param_1 + 0x290),*(int *)(param_2 + 0x224) + 0xca,0);
  FUN_004ea590(*(undefined4 *)(param_1 + 0x290),1,*(undefined4 *)(param_2 + 0x224),0x1d);
  piVar8 = &local_138;
  local_138 = 0;
  piVar7 = (int *)&DAT_006335c8;
  local_128 = 0;
  local_124 = (HCURSOR)0x0;
  local_12c = 0;
  iVar3 = (*(code *)**(undefined4 **)local_13c)(local_13c);
  if (iVar3 < 0) goto LAB_0056c204;
  puVar6 = &local_128;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_128 = puVar1[0x43];
  local_124 = (HCURSOR)puVar1[0x44];
  uStack_120 = puVar1[0x45];
  uStack_11c = puVar1[0x46];
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHStack_130 = SetCursor(hCursor);
  Transport_Suspend();
  local_134 = 1;
  iVar3 = _FXPackage_LoadPackage_16(unaff_EBP,&local_128,1,1);
  if (iVar3 < 0) {
    iVar3 = _SfErrorHandler_MsgBox_24(DAT_00647624,0x13b,3,0x8004e031,puVar1 + 2,0);
    if (iVar3 == 6) {
      _FXPackage_LoadPackage_16(unaff_EBP,&local_128,0,0);
      goto LAB_0056c1f4;
    }
    if (iVar3 == 0x65) {
      FUN_00525890(puVar1);
    }
  }
  else {
LAB_0056c1f4:
    local_138 = 1;
  }
  (**(code **)(*unaff_EBP + 8))(unaff_EBP);
LAB_0056c204:
  iVar3 = local_138;
  if (local_138 != 0) {
    FUN_004eb2b0(*(undefined4 *)(param_1 + 0x290));
  }
  FUN_004ea040(*(undefined4 *)(param_1 + 0x290),0);
  local_13c = (ISFGraphBuilder *)0x0;
  local_12c = 0;
  iVar4 = (**(code **)(*unaff_EDI + 0xb8))(unaff_EDI,&local_13c);
  if ((-1 < iVar4) && (unaff_EBP != (int *)0x0)) {
    iVar4 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&local_134,0);
    if ((iVar4 < 0) || (unaff_EBP == (int *)0x0)) {
      if (iVar3 != 0) {
        uVar5 = _SfGetString_8(DAT_00647204,0x4f5b);
        SfMsgBox(DAT_00647624,0x30,uVar5);
      }
    }
    else {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  (**(code **)(*piVar8 + 8))(piVar8);
  local_13c = (ISFGraphBuilder *)0x0;
  if (local_128 != 0) {
    Transport_Resume(0);
    SetCursor(local_124);
  }
  if (iVar3 != 0) {
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    FUN_00574c40(param_2);
    *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x8000;
    return 1;
  }
  return local_134;
}


