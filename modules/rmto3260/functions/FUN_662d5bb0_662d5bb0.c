/* Module: rmto3260.dll
   Function: FUN_662d5bb0
   Address: 662d5bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d5bb0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  undefined2 *puVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 local_d0 [100];
  int local_8;
  
  local_8 = 0;
  iVar2 = atoi((char *)*param_1);
  local_d0[0] = (undefined2)iVar2;
  pcVar3 = FUN_662d57f0((int)this);
  *param_1 = pcVar3;
  iVar2 = FUN_662d5a90(pcVar3,&DAT_6630ac1c);
  for (uVar5 = 1; (iVar2 != 0 && (uVar5 < 0x19)); uVar5 = uVar5 + 1) {
    pcVar3 = FUN_662d57f0((int)this);
    *param_1 = pcVar3;
    iVar2 = atoi(pcVar3);
    local_d0[uVar5] = (short)iVar2;
    pcVar3 = FUN_662d57f0((int)this);
    *param_1 = pcVar3;
    iVar2 = FUN_662d5a90(pcVar3,&DAT_6630ac1c);
  }
  if (param_2 == 1) {
    if (uVar5 == 4) {
      local_8 = 1;
    }
LAB_662d5c59:
    if (uVar5 == 3) {
      local_8 = 1;
    }
  }
  else {
    if (param_2 == 2) goto LAB_662d5c59;
    if (param_2 != 3) goto LAB_662d5c88;
  }
  if ((5 < uVar5) && ((uVar5 & 1) == 0)) {
    local_8 = 1;
  }
LAB_662d5c88:
  if (local_8 != 0) {
    if (param_3 != 0) {
      uVar1 = FUN_662f2bb0(uVar5);
      **(undefined2 **)((int)this + 0x1c) = uVar1;
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 2;
    }
    if (uVar5 != 0) {
      puVar4 = local_d0;
      uVar6 = (uint)uVar5;
      do {
        uVar1 = FUN_662f2bb0(*puVar4);
        puVar4 = puVar4 + 1;
        **(undefined2 **)((int)this + 0x1c) = uVar1;
        uVar6 = uVar6 - 1;
        *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 2;
      } while (uVar6 != 0);
    }
  }
  return local_8;
}


