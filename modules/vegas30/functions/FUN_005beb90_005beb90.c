/* Module: vegas30.exe
   Function: FUN_005beb90
   Address: 005beb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005beb90(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  local_4 = param_1;
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
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
  }
  else {
    if (iVar2 != 3) goto LAB_005bec28;
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
  }
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x78) =
         ((uint)(param_4 == 0) ^ *(uint *)(iVar2 + 0x78)) & 1 ^ *(uint *)(iVar2 + 0x78);
  }
LAB_005bec28:
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  return;
}


