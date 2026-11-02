/* Module: vidcap30.exe
   Function: FUN_004262f0
   Address: 004262f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004262f0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*param_1 == 8) {
    uVar1 = param_1[0x52];
    uVar2 = param_1[0x53];
    uVar3 = __aullshr();
    if ((uVar3 & 1) == param_2) {
      return 1;
    }
    uVar4 = __allshl();
    param_1[0x52] = (uint)uVar4 | uVar1 & 0xffbfffff;
    param_1[0x53] = (uint)((ulonglong)uVar4 >> 0x20) | uVar2;
  }
  return 0;
}


