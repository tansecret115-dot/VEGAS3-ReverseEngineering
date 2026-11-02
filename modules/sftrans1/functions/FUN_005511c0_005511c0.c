/* Module: sftrans1.dll
   Function: FUN_005511c0
   Address: 005511c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_005511c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar1 = param_7;
  iVar6 = param_6;
  if (param_6 < param_4) {
    param_7 = param_5;
    iVar6 = param_4;
    param_4 = param_6;
    param_5 = iVar1;
  }
  if (param_4 != iVar6) {
    if (param_4 < 0) {
      param_5 = ftol();
    }
    if (*(int *)(param_1 + 0x140) < iVar6) {
      param_7 = ftol();
    }
    if (param_5 < 0) {
      ftol();
    }
    else if (*(int *)(param_1 + 0x144) < param_5) {
      ftol();
    }
    if (param_7 < 0) {
      ftol();
    }
    else if (*(int *)(param_1 + 0x144) < param_7) {
      ftol();
    }
  }
  *(undefined4 *)(param_1 + 0x13e8) = 0x41;
  *(undefined4 *)(param_1 + 0x13ec) = 100;
  FUN_00551480();
  uVar7 = 0;
  uVar2 = ftol(0);
  uVar3 = ftol(uVar2);
  uVar4 = ftol(uVar3);
  uVar5 = ftol(uVar4);
  FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x180),uVar5,uVar4,uVar3,uVar2,uVar7);
  return;
}


