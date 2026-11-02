/* Module: sfcdi.dll
   Function: FUN_5bf44f40
   Address: 5bf44f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_5bf44f40(uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  return CONCAT44(((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1),
                  (uint)uVar1 - *param_1);
}


