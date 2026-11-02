/* Module: InstMsi-x86w.exe
   Function: FUN_01007c20
   Address: 01007c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_01007c20(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 2) {
    iVar1 = FUN_01008a00(param_1,param_3,param_4);
    return iVar1;
  }
  if (param_2 == 1) {
    iVar1 = FUN_01008390(param_3,param_1,param_1,param_3,param_4);
    return iVar1;
  }
  if (param_2 == 3) {
    iVar1 = FUN_010082a0(param_1,param_3,param_4);
    return iVar1;
  }
  return -1;
}


