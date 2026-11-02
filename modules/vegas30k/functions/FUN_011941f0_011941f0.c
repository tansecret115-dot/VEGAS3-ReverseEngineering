/* Module: vegas30k.dll
   Function: FUN_011941f0
   Address: 011941f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011941f0(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[0x18e];
  if (piVar2 == (int *)0x0) {
    return 0x8000ffff;
  }
  if ((*(byte *)(param_1 + 8) & 0x40) == 0) {
    param_1[0x1be] = 0;
    param_1[0x200] = 0;
    param_1[0x1bf] = 0;
    param_1[0x201] = 0;
    param_1[399] = 1;
    iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    if (iVar4 == 0) {
      FUN_011af200();
      param_1[8] = param_1[8] | 0x1000;
      return 0;
    }
    param_1[399] = 0;
    param_1[8] = param_1[8] | 0x1000;
    return 0;
  }
  (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  puVar1 = (uint *)(param_1 + 0x1be);
  (**(code **)(*(int *)param_1[0x18e] + 0x48))((int *)param_1[0x18e],puVar1);
  *puVar1 = param_1[0x22a];
  param_1[0x1bf] = param_1[0x22b];
  uVar3 = *puVar1;
  *puVar1 = uVar3 + param_1[0x216];
  param_1[0x1bf] = param_1[0x1bf] + param_1[0x217] + (uint)CARRY4(uVar3,param_1[0x216]);
  param_1[0x200] = *puVar1;
  param_1[0x201] = param_1[0x1bf];
  param_1[8] = param_1[8] | 0x1000;
  return 0;
}


