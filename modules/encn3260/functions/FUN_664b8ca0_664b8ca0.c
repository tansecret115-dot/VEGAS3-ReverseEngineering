/* Module: encn3260.dll
   Function: FUN_664b8ca0
   Address: 664b8ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b8ca0(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  tagRECT local_14;
  
  iVar1 = FUN_664b8e40(param_1,param_2,param_3,param_4,&local_14);
  if (iVar1 != 0) {
    iVar1 = FUN_664b8d00(param_3,param_4,local_14.right,local_14.bottom);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


