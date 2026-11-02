/* Module: sfxpfx2.dll
   Function: FUN_5c895140
   Address: 5c895140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c895140(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint auStack_134 [4];
  uint local_124;
  uint local_120;
  void *local_11c;
  uint local_118 [69];
  
  local_120 = 0;
  local_124 = 0xffffff9c;
  local_11c = this;
  (**(code **)(*(int *)this + 0x68))(this,local_118,auStack_134 + 3);
  uVar1 = auStack_134[0];
  if (param_1 != 0) {
    uVar5 = (int)(auStack_134[auStack_134[0] * 2 + 3] + local_120) / 2;
    if (0x32 < (int)local_11c) {
      uVar1 = FUN_5c895100((int)(auStack_134 + 4),auStack_134[0],1);
      local_11c = (void *)0x32;
      auStack_134[0] = uVar1;
      iVar2 = ftol();
      uVar3 = local_120 - iVar2;
      if ((int)uVar3 < -100) {
        local_118[0] = 0xffffff9c;
      }
      else {
        local_118[0] = (0 < (int)uVar3) - 1 & uVar3;
      }
    }
    if ((int)auStack_134[uVar1 * 2] < 0x3b6) {
      uVar1 = FUN_5c895100((int)(auStack_134 + 4),uVar1,uVar1 - 1);
      auStack_134[0] = uVar1;
      auStack_134[uVar1 * 2] = 0x3b6;
      iVar2 = ftol();
      uVar3 = auStack_134[uVar1 * 2 + 3] - iVar2;
      if ((int)uVar3 < -100) {
        uVar3 = 0xffffff9c;
      }
      else {
        uVar3 = (0 < (int)uVar3) - 1 & uVar3;
      }
      auStack_134[uVar1 * 2 + 1] = uVar3;
    }
    if ((int)uVar5 < -100) {
      uVar5 = 0xffffff9c;
    }
    else {
      uVar5 = (0 < (int)uVar5) - 1 & uVar5;
    }
    auStack_134[uVar1 * 2 + 3] = uVar5;
    local_120 = uVar5;
  }
  if (uVar1 != 1) {
    puVar6 = auStack_134 + 4;
    puVar4 = auStack_134 + 5;
    do {
      uVar1 = *puVar6;
      if ((int)auStack_134[1] < (int)*puVar4) {
        auStack_134[1] = *puVar4;
      }
      *(double *)(auStack_134[3] + 0x180 + uVar1 * 8) = (double)(int)*puVar4;
      uVar5 = puVar4[1];
      puVar6 = puVar4 + 1;
      auStack_134[2] = auStack_134[2] + 1;
      uVar3 = puVar4[2];
      if ((int)auStack_134[1] < (int)uVar3) {
        auStack_134[1] = uVar3;
      }
      *(double *)(auStack_134[3] + 0x180 + uVar5 * 8) = (double)(int)uVar3;
      FUN_5c895330(auStack_134[3] + 0x180,uVar5,uVar1);
      puVar4 = puVar4 + 2;
    } while (auStack_134[2] < auStack_134[0] - 1);
  }
  return;
}


