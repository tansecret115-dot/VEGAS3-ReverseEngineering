/* Module: vegas30k.dll
   Function: FUN_0119c290
   Address: 0119c290
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119c290(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if (param_2 == param_1) {
      return 1;
    }
    iVar1 = param_1[0x187] + -1;
    param_1[0x187] = iVar1;
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x160))(0), iVar1 != 0)) {
      param_1[0x187] = param_1[0x187] + 1;
      return iVar1;
    }
  }
  return 0;
}


