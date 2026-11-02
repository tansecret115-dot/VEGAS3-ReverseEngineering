/* Module: pngu3266.dll
   Function: FUN_6061f5e0
   Address: 6061f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6061f5e0(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  do {
    bVar1 = *(byte *)*param_1;
    uVar2 = *param_1 + bVar1 + 1;
    *param_1 = uVar2;
    if (bVar1 == 0) {
      return;
    }
  } while ((param_2 == 0) || (uVar2 < param_2));
  return;
}


