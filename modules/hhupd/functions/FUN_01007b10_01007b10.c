/* Module: hhupd.exe
   Function: FUN_01007b10
   Address: 01007b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_01007b10(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 2) {
    iVar1 = FUN_010088f0(param_1,param_3,param_4);
    return iVar1;
  }
  if (param_2 == 1) {
    iVar1 = FUN_01008280(param_3,param_1,param_1,param_3,param_4);
    return iVar1;
  }
  if (param_2 == 3) {
    iVar1 = FUN_01008190(param_1,param_3,param_4);
    return iVar1;
  }
  return -1;
}


