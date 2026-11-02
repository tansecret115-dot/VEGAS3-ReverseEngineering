/* Module: vegas30.exe
   Function: FUN_005be910
   Address: 005be910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005be910(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar4 = 0;
  local_4 = param_1;
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),0);
  iVar2 = FUN_005be790(param_2,param_3,&local_4);
  if (iVar2 == 1) {
    piVar1 = *(int **)(param_1 + 0x78);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((local_4 < 0) || (iVar2 + -1 < local_4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + local_4 * 4);
    }
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x78) & 0x20) != 0)) goto LAB_005be9a3;
    puVar3 = *(undefined4 **)(iVar2 + 0x60);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
      return 0;
    }
  }
  else if (iVar2 == 2) {
    if (param_1 == -0x80) goto LAB_005be9a3;
    puVar3 = (undefined4 *)FUN_00522a00(local_4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_005be9a3;
  }
  else {
    if (iVar2 != 3) goto LAB_005be9a3;
    piVar1 = *(int **)(param_1 + 0x7c);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((local_4 < 0) || (iVar2 + -1 < local_4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + local_4 * 4);
    }
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x78) & 0x20) != 0)) goto LAB_005be9a3;
    puVar3 = *(undefined4 **)(iVar2 + 0x60);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
      return 0;
    }
  }
  uVar4 = *puVar3;
LAB_005be9a3:
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
  return uVar4;
}


