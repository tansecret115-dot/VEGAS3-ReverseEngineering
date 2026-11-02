/* Module: rmme3260.dll
   Function: FUN_6624e120
   Address: 6624e120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624e120(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  tagRECT local_14;
  
  iVar1 = FUN_6624e2c0(param_1,param_2,param_3,param_4,&local_14);
  if (iVar1 != 0) {
    iVar1 = FUN_6624e180(param_3,param_4,local_14.right,local_14.bottom);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


