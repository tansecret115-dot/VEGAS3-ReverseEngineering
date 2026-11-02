/* Module: aviplug.dll
   Function: FUN_5f94c8a0
   Address: 5f94c8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94c8a0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (param_2 != 0) + 5;
  iVar1 = -0x7ffb1ff6;
  iVar3 = 0;
  uVar4 = ~-(uint)(param_3 != 0) & uVar2;
  if (uVar2 != 0) {
    do {
      iVar1 = FUN_5f94c850(param_1,uVar4,param_4);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 12000;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  return iVar1;
}


