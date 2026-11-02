/* Module: 14_43260.dll
   Function: FUN_10002e10
   Address: 10002e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10002e10(uint param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 1;
  puVar1 = param_3 + param_2;
  for (; param_3 < puVar1; param_3 = param_3 + 1) {
    if ((param_1 & uVar2) == 0) {
      *param_3 = 0xbf800000;
    }
    else {
      *param_3 = 0x3f800000;
    }
    uVar2 = uVar2 << 1;
  }
  return;
}


