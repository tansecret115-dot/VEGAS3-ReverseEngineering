/* Module: vegas30k.dll
   Function: FUN_0119b640
   Address: 0119b640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119b640(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[0x18e];
  if (piVar2 == (int *)0x0) {
    return -0x7fff0001;
  }
  iVar4 = param_1[0x18b];
  param_1[0x18b] = iVar4 + 1;
  param_1[0x189] = param_1[0x189] + -1;
  if (param_1[0x187] == iVar4 + 1) {
    if ((param_1[8] & 0x1000U) == 0) {
      param_1[0x156] = 0;
      param_1[0x1c] = 0;
      param_1[0x157] = 0;
      param_1[0x1d] = 0;
      param_1[399] = 1;
      if (param_1[9] == 0) {
        iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
        if (iVar4 == 0) {
          FUN_011af200();
          return 0;
        }
        param_1[399] = 0;
        return iVar4;
      }
    }
    else {
      (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      puVar1 = (uint *)(param_1 + 0x156);
      (**(code **)(*(int *)param_1[0x18e] + 0x48))((int *)param_1[0x18e],puVar1);
      *puVar1 = param_1[0x22a];
      param_1[0x157] = param_1[0x22b];
      uVar3 = *puVar1;
      *puVar1 = uVar3 + param_1[0x216];
      param_1[0x157] = param_1[0x157] + param_1[0x217] + (uint)CARRY4(uVar3,param_1[0x216]);
      param_1[0x1c] = *puVar1;
      param_1[0x1d] = param_1[0x157];
    }
  }
  return 0;
}


