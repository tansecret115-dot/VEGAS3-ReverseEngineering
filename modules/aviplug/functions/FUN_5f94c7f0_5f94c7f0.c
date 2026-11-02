/* Module: aviplug.dll
   Function: FUN_5f94c7f0
   Address: 5f94c7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94c7f0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (param_2 != 0) + 5;
  iVar4 = 0;
  iVar1 = -0x7ffb1ff6;
  if (uVar2 != 0) {
    iVar3 = param_1 + 4;
    do {
      iVar1 = FUN_5f94c790(iVar3,(~-(uint)(param_3 != 0) & uVar2) + iVar4,param_4);
      if (iVar1 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar4 < (int)uVar2);
  }
  return iVar1;
}


