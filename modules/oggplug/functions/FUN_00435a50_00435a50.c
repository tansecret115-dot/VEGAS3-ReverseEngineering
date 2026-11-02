/* Module: oggplug.dll
   Function: FUN_00435a50
   Address: 00435a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00435a50(int *param_1,int *param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  param_1[2] = (int)param_2;
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  pvVar1 = FUN_00435720(param_2);
  param_1[3] = (int)pvVar1;
  piVar2 = FUN_004354d0((int)param_1);
  param_1[5] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    FUN_00435930(param_1);
    return 0xffffffff;
  }
  return 0;
}


