/* Module: sfppack2.dll
   Function: FUN_5ccf4540
   Address: 5ccf4540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ccf4540(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((*(int *)((int)this + 0x4b8) != 0) && (*(int *)((int)this + 0x4bc) != 0)) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 0x4bc) + *(int *)((int)this + 0x4c0) * 200);
    puVar5 = puVar1;
    for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1[0x30] = *(undefined4 *)((int)this + 0x4c8);
    puVar1[0x31] = *(undefined4 *)((int)this + 0x4cc);
    iVar3 = *(int *)((int)this + 0x4c0);
    iVar4 = iVar3 + -1;
    if (iVar4 < 0) {
      iVar4 = iVar3 + 0x3f;
    }
    iVar4 = *(int *)((int)this + 0x4bc) + iVar4 * 200;
    iVar2 = *(int *)(iVar4 + 0xc4);
    if ((iVar2 <= *(int *)((int)this + 0x4cc)) &&
       ((iVar2 < *(int *)((int)this + 0x4cc) ||
        (*(uint *)(iVar4 + 0xc0) < *(uint *)((int)this + 0x4c8))))) {
      *(uint *)((int)this + 0x4c0) = iVar3 + 1U & 0x3f;
    }
    if (*(int *)((int)this + 0x4c0) == *(int *)((int)this + 0x4c4)) {
      *(uint *)((int)this + 0x4c4) = *(int *)((int)this + 0x4c4) + 1U & 0x3f;
    }
    return 0;
  }
  return 1;
}


