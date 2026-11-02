/* Module: sftrkfx1.dll
   Function: FUN_5cba6cd0
   Address: 5cba6cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba6cd0(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x28) + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ftol();
  }
  uVar1 = *(uint *)(param_1 + 0x270);
  *(uint *)(param_1 + 0x270) = uVar1 + (uint)uVar2;
  *(uint *)(param_1 + 0x274) =
       *(int *)(param_1 + 0x274) + (int)((ulonglong)uVar2 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar2)
  ;
  return 0;
}


