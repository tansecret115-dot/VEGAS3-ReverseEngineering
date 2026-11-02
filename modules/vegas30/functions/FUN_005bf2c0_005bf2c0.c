/* Module: vegas30.exe
   Function: FUN_005bf2c0
   Address: 005bf2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_005bf2c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_4;
  
  local_4 = param_1;
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
  uVar4 = 0;
  iVar3 = FUN_005be790(param_2,param_3,&local_4);
  if (iVar3 == 1) {
    piVar1 = *(int **)(param_1 + 0x78);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((local_4 < 0) || (iVar3 + -1 < local_4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar1[2] + local_4 * 4);
    }
    if (iVar3 == 0) goto LAB_005bf38f;
    iVar2 = *(int *)(iVar3 + 0x60);
joined_r0x005bf374:
    if (iVar2 == 0) goto LAB_005bf38f;
    _SfVideoKeyframe_InsertSmart_20(iVar3,param_4,param_5,0xffffffff,0xffffffff);
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) goto LAB_005bf38f;
      piVar1 = *(int **)(param_1 + 0x7c);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((local_4 < 0) || (iVar3 + -1 < local_4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar1[2] + local_4 * 4);
      }
      if (iVar3 == 0) goto LAB_005bf38f;
      iVar2 = *(int *)(iVar3 + 0x60);
      goto joined_r0x005bf374;
    }
    if (param_1 + 0x80 == 0) goto LAB_005bf38f;
    FUN_0050c870(param_1 + 0x80,param_4,param_5,local_4);
  }
  uVar4 = 1;
LAB_005bf38f:
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  return uVar4;
}


