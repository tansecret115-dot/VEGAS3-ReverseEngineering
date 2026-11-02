/* Module: tokr3260.dll
   Function: FUN_680560a0
   Address: 680560a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_680560a0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_68055e00(param_1,(int)param_2);
  if (iVar1 == -999999) {
    return -999999;
  }
  iVar1 = FUN_68055f00((int)param_1,(int)param_2);
  return (-(uint)(iVar1 != -999999) & 999999) - 999999;
}


