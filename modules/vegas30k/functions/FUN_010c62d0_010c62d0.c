/* Module: vegas30k.dll
   Function: FUN_010c62d0
   Address: 010c62d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_010c62d0(uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  return CONCAT44(((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1),
                  (uint)uVar1 - *param_1);
}


