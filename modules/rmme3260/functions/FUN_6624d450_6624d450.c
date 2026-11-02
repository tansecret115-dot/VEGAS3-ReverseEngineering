/* Module: rmme3260.dll
   Function: FUN_6624d450
   Address: 6624d450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6624d450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = windraw_GetColorConverter(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (*(code *)param_4)(param_1,param_3,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


