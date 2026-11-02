/* Module: oggplug.dll
   Function: FUN_00440540
   Address: 00440540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00440540(int *param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  
  *param_1 = param_2;
  pvVar1 = calloc(param_2 * 3,4);
  param_1[1] = (int)pvVar1;
  piVar2 = calloc(0x20,4);
  param_1[2] = (int)piVar2;
  FUN_00440580(param_2,param_1[1],piVar2);
  return;
}


