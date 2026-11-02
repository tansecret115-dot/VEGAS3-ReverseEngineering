/* Module: vegas30.exe
   Function: FUN_0047f8a0
   Address: 0047f8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0047f8a0(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = ftol();
  uVar1 = (uint)uVar2 - *(uint *)(param_2 + 0x18);
  return CONCAT44((((int)((ulonglong)uVar2 >> 0x20) - *(int *)(param_2 + 0x1c)) -
                  (uint)((uint)uVar2 < *(uint *)(param_2 + 0x18))) + *(int *)(param_1 + 0xb8c) +
                  (uint)CARRY4(uVar1,*(uint *)(param_1 + 0xb88)),uVar1 + *(uint *)(param_1 + 0xb88))
  ;
}


