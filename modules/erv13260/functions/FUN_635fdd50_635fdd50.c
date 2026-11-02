/* Module: erv13260.dll
   Function: FUN_635fdd50
   Address: 635fdd50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635fdd50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            int param_5)

{
  undefined4 uVar1;
  
  FUN_635f2090(param_5 + 0x1cd3);
  uVar1 = *param_4;
  *param_4 = *param_2;
  *param_2 = uVar1;
  return;
}


