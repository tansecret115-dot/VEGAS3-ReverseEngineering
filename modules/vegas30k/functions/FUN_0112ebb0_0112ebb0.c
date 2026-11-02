/* Module: vegas30k.dll
   Function: FUN_0112ebb0
   Address: 0112ebb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0112ebb0(undefined4 param_1,int *param_2)

{
  uint *puVar1;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 + -1 < 0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = *(uint **)param_2[2];
    }
    if (puVar1 != (uint *)0x0) {
      FUN_01052700(param_1,param_2,*puVar1 >> 0x1c & 1);
      _SfList_Destroy_4(param_2);
    }
  }
  return;
}


