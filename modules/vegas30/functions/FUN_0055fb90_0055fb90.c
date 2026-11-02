/* Module: vegas30.exe
   Function: FUN_0055fb90
   Address: 0055fb90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0055fb90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6,undefined4 *param_7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x38) = *param_6;
  *(undefined4 *)(param_1 + 0x3c) = param_6[1];
  *(undefined4 *)(param_1 + 0x40) = param_6[2];
  *(undefined4 *)(param_1 + 0x44) = param_6[3];
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_6 + 4);
  *(undefined4 *)(param_1 + 0x4a) = *param_7;
  *(undefined4 *)(param_1 + 0x4e) = param_7[1];
  *(undefined4 *)(param_1 + 0x52) = param_7[2];
  *(undefined4 *)(param_1 + 0x56) = param_7[3];
  uVar1 = *(undefined2 *)(param_7 + 4);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined2 *)(param_1 + 0x5a) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  uVar3 = ftol();
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = ftol();
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x34);
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x4b4) + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005f13f0(2);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4ac);
  FUN_005895a0(DAT_0064b144,0x43,(undefined4 *)(param_1 + 0x5c),(undefined4 *)(param_1 + 0x38),0,
               0xffffffff,0xffffffff,0,0x3ff00000,*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),0,0,0xffffffff);
  *(undefined4 *)(param_1 + 8) = 1;
  return 0;
}


