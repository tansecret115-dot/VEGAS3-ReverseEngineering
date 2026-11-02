/* Module: vidcap30.exe
   Function: FUN_00434470
   Address: 00434470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00434470(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  HCURSOR pHVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined8 local_18;
  uint local_c;
  
  uVar4 = DAT_005bb838;
  iVar6 = 0;
  bVar2 = false;
  bVar1 = false;
  iVar3 = FUN_0042f360(DAT_005bb838);
  local_c = param_3 & 1;
  if (local_c != 0) {
    FUN_00441b30(param_1);
    FUN_0043adc0(param_1);
    FUN_0043ae30(param_1);
    FUN_0043c6a0(param_1);
    FUN_00411120(1);
  }
  if ((param_3 & 2) != 0) {
    local_18 = 1.0;
    iVar6 = param_1 + 0xd8;
    if (iVar3 == 0) {
      iVar6 = param_1 + 0xa48;
    }
    FUN_00421a20(iVar6,&local_18);
    FUN_0042ee50(uVar4,(int)local_18,local_18._4_4_);
    iVar6 = FUN_0043c6a0(param_1);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_00441be0(param_1);
  }
  bVar7 = (param_2 & 0x200) != 0;
  local_18 = (double)(CONCAT44(local_18._4_4_,param_2) & 0xffffffff00000200);
  if (((param_2 & 2) != 0) && (iVar6 = FUN_004262f0(param_1 + 0xa48,DAT_005bb55c), -1 < iVar6)) {
    bVar2 = true;
  }
  if (((param_2 & 4) != 0) && (iVar6 = FUN_00425ff0(param_1 + 0xa48,DAT_005bb560), -1 < iVar6)) {
    bVar2 = true;
  }
  if (((param_2 & 8) != 0) && (iVar6 = FUN_004260a0(param_1 + 0xa48,DAT_005bb448), -1 < iVar6)) {
    bVar2 = true;
  }
  if ((param_2 & 0x10) != 0) {
    bVar2 = true;
  }
  if ((param_2 & 0x80) != 0) {
    if (iVar3 == 0) {
      bVar1 = true;
    }
    else {
      bVar7 = true;
    }
  }
  if ((param_2 & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x1c50) = 1;
    bVar1 = true;
  }
  if ((param_2 & 0x40) != 0) {
    bVar7 = true;
  }
  if (iVar3 == 0) {
    if (DAT_005bba94 == 0) {
      if (bVar1) {
        uVar9 = 1;
        uVar4 = FUN_0042f0a0(uVar4);
        iVar6 = FUN_0043b8d0(param_1,uVar4,uVar9);
      }
      else if (bVar2) {
        fVar8 = (float10)FUN_0042ed90(uVar4);
        local_18 = (double)fVar8;
        RedrawWindow(DAT_005ba4bc,(RECT *)0x0,(HRGN)0x0,0x185);
        pHVar5 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
        pHVar5 = SetCursor(pHVar5);
        FUN_0042c770(param_1 + 0xa48);
        iVar6 = FUN_00428b80(param_1 + 0xa48,&local_18);
        if (-1 < iVar6) {
          FUN_0042ed50(uVar4,(int)local_18,local_18._4_4_);
        }
        SetCursor(pHVar5);
      }
    }
  }
  else if ((DAT_005bba94 == 0) && (bVar7)) {
    FUN_0043b8d0(param_1,0,0);
    iVar6 = FUN_0043b8d0(param_1,1,1);
    if ((int)local_18 != 0) {
      FUN_004422e0(param_1);
    }
  }
  if (local_c != 0) {
    FUN_00441b30(param_1);
    FUN_0043adc0(param_1);
    FUN_0043ae30(param_1);
    FUN_0043c6a0(param_1);
    FUN_00411120(1);
  }
  FUN_00404910(iVar6,0);
  return;
}


