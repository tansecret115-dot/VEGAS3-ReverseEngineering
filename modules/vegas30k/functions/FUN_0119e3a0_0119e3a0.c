/* Module: vegas30k.dll
   Function: FUN_0119e3a0
   Address: 0119e3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119e3a0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 in_stack_00000018;
  
  param_1[0x13e] = *param_3;
  param_1[0x13f] = param_3[1];
  param_1[0x140] = param_3[2];
  param_1[0x141] = param_3[3];
  *(short *)(param_1 + 0x142) = (short)param_3[4];
  iVar3 = (**(code **)(*param_1 + 300))(1,in_stack_00000018);
  if (-1 < iVar3) {
    FUN_011aaf10(param_1);
    iVar4 = (**(code **)(*param_1 + 0x188))
                      (unaff_EBX,param_3,(int)param_1 + 0x50a,param_2,param_3,0);
    if (iVar4 == 0) {
      return -0x7ff8fff2;
    }
    *(undefined4 *)(iVar4 + 0x18) = unaff_EDI;
    iVar1 = param_1[0x182];
    if (iVar1 == 0) {
      param_1[0x182] = iVar4;
    }
    else {
      for (iVar2 = *(int *)(iVar1 + 0x16c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x16c)) {
        iVar1 = iVar2;
      }
      *(int *)(iVar1 + 0x16c) = iVar4;
    }
    uVar5 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar5 | 2);
    param_1[8] = param_1[8] & 0xffff3fffU | 2;
  }
  return iVar3;
}


