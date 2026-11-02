/* Module: pncrt.dll
   Function: FUN_78024010
   Address: 78024010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78024010(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)*param_1;
  puVar2 = puVar1 + 2;
  *param_1 = puVar2;
  return CONCAT22((short)((uint)puVar2 >> 0x10),*puVar1);
}


