/* Module: vidcap30.exe
   Function: FUN_00522f10
   Address: 00522f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00522f10(uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  return CONCAT44(((int)((ulonglong)uVar1 >> 0x20) - param_1[1]) - (uint)((uint)uVar1 < *param_1),
                  (uint)uVar1 - *param_1);
}


