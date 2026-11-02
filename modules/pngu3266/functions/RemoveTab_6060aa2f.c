/* Module: pngu3266.dll
   Function: RemoveTab
   Address: 6060aa2f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::RemoveTab(unsigned long) */

void __thiscall XPNTabControl::RemoveTab(XPNTabControl *this,ulong param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
                    /* 0x1aa2f  1777  ?RemoveTab@XPNTabControl@@UAEXK@Z */
  iVar1 = *(int *)(this + 0xd0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    local_8 = *(int *)(iVar1 + 4);
    while (iVar1 = local_8, local_8 != 0) {
      puVar3 = (undefined4 *)FUN_6061a2c0(&local_8);
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3[1] == param_1) {
        piVar2 = (int *)*puVar3;
        if (piVar2 != (int *)0x0) {
          FUN_60618cd0(piVar2);
          operator_delete(piVar2);
        }
        operator_delete(puVar3);
        (**(code **)(**(int **)(this + 0xd0) + 0xc))(iVar1);
        *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + -1;
      }
    }
    iVar1 = *(int *)(this + 0xd0);
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x10);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(this + 0xc4) = 0;
    }
    else {
      *(undefined4 *)(this + 0xc4) = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4);
    }
    SetDimensions(this);
  }
  return;
}


