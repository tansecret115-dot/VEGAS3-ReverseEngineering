/* Module: vegas30k.dll
   Function: FUN_01194550
   Address: 01194550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_01194550(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  undefined8 uVar1;
  
  FUN_01194630(param_2,param_3,param_6);
  if (-1 < param_5) {
    FUN_011947a0(param_4,param_5);
  }
  if (-1 < param_3) {
    uVar1 = ftol();
    *(undefined8 *)(param_1 + 0x700) = uVar1;
    *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x700);
    *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_1 + 0x704);
    *(undefined4 *)(param_1 + 0x710) = 0;
    *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x6f0);
    *(undefined4 *)(param_1 + 0x714) = 0;
    *(undefined4 *)(param_1 + 0x760) = 0;
    *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x704);
    if (*(int *)(param_1 + 0x6a4) != 0) {
      FUN_01194940();
    }
  }
  return 0;
}


