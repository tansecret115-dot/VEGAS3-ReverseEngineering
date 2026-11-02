/* Module: rmme3260.dll
   Function: FUN_662409f0
   Address: 662409f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_662409f0(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 local_8;
  
  pvVar6 = *(void **)((int)this + 0x68);
  while (pvVar3 = pvVar6, pvVar3 != (void *)0x0) {
    this = pvVar3;
    pvVar6 = *(void **)((int)pvVar3 + 0x68);
  }
  local_8 = 0;
  if (((DAT_6627cfe4 != (void *)0x0) &&
      ((float)_DAT_6626c6b8 < *(float *)((int)this + 0x1dc) - (float)_DAT_6626c6b0)) &&
     (*(int *)(param_1 + 0x10) == 0x59555632)) {
    iVar1 = *(int *)(param_1 + 4);
    local_8 = 1;
    iVar2 = *param_3;
    iVar4 = param_3[3] - param_3[1];
    iVar8 = param_3[2] - iVar2;
    iVar9 = iVar1 * param_3[1] + param_2;
    puVar10 = (undefined1 *)(iVar9 + iVar2);
    if (*(char *)(iVar9 + iVar2) != '\x01') {
      uVar5 = FUN_66265ba0();
      if (uVar5 == 1) {
        if (*(int *)((int)this + 0x10c) != 0) {
          pvVar6 = operator_new(iVar1 * 8 + 7);
          uVar7 = ftol();
          FUN_66246000(DAT_6627cfe4,puVar10,puVar10,iVar8,iVar4,iVar1,pvVar6,uVar7);
          if (pvVar6 == (void *)0x0) {
            return 1;
          }
          operator_delete(pvVar6);
          return 1;
        }
      }
      else if (*(int *)((int)this + 0x10c) != 0) {
        FUN_66245fd0(DAT_6627cfe4,puVar10,iVar4,iVar8,iVar1,*(undefined4 *)((int)this + 0x1dc));
        return 1;
      }
      FUN_66245fa0(DAT_6627cfe4,puVar10,iVar4,iVar8,iVar1,*(undefined4 *)((int)this + 0x1dc));
      return 1;
    }
    *puVar10 = puVar10[1];
  }
  return local_8;
}


