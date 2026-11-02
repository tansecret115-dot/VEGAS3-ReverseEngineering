/* Module: pngu3266.dll
   Function: FUN_606228a0
   Address: 606228a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_606228a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_60622d00(puVar1);
    *param_1 = puVar1;
    return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  *param_1 = 0;
  return -0x7ff8fff2;
}


