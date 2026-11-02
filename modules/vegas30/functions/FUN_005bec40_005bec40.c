/* Module: vegas30.exe
   Function: FUN_005bec40
   Address: 005bec40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_005bec40(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,int *param_6
            ,uint *param_7,uint *param_8,int *param_9)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_4;
  
  local_4 = param_1;
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),0);
  uVar3 = 0;
  iVar1 = FUN_005be790(param_2,param_4,&local_4);
  if (iVar1 == 1) {
    piVar2 = *(int **)(param_1 + 0x78);
    if (piVar2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *piVar2;
    }
    if ((local_4 < 0) || (iVar1 + -1 < local_4)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(piVar2[2] + local_4 * 4);
    }
    if (((iVar1 == 0) || (piVar2 = *(int **)(iVar1 + 0x60), piVar2 == (int *)0x0)) ||
       (*piVar2 <= param_3)) goto LAB_005bee5f;
    piVar2 = (int *)(piVar2[1] * param_3 + piVar2[2]);
    if (param_5 != (int *)0x0) {
      *param_5 = piVar2[6];
    }
    if (param_6 != (int *)0x0) {
      *param_6 = *piVar2;
      param_6[1] = piVar2[1];
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)piVar2[8] >> 1 & 1;
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)piVar2[8] >> 2 & 1;
    }
joined_r0x005bee4d:
    if (param_9 != (int *)0x0) {
      *param_9 = piVar2[2];
      param_9[1] = piVar2[3];
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_005bee5f;
      piVar2 = *(int **)(param_1 + 0x7c);
      if (piVar2 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *piVar2;
      }
      if ((local_4 < 0) || (iVar1 + -1 < local_4)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(piVar2[2] + local_4 * 4);
      }
      if (((iVar1 == 0) || (piVar2 = *(int **)(iVar1 + 0x60), piVar2 == (int *)0x0)) ||
         (*piVar2 <= param_3)) goto LAB_005bee5f;
      piVar2 = (int *)(piVar2[1] * param_3 + piVar2[2]);
      if (param_5 != (int *)0x0) {
        *param_5 = piVar2[6];
      }
      if (param_6 != (int *)0x0) {
        *param_6 = *piVar2;
        param_6[1] = piVar2[1];
      }
      if (param_7 != (uint *)0x0) {
        *param_7 = (uint)piVar2[8] >> 1 & 1;
      }
      if (param_8 != (uint *)0x0) {
        *param_8 = (uint)piVar2[8] >> 2 & 1;
      }
      goto joined_r0x005bee4d;
    }
    if (((param_1 == -0x80) || (piVar2 = (int *)FUN_00522a00(local_4), piVar2 == (int *)0x0)) ||
       (*piVar2 <= param_3)) goto LAB_005bee5f;
    piVar2 = (int *)(piVar2[1] * param_3 + piVar2[2]);
    if (param_5 != (int *)0x0) {
      *param_5 = piVar2[3];
    }
    if (param_6 != (int *)0x0) {
      *param_6 = piVar2[1];
      param_6[1] = piVar2[2];
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)piVar2[5] >> 1 & 1;
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)piVar2[5] >> 2 & 1;
    }
    if (param_9 != (int *)0x0) {
      iVar1 = *piVar2;
      *param_9 = *(int *)(iVar1 + (int)piVar2);
      param_9[1] = *(int *)(iVar1 + 4 + (int)piVar2);
    }
  }
  uVar3 = 1;
LAB_005bee5f:
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
  return uVar3;
}


