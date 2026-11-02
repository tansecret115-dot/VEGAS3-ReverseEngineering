/* Module: rmto3260.dll
   Function: FUN_662f5d20
   Address: 662f5d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662f5d20(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,s_0fIndexable_6630b1da + 2,&param_1);
  if (-1 < iVar1) {
    *param_2 = param_1;
  }
  return;
}


