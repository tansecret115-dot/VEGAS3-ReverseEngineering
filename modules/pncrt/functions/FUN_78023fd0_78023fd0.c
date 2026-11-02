/* Module: pncrt.dll
   Function: FUN_78023fd0
   Address: 78023fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78023fd0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}


