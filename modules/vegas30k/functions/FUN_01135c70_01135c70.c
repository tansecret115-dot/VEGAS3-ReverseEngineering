/* Module: vegas30k.dll
   Function: FUN_01135c70
   Address: 01135c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01135c70(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0xc);
  return;
}


