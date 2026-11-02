/* Module: sfppack3.dll
   Function: FUN_5cc3cdb0
   Address: 5cc3cdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc3cdb0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint auStack_124 [4];
  uint local_114;
  uint local_110;
  void *local_10c;
  uint local_108 [65];
  
  local_110 = 0;
  local_114 = 0xffffff9c;
  local_10c = this;
  (**(code **)(*(int *)this + 0x40))(this,local_108,auStack_124 + 3);
  uVar1 = auStack_124[0];
  if (param_1 != 0) {
    uVar5 = (int)(auStack_124[auStack_124[0] * 2 + 3] + local_110) / 2;
    if (0x32 < (int)local_10c) {
      uVar1 = FUN_5cc3d020((int)(auStack_124 + 4),auStack_124[0],1);
      local_10c = (void *)0x32;
      auStack_124[0] = uVar1;
      iVar2 = ftol();
      uVar3 = local_110 - iVar2;
      if ((int)uVar3 < -100) {
        local_108[0] = 0xffffff9c;
      }
      else {
        local_108[0] = 100;
        if ((int)uVar3 < 0x65) {
          local_108[0] = uVar3;
        }
      }
    }
    if ((int)auStack_124[uVar1 * 2] < 0x3b6) {
      uVar1 = FUN_5cc3d020((int)(auStack_124 + 4),uVar1,uVar1 - 1);
      auStack_124[0] = uVar1;
      auStack_124[uVar1 * 2] = 0x3b6;
      iVar2 = ftol();
      uVar3 = auStack_124[uVar1 * 2 + 3] - iVar2;
      if ((int)uVar3 < -100) {
        uVar3 = 0xffffff9c;
      }
      else if (100 < (int)uVar3) {
        uVar3 = 100;
      }
      auStack_124[uVar1 * 2 + 1] = uVar3;
    }
    if ((int)uVar5 < -100) {
      uVar3 = 0xffffff9c;
    }
    else {
      uVar3 = 100;
      if ((int)uVar5 < 0x65) {
        uVar3 = uVar5;
      }
    }
    auStack_124[uVar1 * 2 + 3] = uVar3;
    local_110 = uVar3;
  }
  if (uVar1 != 1) {
    puVar6 = auStack_124 + 4;
    puVar4 = auStack_124 + 5;
    do {
      uVar1 = *puVar6;
      if ((int)auStack_124[1] < (int)*puVar4) {
        auStack_124[1] = *puVar4;
      }
      *(double *)(auStack_124[3] + 0x170 + uVar1 * 8) = (double)(int)*puVar4;
      auStack_124[2] = auStack_124[2] + 1;
      uVar5 = puVar4[2];
      uVar3 = puVar4[1];
      puVar6 = puVar4 + 1;
      if ((int)auStack_124[1] < (int)uVar5) {
        auStack_124[1] = uVar5;
      }
      *(double *)(auStack_124[3] + 0x170 + uVar3 * 8) = (double)(int)uVar5;
      FUN_5cc3cfb0(auStack_124[3] + 0x170,uVar3,uVar1);
      puVar4 = puVar4 + 2;
    } while (auStack_124[2] < auStack_124[0] - 1);
  }
  return;
}


