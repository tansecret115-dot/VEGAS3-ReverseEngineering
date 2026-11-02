/* Module: vegas30.exe
   Function: FUN_0056c760
   Address: 0056c760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0056c9cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0056c760(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  uint *puVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  HCURSOR hCursor;
  undefined4 uVar5;
  int *unaff_EBX;
  int *unaff_EDI;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int local_134;
  ISFGraphBuilder *local_130;
  int local_12c;
  uint uStack_128;
  HCURSOR local_124;
  uint uStack_120;
  uint uStack_11c;
  
  bVar2 = false;
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
  lVar3 = Mixer_GetDeviceGraph(&local_130,4,*(ulong *)(param_2 + 0x224));
  if (lVar3 < 0) {
    return local_134;
  }
  FUN_004e9f70(*(undefined4 *)(param_1 + 0x290),*(int *)(param_2 + 0x224) + 0x198,0);
  FUN_004ea590(*(undefined4 *)(param_1 + 0x290),4,*(undefined4 *)(param_2 + 0x224),0x1d);
  piVar8 = &local_12c;
  local_124 = (HCURSOR)0x0;
  local_12c = 0;
  iVar4 = (**(code **)*(int *)local_130)(local_130,&DAT_006335c8);
  if (iVar4 < 0) goto LAB_0056c8f0;
  puVar6 = &uStack_128;
  for (iVar4 = 0x47; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_128 = puVar1[0x43];
  local_124 = (HCURSOR)puVar1[0x44];
  uStack_120 = puVar1[0x45];
  uStack_11c = puVar1[0x46];
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  local_130 = (ISFGraphBuilder *)SetCursor(hCursor);
  Transport_Suspend();
  bVar2 = true;
  iVar4 = _FXPackage_LoadPackage_16(0,&uStack_128,1,1);
  if (iVar4 < 0) {
    iVar4 = _SfErrorHandler_MsgBox_24(DAT_00647624,0x13b,3,0x8004e031,puVar1 + 2,0);
    if (iVar4 == 6) {
      _FXPackage_LoadPackage_16(0,&uStack_128,0,0);
      goto LAB_0056c8de;
    }
    if (iVar4 == 0x65) {
      FUN_00525890(puVar1);
    }
  }
  else {
LAB_0056c8de:
    unaff_EDI = (int *)0x1;
  }
  (**(code **)(_DAT_00000000 + 8))(0);
LAB_0056c8f0:
  if (unaff_EDI != (int *)0x0) {
    FUN_004eb2b0(*(undefined4 *)(param_1 + 0x290));
  }
  FUN_004ea040(*(undefined4 *)(param_1 + 0x290),0);
  local_134 = 0;
  local_12c = 0;
  piVar7 = unaff_EBX;
  iVar4 = (**(code **)(*unaff_EBX + 0xb8))(unaff_EBX,&local_134);
  if ((-1 < iVar4) && (unaff_EBX != (int *)0x0)) {
    iVar4 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,1,&local_134,0);
    if ((iVar4 < 0) || (unaff_EDI == (int *)0x0)) {
      if (piVar7 != (int *)0x0) {
        FUN_00422ed0(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_2 + 0x224),1);
        uVar5 = _SfGetString_8(DAT_00647204,0x4f5f);
        SfMsgBox(DAT_00647624,0x30,uVar5);
      }
    }
    else {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  local_130 = (ISFGraphBuilder *)0x0;
  if (bVar2) {
    Transport_Resume(0);
    SetCursor(local_124);
  }
  return local_134;
}


