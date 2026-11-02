/* Module: vidcap30.exe
   Function: FUN_0042b6d0
   Address: 0042b6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b6d0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (*param_1 == 7) {
    uVar2 = __allshl();
    param_1[0x52] = (uint)uVar2 | param_1[0x52] & 0xffffffdfU;
    param_1[0x53] = (uint)((ulonglong)uVar2 >> 0x20) | param_1[0x53];
    uVar1 = FUN_0042b3f0(param_1,param_2,param_2);
  }
  return uVar1;
}


