/* Module: sfmarket2.dll
   Function: FUN_00411570
   Address: 00411570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00411570(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0xfefefefe;
  *(undefined4 *)(param_1 + 4) = DAT_004a40a0;
  *(undefined4 *)(param_1 + 8) = DAT_004a40a4;
  *(undefined4 *)(param_1 + 0xc) = DAT_004a40a8;
  *(undefined4 *)(param_1 + 0x10) = DAT_004a40ac;
  *(undefined4 *)(param_1 + 0x14) = DAT_004a4090;
  *(undefined4 *)(param_1 + 0x18) = DAT_004a4094;
  *(undefined4 *)(param_1 + 0x1c) = DAT_004a4098;
  uVar1 = DAT_004a409c;
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


