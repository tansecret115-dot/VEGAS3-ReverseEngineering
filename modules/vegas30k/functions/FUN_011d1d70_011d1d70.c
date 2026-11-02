/* Module: vegas30k.dll
   Function: FUN_011d1d70
   Address: 011d1d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011d1d70(int param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  
  uVar5 = DAT_0120645c;
  uVar4 = DAT_01206458;
  uVar3 = DAT_01206454;
  uVar2 = DAT_01206450;
  if (param_2 == (undefined2 *)0x0) {
    return -0x7fffbffd;
  }
  if (param_2[7] == 0x18) {
    param_2[7] = 0x18;
    *param_2 = 0xfffe;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 2) * 6;
    param_2[1] = 2;
    param_2[6] = 6;
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    param_2[8] = 0x16;
    param_2[9] = 0x18;
    *(undefined4 *)(param_2 + 10) = 0;
    *(undefined4 *)(param_2 + 0xe) = uVar3;
    *(undefined4 *)(param_2 + 0x10) = uVar4;
    *(undefined4 *)(param_2 + 0x12) = uVar5;
    iVar7 = FUN_011d1b80(param_1,param_2);
    if (-1 < iVar7) {
      return iVar7;
    }
    uVar1 = *(uint *)(param_1 + 0x154);
    *param_2 = 1;
    uVar6 = (-(ushort)((uVar1 & 0x20) != 0) & 0xfff8) + 0x20;
    param_2[1] = 2;
    param_2[7] = uVar6;
    param_2[8] = 0;
    uVar6 = (uVar6 >> 3) << 1;
    param_2[6] = uVar6;
    *(uint *)(param_2 + 4) = (uint)uVar6 * *(int *)(param_2 + 2);
    iVar7 = FUN_011d1b80(param_1,param_2);
    if (-1 < iVar7) {
      return iVar7;
    }
    uVar1 = *(uint *)(param_1 + 0x154);
    *param_2 = 1;
    param_2[1] = 2;
    param_2[8] = 0;
    uVar6 = (-(ushort)((uVar1 & 0x20) != 0) & 8) + 0x18;
    param_2[7] = uVar6;
    uVar6 = (uVar6 >> 3) << 1;
    param_2[6] = uVar6;
    *(uint *)(param_2 + 4) = (uint)uVar6 * *(int *)(param_2 + 2);
  }
  iVar7 = FUN_011d1b80(param_1,param_2);
  return iVar7;
}


