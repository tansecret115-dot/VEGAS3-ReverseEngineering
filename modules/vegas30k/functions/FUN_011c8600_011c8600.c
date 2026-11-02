/* Module: vegas30k.dll
   Function: FUN_011c8600
   Address: 011c8600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011c8600(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  
  uVar4 = DAT_0120645c;
  uVar3 = DAT_01206458;
  uVar2 = DAT_01206454;
  uVar1 = DAT_01206450;
  if (param_2 == (undefined2 *)0x0) {
    return -0x7fffbffd;
  }
  if (param_2[7] == 0x18) {
    param_2[7] = 0x18;
    *param_2 = 0xfffe;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 2) * 6;
    param_2[1] = 2;
    param_2[6] = 6;
    *(undefined4 *)(param_2 + 0xc) = uVar1;
    param_2[8] = 0x16;
    param_2[9] = 0x18;
    *(undefined4 *)(param_2 + 10) = 0;
    *(undefined4 *)(param_2 + 0xe) = uVar2;
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined4 *)(param_2 + 0x12) = uVar4;
    iVar6 = FUN_011c8350(param_1,param_2);
    if (-1 < iVar6) {
      return iVar6;
    }
    uVar5 = (-(ushort)(*(int *)(param_1 + 0x2d0) != 0) & 0xfff8) + 0x20;
    *param_2 = 1;
    param_2[7] = uVar5;
    param_2[1] = 2;
    uVar5 = (uVar5 >> 3) << 1;
    param_2[6] = uVar5;
    *(uint *)(param_2 + 4) = (uint)uVar5 * *(int *)(param_2 + 2);
    param_2[8] = 0;
    iVar6 = FUN_011c8350(param_1,param_2);
    if (-1 < iVar6) {
      return iVar6;
    }
    iVar6 = *(int *)(param_1 + 0x2d0);
    *param_2 = 1;
    param_2[1] = 2;
    param_2[8] = 0;
    uVar5 = (-(ushort)(iVar6 != 0) & 8) + 0x18;
    param_2[7] = uVar5;
    uVar5 = (uVar5 >> 3) << 1;
    param_2[6] = uVar5;
    *(uint *)(param_2 + 4) = (uint)uVar5 * *(int *)(param_2 + 2);
  }
  iVar6 = FUN_011c8350(param_1,param_2);
  return iVar6;
}


