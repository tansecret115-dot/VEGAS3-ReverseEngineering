/* Module: rn5a3260.dll
   Function: FUN_628a2dd0
   Address: 628a2dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2dd0(char *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  char local_204 [256];
  char local_104 [256];
  
  bVar1 = false;
  while( true ) {
    while ((iVar2 = isspace((int)*param_1), iVar2 != 0 || (*param_1 == ','))) {
      if (*param_1 == '\0') {
        return 0;
      }
      param_1 = param_1 + 1;
    }
    if (*param_1 == '\0') break;
    iVar2 = FUN_628a2cf0((uint *)&param_1,local_204,local_104);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      FUN_628a1ee0(param_2,local_204,local_104);
    }
    if (bVar1) {
      return 0;
    }
  }
  return 0;
}


