/* Module: encn3260.dll
   Function: FUN_664b3010
   Address: 664b3010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b3010(void *param_1,int param_2,int param_3,RECT *param_4,int *param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (*(int *)((int)param_1 + 0x28) == 0) {
    uVar1 = FUN_664b3060(param_1,param_2,param_3,&param_4->left);
  }
  else if (*(int *)((int)param_1 + 0x28) == 1) {
    uVar1 = FUN_664b3120(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return uVar1;
}


