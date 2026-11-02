/* Module: oggplug.dll
   Function: FUN_0043ef30
   Address: 0043ef30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043ef30(int *param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 1) {
    FUN_0043ef60(iVar1,param_2,(float *)param_1[1],(int)((float *)param_1[1] + iVar1),param_1[2]);
  }
  return;
}


