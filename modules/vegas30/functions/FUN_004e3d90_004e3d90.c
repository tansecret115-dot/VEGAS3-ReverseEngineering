/* Module: vegas30.exe
   Function: FUN_004e3d90
   Address: 004e3d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004e3d90(int param_1,int param_2,int *param_3,byte param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = param_3;
  uVar3 = 0;
  if ((((*(int **)(param_2 + 0xcd8) != param_3) && ((param_4 & 0x80) == 0)) &&
      (param_3 != (int *)0x0)) && (0 < *param_3)) {
    if (param_5 != 0) {
      iVar2 = FUN_004047d0(0x80,1);
      if (iVar2 != 0) {
        iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 8),iVar2,param_8,2);
        if ((iVar2 == 0) || (iVar2 == 2)) goto LAB_004e3df5;
      }
    }
    uVar3 = FUN_004e3c80(piVar1,1);
  }
LAB_004e3df5:
  param_3 = *(int **)(param_2 + 0x16c);
  if (param_3 != (int *)0x0) {
    FUN_004abbe0(param_2,param_3,0);
    FUN_004abac0(&param_3);
    *(undefined4 *)(param_2 + 0x16c) = 0;
  }
  return uVar3;
}


