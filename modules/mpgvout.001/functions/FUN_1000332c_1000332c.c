/* Module: mpgvout.001
   Function: FUN_1000332c
   Address: 1000332c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000332c(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = param_2[8];
  *(undefined8 *)(param_1 + 0x68) = param_2[9];
  param_2[8] = param_2[2];
  param_2[9] = param_2[3];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = param_2[4];
  *(undefined8 *)(param_1 + 0x58) = param_2[5];
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x78) = param_2[0xd];
  param_2[0xc] = param_2[10];
  param_2[0xd] = param_2[0xb];
  param_2[10] = param_2[6];
  param_2[0xb] = param_2[7];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  return;
}


