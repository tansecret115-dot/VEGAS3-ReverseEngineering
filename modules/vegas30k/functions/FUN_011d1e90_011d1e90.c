/* Module: vegas30k.dll
   Function: FUN_011d1e90
   Address: 011d1e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011d1e90(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  if ((param_2 != (undefined4 *)0x0) && (in_stack_00000018 != (code *)0x0)) {
    if ((*(byte *)(param_1 + 0x154) & 1) != 0) {
      return -0x7ffb1ffc;
    }
    puVar1 = (undefined4 *)(param_1 + 0x174);
    *puVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x178) = param_2[1];
    *(undefined4 *)(param_1 + 0x17c) = param_2[2];
    *(undefined4 *)(param_1 + 0x180) = param_2[3];
    *(undefined2 *)(param_1 + 0x184) = *(undefined2 *)(param_2 + 4);
    iVar3 = FUN_011d1d70(puVar1);
    if (-1 < iVar3) {
      *param_2 = *puVar1;
      param_2[1] = *(undefined4 *)(param_1 + 0x178);
      param_2[2] = *(undefined4 *)(param_1 + 0x17c);
      param_2[3] = *(undefined4 *)(param_1 + 0x180);
      *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_1 + 0x184);
      puVar2 = (undefined4 *)(param_1 + 0x1e4);
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      *puVar2 = 0;
      iVar3 = FUN_011c6190(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),
                           puVar1,(undefined4 *)(param_1 + 0x1f0),puVar2);
      if (-1 < iVar3) {
        *(code **)(param_1 + 0x15c) = in_stack_00000018;
        *(undefined4 *)(param_1 + 0x160) = in_stack_0000001c;
        *(undefined4 *)(param_1 + 0x1e8) = *puVar2;
        iVar4 = (*in_stack_00000018)(param_1,0,in_stack_0000001c,0,0,0,0);
        if (iVar4 == 0) {
          return -0x7fff0001;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 1;
      }
    }
    return iVar3;
  }
  return -0x7fffbffd;
}


