/* Module: pncrt.dll
   Function: FUN_78015ea0
   Address: 78015ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_78015ea0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (_daylight == 0) {
    return false;
  }
  uVar7 = param_1[5];
  if ((uVar7 == DAT_78040520) && (uVar7 == DAT_78040530)) goto LAB_78016074;
  if (DAT_78042518 == 0) {
    FUN_78016110(1,1,uVar7,4,1,0,0,2,0,0,0);
    uVar7 = param_1[5];
    uVar11 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar4 = 2;
    uVar1 = 0;
    uVar9 = 5;
    uVar8 = 10;
LAB_78016068:
    uVar5 = 0;
    iVar6 = 1;
  }
  else {
    if (DAT_780425b8 != 0) {
      uVar10 = (uint)DAT_780425bc._2_2_;
      uVar3 = 0;
      uVar1 = 0;
    }
    else {
      uVar3 = DAT_780425bc & 0xffff;
      uVar10 = 0;
      uVar1 = (uint)DAT_780425bc._2_2_;
    }
    FUN_78016110(1,(uint)(DAT_780425b8 == 0),uVar7,(uint)DAT_780425ba,uVar1,uVar3,uVar10,
                 DAT_780425c0 & 0xffff,DAT_780425c0 >> 0x10,DAT_780425c4 & 0xffff,
                 DAT_780425c4 >> 0x10);
    if (DAT_78042564 == 0) {
      uVar11 = (uint)DAT_78042570._2_2_;
      uVar3 = DAT_78042570 & 0xffff;
      uVar10 = (uint)DAT_7804256c._2_2_;
      uVar4 = DAT_7804256c & 0xffff;
      uVar1 = DAT_78042568 & 0xffff;
      uVar9 = (uint)DAT_78042568._2_2_;
      uVar8 = (uint)DAT_78042566;
      uVar7 = param_1[5];
      goto LAB_78016068;
    }
    uVar11 = (uint)DAT_78042570._2_2_;
    uVar3 = DAT_78042570 & 0xffff;
    uVar10 = (uint)DAT_7804256c._2_2_;
    uVar5 = (uint)DAT_78042568._2_2_;
    uVar4 = DAT_7804256c & 0xffff;
    uVar7 = param_1[5];
    uVar8 = (uint)DAT_78042566;
    uVar1 = 0;
    uVar9 = 0;
    iVar6 = 0;
  }
  FUN_78016110(0,iVar6,uVar7,uVar8,uVar9,uVar1,uVar5,uVar4,uVar10,uVar3,uVar11);
LAB_78016074:
  iVar6 = param_1[7];
  if (DAT_78040524 < DAT_78040534) {
    if ((iVar6 < DAT_78040524) || (DAT_78040534 < iVar6)) {
      return false;
    }
    if ((DAT_78040524 < iVar6) && (iVar6 < DAT_78040534)) {
      return true;
    }
  }
  else {
    if ((iVar6 < DAT_78040534) || (DAT_78040524 < iVar6)) {
      return true;
    }
    if ((DAT_78040534 < iVar6) && (iVar6 < DAT_78040524)) {
      return false;
    }
  }
  iVar2 = (*param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c) * 1000;
  if (iVar6 != DAT_78040524) {
    return iVar2 < DAT_78040538;
  }
  return DAT_78040528 <= iVar2;
}


