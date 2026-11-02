/* Module: Setup.exe
   Function: FUN_00401930
   Address: 00401930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401930(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 == iVar2) {
    iVar1 = param_1[1];
    iVar2 = param_2[1];
    if (iVar1 == iVar2) {
      if (param_1[2] == param_2[2]) {
        return 0;
      }
      return ((param_1[2] <= param_2[2]) - 1 & 2) - 1;
    }
  }
  return ((iVar1 <= iVar2) - 1 & 2) - 1;
}


