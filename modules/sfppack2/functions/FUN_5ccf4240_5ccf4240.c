/* Module: sfppack2.dll
   Function: FUN_5ccf4240
   Address: 5ccf4240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccf4240(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x118) + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ftol();
  }
  uVar1 = *(uint *)(param_1 + 0x4c8);
  *(uint *)(param_1 + 0x4c8) = uVar1 + (uint)uVar2;
  *(uint *)(param_1 + 0x4cc) =
       *(int *)(param_1 + 0x4cc) + (int)((ulonglong)uVar2 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar2)
  ;
  return 0;
}


