/* Module: pngu3266.dll
   Function: FUN_60622840
   Address: 60622840
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_60622840(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_60622960(puVar1);
    *param_1 = iVar2;
    return (-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e;
  }
  *param_1 = 0;
  return -0x7ff8fff2;
}


