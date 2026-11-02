/* Module: rmto3260.dll
   Function: FUN_662fa940
   Address: 662fa940
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662fa940(void *param_1)

{
  int iVar1;
  int iVar2;
  void *local_8;
  
  if (*(ushort *)((int)param_1 + 0x38) < 4) {
    return -0x7ffbfffc;
  }
  local_8 = param_1;
  iVar1 = (**(code **)(**(int **)((int)param_1 + 4) + 0x20))(0,2);
  if (iVar1 == 0) {
    iVar2 = (**(code **)(**(int **)((int)param_1 + 4) + 0x24))();
    iVar1 = FUN_662fa870(param_1,0x52615443,'\0');
    if ((((iVar1 == 0) && (iVar1 = FUN_662fa870(param_1,0,'\0'), iVar1 == 0)) &&
        (iVar1 = FUN_662fa9e0(param_1,(int *)&local_8), iVar1 == 0)) &&
       (iVar1 = (**(code **)(**(int **)((int)param_1 + 4) + 0x20))(iVar2 + 4,0), iVar1 == 0)) {
      iVar1 = FUN_662fa870(param_1,(uint)local_8,'\0');
    }
  }
  return iVar1;
}


