/* Module: pncrt.dll
   Function: FUN_780301a0
   Address: 780301a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780301a0(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_78030170(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_78030170(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_78030170(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_78030170(param_1[2],param_2[2],param_1 + 2);
  return;
}


