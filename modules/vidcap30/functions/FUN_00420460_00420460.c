/* Module: vidcap30.exe
   Function: FUN_00420460
   Address: 00420460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00420460(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
            int *param_6,undefined4 param_7,int *param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int **unaff_EDI;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int iStack_8;
  
  iVar5 = 0;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_c = 0;
  if (*param_8 == 0) {
    piStack_24 = param_8;
    piStack_28 = param_6;
    piStack_2c = param_5;
    piStack_30 = param_4;
    uVar1 = FUN_00420800(param_1,param_2,param_3);
    return uVar1;
  }
  piStack_24 = &local_10;
  piStack_28 = param_6;
  piStack_2c = (int *)0x4204bc;
  iVar2 = (**(code **)(*param_6 + 0x28))();
  if (-1 < iVar2) {
    piStack_30 = (int *)0x4204ce;
    piStack_2c = unaff_EBX;
    (**(code **)(*unaff_EBX + 0x14))();
    piStack_30 = &local_10;
    puVar7 = &stack0xffffffe0;
    piVar6 = (int *)0x1;
    iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI);
    iVar2 = local_c;
    while (iVar3 == 0) {
      (**(code **)(*piStack_30 + 0x24))(piStack_30,&piStack_24);
      if (unaff_EDI == (int **)0x0) {
        unaff_EDI = &piStack_2c;
      }
      (**(code **)(*piVar6 + 0x18))(piVar6,&piStack_30);
      if (piVar6 == (int *)0x0) {
        uVar4 = 1;
      }
      else {
        (**(code **)(*piVar6 + 8))(piVar6);
        uVar4 = 2;
      }
      piVar6 = (int *)0x0;
      if ((((undefined1 *)*piStack_28 == puVar7) && (((uint)piStack_24 & uVar4) != 0)) &&
         (((unaff_EDI == (int **)0x0 && ((iVar2 == 0 && (iStack_8 == 0)))) ||
          (iVar3 = FUN_00420610(unaff_EBP,unaff_EDI,iVar2,iStack_8), iVar3 == 0)))) {
        *local_14 = unaff_EBP;
        (**(code **)(*unaff_EBP + 4))(unaff_EBP);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 1;
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      piStack_30 = (int *)0x0;
      param_8 = param_1;
      if (*param_1 <= iVar5) break;
      iVar3 = (**(code **)(*piStack_2c + 0xc))(piStack_2c,1,&piStack_30,&stack0xffffffe0);
    }
    (**(code **)(*piStack_2c + 8))(piStack_2c);
    if (iVar5 != 0) {
      if (iVar5 != *param_8) {
        *param_8 = iVar5;
        return 1;
      }
      return 0;
    }
  }
  return 0x80004002;
}


