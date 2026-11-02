/* Module: sfnetmedia.dll
   Function: FUN_0042f7b0
   Address: 0042f7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042f7b0(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  
  if (((param_3 == (char *)0x0) || (*param_3 != s_1_1_3_0043ada0[0])) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_00430ef0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 **)(param_1 + 0x24) = &LAB_00430f10;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
  if (unaff_ESI < 0) {
    unaff_ESI = -unaff_ESI;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
  }
  if ((7 < unaff_ESI) && (unaff_ESI < 0x10)) {
    *(int *)(*(int *)(param_1 + 0x1c) + 0x10) = unaff_ESI;
    piVar2 = FUN_0042ff80(param_1);
    *(int **)(*(int *)(param_1 + 0x1c) + 0x14) = piVar2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) == 0) {
      FUN_0042f760(param_1);
      return 0xfffffffc;
    }
    FUN_0042f710(param_1);
    return 0;
  }
  FUN_0042f760(param_1);
  return 0xfffffffe;
}


