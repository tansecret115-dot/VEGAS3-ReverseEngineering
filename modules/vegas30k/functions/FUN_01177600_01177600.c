/* Module: vegas30k.dll
   Function: FUN_01177600
   Address: 01177600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01177600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return 0x8000ffff;
  }
  if ((param_5 < 1) && (param_5 < 0)) {
    *(undefined4 *)(param_1 + 0x188) = param_2;
    *(undefined4 *)(param_1 + 0x18c) = param_3;
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_0118f430(param_2,param_3);
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_0118e2f0(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
    }
    uVar1 = 0;
  }
  return uVar1;
}


