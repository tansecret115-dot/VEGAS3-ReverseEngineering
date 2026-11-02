/* Module: vegas30.exe
   Function: FUN_005791b0
   Address: 005791b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005791b0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_c;
  int *local_8;
  int local_4;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_00578a30(&local_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  if (local_8 == (int *)0x0) {
    return iVar1;
  }
  local_4 = 0;
  local_c = (int *)0x0;
  if (param_1 == 0) {
    uVar2 = Ordinal_2(&PTR_Rsrc_HTML_STEP9_JPG_409_0x29a5_0061be1c);
  }
  else {
    if (param_1 != 1) goto LAB_00579221;
    uVar2 = Ordinal_2(&PTR_Rsrc_HTML_STEP2_JPG_409_0xa10c_0061bdfc);
  }
  Ordinal_6(unaff_EBX);
  local_c = (int *)Ordinal_2(uVar2);
LAB_00579221:
  piVar5 = &local_4;
  piVar3 = local_8;
  piVar4 = local_8;
  FUN_00503050(&local_c);
  iVar1 = FUN_00578a50(piVar3,piVar4,piVar5);
  if ((-1 < iVar1) && (local_4 != 0)) {
    (**(code **)(*local_8 + 8))(local_8);
    local_c = local_8;
    Ordinal_6(unaff_EBX);
    uVar2 = Ordinal_2(L"format");
    Ordinal_6(unaff_ESI);
    local_c = (int *)Ordinal_2(uVar2);
    piVar5 = &local_4;
    uVar2 = extraout_ECX;
    piVar3 = local_8;
    FUN_00503050(&local_c);
    iVar1 = FUN_00578a50(uVar2,piVar3,piVar5);
    if ((-1 < iVar1) && (local_4 != 0)) {
      *param_2 = local_4;
    }
  }
  (**(code **)(*local_8 + 8))(local_8);
  local_c = (int *)0x0;
  Ordinal_6(unaff_EBX);
  return iVar1;
}


