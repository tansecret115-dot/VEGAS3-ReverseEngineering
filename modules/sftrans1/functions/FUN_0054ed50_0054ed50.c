/* Module: sftrans1.dll
   Function: FUN_0054ed50
   Address: 0054ed50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0054ed50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4);
  if (((param_3 == 0) && (iVar2 != 0)) && (*(char *)(iVar2 + 0x12) == '\0')) {
    return 0;
  }
  FUN_004dc400(iVar1,param_2,1,1);
  iVar1 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  if (iVar1 <= param_2) {
    if ((param_2 + -1 < 0) || (iVar1 <= param_2 + -1)) goto LAB_0054edc6;
    param_2 = param_2 + -1;
  }
  FUN_0054da10(param_2);
LAB_0054edc6:
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  return 1;
}


