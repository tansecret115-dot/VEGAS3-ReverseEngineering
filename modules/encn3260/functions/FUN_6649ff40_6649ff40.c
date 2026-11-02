/* Module: encn3260.dll
   Function: FUN_6649ff40
   Address: 6649ff40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6649ff40(void *this,int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *this_00;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_c;
  int local_8;
  
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = (int *)FUN_664ba900(puVar2);
  }
  local_c = 0;
  iVar6 = *(int *)(*(int *)((int)this + 0x62) + 4);
  for (; (int)param_1 < iVar6; param_1 = (int *)((int)param_1 + 1)) {
    iVar5 = *(int *)(**(int **)((int)this + 0x62) + (int)param_1 * 4);
    iVar3 = (*(code *)**(undefined4 **)(iVar5 + 4))(iVar5 + 4,&DAT_664dcdc0,&local_c);
    if (iVar3 != 0) break;
    puVar2 = operator_new(8);
    bVar1 = false;
    *puVar2 = local_c;
    puVar2[1] = *(undefined4 *)(iVar5 + 0x101);
    local_8 = this_00[1];
    do {
      iVar5 = local_8;
      local_8 = iVar5;
      if (iVar5 == 0) goto LAB_664a000a;
      piVar4 = (int *)FUN_664bab40(&local_8);
    } while (*(uint *)(*piVar4 + 4) <= (uint)puVar2[1]);
    (**(code **)(*this_00 + 0x10))(iVar5,puVar2);
    bVar1 = true;
LAB_664a000a:
    if (!bVar1) {
      FUN_664baab0(this_00,puVar2);
    }
  }
  iVar6 = this_00[1];
  local_8 = 0;
  for (; iVar6 != 0; iVar6 = (**(code **)(*this_00 + 0xc))(iVar6)) {
    puVar2 = (undefined4 *)FUN_664bab80(iVar6);
    puVar2 = (undefined4 *)*puVar2;
    param_1 = (int *)0x0;
    iVar5 = (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_664dce30,&param_1);
    if (iVar5 == 0) {
      FUN_664baab0((void *)((int)this + 0x38),*puVar2);
      (**(code **)(*param_1 + 0x18))(param_1,local_8);
      (**(code **)(*param_1 + 8))(param_1);
    }
    local_8 = local_8 + 1;
    operator_delete(puVar2);
  }
  if (this_00 != (int *)0x0) {
    (**(code **)*this_00)(1);
  }
  return;
}


