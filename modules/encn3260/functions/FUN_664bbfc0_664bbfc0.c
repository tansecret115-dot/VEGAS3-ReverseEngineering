/* Module: encn3260.dll
   Function: FUN_664bbfc0
   Address: 664bbfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664bbfc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_664c4420(puVar1);
    *param_1 = puVar1;
    return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  *param_1 = 0;
  return -0x7ff8fff2;
}


