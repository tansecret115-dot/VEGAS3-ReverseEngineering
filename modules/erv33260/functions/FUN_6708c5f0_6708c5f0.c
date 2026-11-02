/* Module: erv33260.dll
   Function: FUN_6708c5f0
   Address: 6708c5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6708c5f0(undefined4 param_1,byte *param_2,int param_3,int *param_4,char *param_5,int param_6,
            undefined *param_7)

{
  int iVar1;
  char cVar2;
  char local_6;
  
  (*(code *)PTR_FUN_67091f5c)(param_3,param_6);
  iVar1 = (*(code *)param_7)(param_3);
  local_6 = iVar1 < *param_4;
  if ((bool)local_6) {
    *param_4 = iVar1;
  }
  (*(code *)PTR_FUN_67091f60)(param_3,param_6);
  iVar1 = (*(code *)param_7)(param_3);
  if (iVar1 < *param_4) {
    *param_4 = iVar1;
    local_6 = -1;
  }
  (**(code **)(&UNK_67091f68 + *(int *)(&UNK_67091fbc + local_6 * 4) * 4))(param_3,param_6);
  iVar1 = (*(code *)param_7)(param_3);
  cVar2 = iVar1 < *param_4;
  if ((bool)cVar2) {
    *param_4 = iVar1;
  }
  (**(code **)(&UNK_67091f78 + *(int *)(&UNK_67091fbc + local_6 * 4) * 4))(param_3,param_6);
  iVar1 = (*(code *)param_7)(param_3);
  if (iVar1 < *param_4) {
    *param_4 = iVar1;
    cVar2 = -1;
  }
  *param_5 = *param_5 + local_6;
  param_5[1] = param_5[1] + cVar2;
  return;
}


