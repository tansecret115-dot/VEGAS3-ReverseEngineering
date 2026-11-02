/* Module: vegas30.exe
   Function: FUN_004b7000
   Address: 004b7000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b7000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = ftol();
  _SfNanoTimeToText_20
            (param_2,param_1 + 0x20,*(uint *)(param_1 + 0x48) + (uint)uVar1,
             *(int *)(param_1 + 0x4c) + (int)((ulonglong)uVar1 >> 0x20) +
             (uint)CARRY4(*(uint *)(param_1 + 0x48),(uint)uVar1),param_5);
  return;
}


