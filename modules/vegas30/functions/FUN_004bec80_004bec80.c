/* Module: vegas30.exe
   Function: FUN_004bec80
   Address: 004bec80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bec80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  
  FUN_00455e00(param_1);
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc38);
  }
  iVar1 = FUN_004e4c90();
  if (*(int *)(param_1 + 0xc40) == 0) {
    uVar3 = *(uint *)(param_1 + 0x174) & 0xffff;
    if (param_3 != 0) {
      *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_1 + 0xb60);
      *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_1 + 0xb68);
      *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_1 + 0xb64);
      *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(param_1 + 0xb6c);
    }
    FUN_004530a0(param_1,0x8001);
    if ((*(uint *)(param_1 + 0x18) & 0x10000) != 0) {
      if (uVar3 == 10) {
        FUN_00453a80(param_1,*(undefined4 *)(param_1 + 0xb48),*(undefined4 *)(param_1 + 0xb4c),
                     *(undefined4 *)(param_1 + 0xb50),*(undefined4 *)(param_1 + 0xb54));
        return;
      }
      if (uVar3 == 9) {
        FUN_00453a50(param_1,*(undefined4 *)(param_1 + 0xb48),*(undefined4 *)(param_1 + 0xb4c),
                     *(undefined4 *)(param_1 + 0xb50),*(undefined4 *)(param_1 + 0xb54));
        return;
      }
      if ((*(int *)(param_1 + 0xb7c) < 1) && (*(int *)(param_1 + 0xb7c) < 0)) {
        FUN_00453a80(param_1,*(undefined4 *)(param_1 + 0xb48),*(undefined4 *)(param_1 + 0xb4c),
                     *(undefined4 *)(param_1 + 0xb50),*(undefined4 *)(param_1 + 0xb54));
        return;
      }
      FUN_00453a50(param_1,*(undefined4 *)(param_1 + 0xb48),*(undefined4 *)(param_1 + 0xb4c),
                   *(undefined4 *)(param_1 + 0xb50),*(undefined4 *)(param_1 + 0xb54));
      return;
    }
    if (*(int *)(param_1 + 0xab4) != 0) {
      (**(code **)(*(int *)(param_1 + 0xab4) + 0x20))(param_1,0);
    }
    FUN_004530a0(param_1,4);
  }
  else {
    if (param_3 == 0) {
      if ((*(uint *)(param_2 + 0x20) >> 0x10 & 0xf) == 0xc) {
        pcVar4 = FUN_004bab10;
      }
      else {
        pcVar4 = (code *)&LAB_004baab0;
      }
      _SfList_Sort_12(iVar2,0,pcVar4);
      FUN_004ba9e0(param_1);
    }
    if (((*(int *)(param_1 + 0xbc8) != 0) && (DAT_0064cb8c != 0)) && (DAT_0064cb90 != 0)) {
      FUN_004ea040(*(int *)(param_1 + 0xbc8),param_3);
      *(uint *)**(undefined4 **)(param_1 + 0xbc8) =
           *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x10000;
      DAT_0064cb8c = 0;
      DAT_0064cb90 = 0;
    }
    if ((iVar1 == param_1) && (param_3 == 0)) {
      FUN_004e4cd0(1);
      return;
    }
  }
  return;
}


