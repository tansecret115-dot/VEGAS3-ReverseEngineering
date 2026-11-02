/* Module: sftrans1.dll
   Function: FUN_0054a9e0
   Address: 0054a9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0054a9e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = param_6;
  iVar8 = param_5;
  iVar9 = param_5;
  iVar4 = param_7;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar2 = ftol();
    iVar3 = ftol();
    iVar4 = ftol();
    iVar5 = ftol();
    iVar9 = iVar4;
    if (param_4 == param_6) {
      if ((param_4 < iVar2) || (iVar2 = iVar3, iVar3 < param_4)) {
        param_6 = iVar2;
        param_4 = param_6;
      }
      if ((iVar4 <= param_5) && (iVar9 = param_5, iVar5 < param_5)) {
        iVar9 = iVar5;
      }
      if ((iVar4 <= param_7) && (iVar4 = param_7, iVar5 < param_7)) {
        iVar4 = iVar5;
      }
    }
    else if (param_7 == param_5) {
      if ((iVar4 <= param_5) && (iVar9 = param_5, iVar4 = param_7, iVar5 < param_5)) {
        iVar9 = iVar5;
        iVar4 = iVar5;
      }
    }
    else {
      if (param_6 < param_4) {
        param_6 = param_4;
        param_4 = iVar1;
        param_5 = param_7;
        param_7 = iVar8;
      }
      if (iVar4 <= param_5) {
        if (iVar5 < param_5) {
          if (param_7 < iVar4) {
            uVar6 = ftol();
            uVar7 = ftol();
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,iVar5,uVar6,iVar5,
                         0);
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),uVar6,iVar5,uVar7,iVar4,0)
            ;
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),uVar7,iVar4,param_6,iVar4,
                         param_8);
            return;
          }
          param_5 = iVar5;
          iVar8 = iVar5;
          if (param_7 <= iVar5) {
            iVar8 = ftol();
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,iVar5,iVar8,iVar5,
                         0);
            param_4 = iVar8;
            iVar9 = iVar5;
            iVar4 = param_7;
            goto LAB_0054ad9f;
          }
        }
        else {
          if (param_7 < iVar4) {
            uVar6 = ftol();
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,param_5,uVar6,
                         iVar4,0);
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),uVar6,iVar4,param_6,iVar4,
                         param_8);
            return;
          }
          iVar8 = param_7;
          if (iVar5 < param_7) {
            uVar6 = ftol();
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,param_5,uVar6,
                         iVar5,0);
            FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),uVar6,iVar5,param_6,iVar5,
                         param_8);
            return;
          }
        }
        FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,param_5,param_6,iVar8,
                     param_8);
        return;
      }
      if (iVar4 <= param_7) {
        if (iVar5 < param_7) {
          uVar6 = ftol();
          uVar7 = ftol();
          FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,iVar4,uVar6,iVar4,0)
          ;
          FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),uVar6,iVar4,uVar7,iVar5,0);
          FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),uVar7,iVar5,param_6,iVar5,
                       param_8);
          return;
        }
        iVar8 = ftol();
        FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,iVar4,iVar8,iVar4,0);
        param_4 = iVar8;
        iVar4 = param_7;
      }
    }
  }
LAB_0054ad9f:
  FUN_0054a590(param_2,param_3,*(undefined4 *)(param_1 + 0x184),param_4,iVar9,param_6,iVar4,param_8)
  ;
  return;
}


