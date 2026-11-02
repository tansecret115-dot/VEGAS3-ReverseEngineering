/* Module: rmme3260.dll
   Function: FUN_66263580
   Address: 66263580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66263580(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x32));
  *param_1 = 0;
  puVar1 = *(undefined4 **)((int)this + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = 4;
  }
  else {
    uVar3 = extraout_var;
    if ((*(int *)((int)puVar1 + 0x22) == 0) &&
       (iVar2 = FUN_66263cb0(puVar1), uVar3 = extraout_var_00, iVar2 != 0)) {
      uVar4 = 4;
    }
    else {
      uVar4 = 0;
      iVar2 = *(int *)((int)this + 0x1c);
      if (*(int *)(iVar2 + 0x1a) == 0) {
        iVar2 = (**(code **)(iVar2 + 0x12))(param_1);
      }
      else {
        iVar2 = (**(code **)(**(int **)(iVar2 + 10) + 0x10))
                          (*(int **)(iVar2 + 10),CONCAT22(uVar3,*(undefined2 *)((int)this + 0x20)),
                           param_1);
      }
      if (iVar2 != 0) {
        uVar4 = 5;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x32));
  return uVar4;
}


