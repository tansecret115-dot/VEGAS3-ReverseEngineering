/* Module: sftrans1.dll
   Function: FUN_00487420
   Address: 00487420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00487420(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2[2] - *param_2 <= param_1[2] - iVar1) {
    iVar2 = param_1[3] - param_1[1];
    if (param_2[3] - param_2[1] <= iVar2) {
      return CONCAT44(((param_2[1] - param_2[3]) + iVar2) / 2 + param_1[1],
                      (((*param_2 - param_2[2]) - iVar1) + param_1[2]) / 2 + iVar1);
    }
  }
  return 0;
}


