/* Module: cook3260.dll
   Function: FUN_633a1670
   Address: 633a1670
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a1670(void *this,int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int local_8;
  
  piVar2 = param_2;
  local_8 = 0;
  iVar1 = *(int *)((int)this + 0xc);
  *param_2 = 0;
  if (param_1 != 0) {
    puVar3 = operator_new(*(int *)((int)this + 0x20) * *(int *)((int)this + 4));
    if (puVar3 != (undefined4 *)0x0) {
      uVar4 = *(int *)((int)this + 0x20) * *(int *)((int)this + 4);
      param_2 = (int *)0x0;
      puVar6 = puVar3;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      if (0 < *(int *)((int)this + 0x20)) {
        do {
          if (local_8 != 0) break;
          local_8 = (**(code **)(**(int **)this + 0x10))(puVar3,0xffffffff,param_1 + *piVar2 * 2);
          *piVar2 = *piVar2 + iVar1 * 2;
          param_2 = (int *)((int)param_2 + 1);
        } while ((int)param_2 < *(int *)((int)this + 0x20));
      }
      operator_delete(puVar3);
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 8) * *(int *)((int)this + 0x18) * 2;
      return local_8;
    }
  }
  return 0;
}


