/* Module: vegas30k.dll
   Function: FUN_011bd9c0
   Address: 011bd9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011bd9c0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x8000ffff;
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_8;
  *(undefined4 *)(param_1 + 0x50) = param_8[1];
  *(undefined4 *)(param_1 + 0x54) = param_8[2];
  *(undefined4 *)(param_1 + 0x58) = param_8[3];
  uVar1 = *(undefined2 *)(param_8 + 4);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined2 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(uint *)(param_1 + 0x24) = param_3 & 0x10000000;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(uint *)(param_1 + 0x20) = param_3 & 0xefffffff;
  *(undefined4 *)(param_1 + 0x30) = param_6;
  *(undefined4 *)(param_1 + 0x34) = param_7;
  uVar2 = ftol();
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar2 = ftol();
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x70) = param_9;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x74) = param_10;
  return 0;
}


