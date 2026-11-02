/* Module: aviplug.dll
   Function: FUN_5f984990
   Address: 5f984990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f984990(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                uint *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = param_2;
  uVar4 = param_4;
  uVar5 = param_3;
  if (1 < param_5) {
    uVar2 = param_5 - 1;
    uVar4 = (param_2 & uVar2) + uVar2 + param_4 & ~uVar2;
    uVar1 = param_2 - param_1;
    uVar3 = uVar1 & uVar2;
    uVar5 = (param_3 - (param_2 < param_1)) + (uint)CARRY4(uVar1,param_1);
    uVar1 = uVar1 + param_1 & ~uVar2;
    uVar2 = param_2 - uVar1;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar3;
    param_7[1] = param_1;
    param_7[4] = param_2;
    param_7[8] = uVar1;
    param_7[5] = param_3;
    param_7[6] = param_4;
    param_7[3] = uVar2;
    param_7[9] = uVar5;
    param_7[10] = uVar4;
    if (param_6 != 0) {
      FUN_5f984a40(param_6,(int *)param_7);
    }
  }
  return (uVar3 - uVar2) + uVar4 + param_1;
}


