/* Module: oggplug.dll
   Function: FUN_0043db70
   Address: 0043db70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043db70(int *param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 1) {
    FUN_0043dba0(iVar1,param_2,(float *)param_1[1],(int)((float *)param_1[1] + iVar1),param_1[2]);
  }
  return;
}


