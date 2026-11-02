/* Module: rmto3260.dll
   Function: FUN_662d5ac0
   Address: 662d5ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662d5ac0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  int local_18 [4];
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0;
  lVar2 = atol((char *)*param_1);
  param_1 = (undefined4 *)0x1;
  pcVar3 = FUN_662d57f0((int)this);
  *puVar1 = pcVar3;
  iVar4 = FUN_662d5a90(pcVar3,&DAT_6630ab5c);
  if (iVar4 != 0) {
    plVar7 = local_18;
    do {
      if (4 < (int)param_1) break;
      pcVar3 = FUN_662d57f0((int)this);
      *puVar1 = pcVar3;
      lVar5 = atol(pcVar3);
      *plVar7 = lVar5;
      param_1 = (undefined4 *)((int)param_1 + 1);
      plVar7 = plVar7 + 1;
      pcVar3 = FUN_662d57f0((int)this);
      *puVar1 = pcVar3;
      iVar4 = FUN_662d5a90(pcVar3,&DAT_6630ab5c);
    } while (iVar4 != 0);
  }
  if (param_1 == (undefined4 *)0x5) {
    uVar6 = FUN_662f2bf0(local_18[3] +
                         (local_18[2] + (local_18[1] + (local_18[0] + lVar2 * 0x18) * 0x3c) * 0x3c)
                         * 1000);
    local_8 = 1;
    **(undefined4 **)((int)this + 0x1c) = uVar6;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
  }
  return local_8;
}


