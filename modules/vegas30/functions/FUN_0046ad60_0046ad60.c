/* Module: vegas30.exe
   Function: FUN_0046ad60
   Address: 0046ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0046ad60(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 *in_stack_0000001c;
  undefined4 local_4;
  
  uVar2 = param_2;
  bVar7 = param_2 == *(uint *)(param_1 + 0x20);
  if (!bVar7) {
    *(uint *)(param_1 + 0x20) = param_2;
  }
  uVar4 = *(int *)(param_1 + 0x18) + param_2;
  uVar6 = uVar4;
  if ((int)uVar4 < 0) {
    uVar6 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (-1 < (int)uVar1) {
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar5 = iVar3 * uVar1;
    if ((iVar3 * uVar6 - iVar5 != 0 && iVar5 <= (int)(iVar3 * uVar6)) &&
       (iVar3 * param_2 - iVar5 == 0 || (int)(iVar3 * param_2) < iVar5)) {
      uVar6 = uVar1;
    }
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if ((iVar3 <= (int)uVar6) &&
     ((DAT_00649f3c == 0 || (uVar6 = iVar3 - 1, iVar3 <= *(int *)(param_1 + 0x10))))) {
    uVar6 = uVar4;
  }
  if (DAT_0064b4e4 == 0) {
    iVar3 = FUN_00601ab0(&local_4,&param_2,1);
    if (iVar3 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar4 = (param_2 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar4) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e4 = uVar4;
      }
    }
  }
  iVar3 = param_3;
  if (((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) && (param_3 == 3)) {
    uVar6 = uVar2;
  }
  if (((int)uVar6 < param_4) && (-1 < (int)uVar6)) {
    iVar5 = FUN_005b87b0(*(undefined4 *)(param_1 + 4));
    while (*(int *)(*(int *)(*(int *)(iVar5 + 8) + uVar6 * 4) + 4) != iVar3) {
      uVar6 = uVar6 - *(int *)(param_1 + 0x1c);
    }
    in_stack_0000001c[1] = uVar6;
    *in_stack_0000001c = 1;
    return 0;
  }
  if (bVar7) {
    *in_stack_0000001c = 1;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    *in_stack_0000001c = 0;
  }
  in_stack_0000001c[1] = *(int *)(param_1 + 0x24) + -1 + *(int *)(param_1 + 0xc);
  return 0;
}


