/* Module: vegas30k.dll
   Function: FUN_01137100
   Address: 01137100
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_01137100(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  param_4 = param_4 * 0x44;
  iVar2 = *(int *)(param_1 + 0x150) + param_4;
  if (*(int *)(iVar2 + 0x3c) == 0) {
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x24) + 0x14))(*(int **)(iVar2 + 0x24));
    *(undefined4 *)(param_4 + 0x38 + *(int *)(param_1 + 0x150)) = 0;
    return iVar2 == 0;
  }
  local_10 = *param_3;
  local_c = param_3[1];
  local_8 = *(int *)(iVar2 + 8) + local_10;
  local_4 = *(int *)(iVar2 + 0xc) + local_c;
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x24) + 0x10))
                    (*(int **)(iVar2 + 0x24),param_2,&local_10,0);
  if (iVar2 != 0) {
    return false;
  }
  *(undefined4 *)(param_4 + 0x38 + *(int *)(param_1 + 0x150)) = 1;
  piVar1 = *(int **)(param_4 + 0x24 + *(int *)(param_1 + 0x150));
  iVar2 = (**(code **)(*piVar1 + 0x20))
                    (piVar1,-(*(int *)(param_4 + *(int *)(param_1 + 0x150) + 0x3c) != 0) & 5);
  return iVar2 == 0;
}


