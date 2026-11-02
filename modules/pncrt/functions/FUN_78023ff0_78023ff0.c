/* Module: pncrt.dll
   Function: FUN_78023ff0
   Address: 78023ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __cdecl FUN_78023ff0(int *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}


