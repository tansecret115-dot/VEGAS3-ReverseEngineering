/* Module: rmbe3260.dll
   Function: FUN_66055690
   Address: 66055690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66055690(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    piVar5 = *(int **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    piVar5 = (int *)0x0;
  }
  if ((piVar5 != (int *)0x0) && (piVar5 = (int *)*piVar5, piVar5 != (int *)0x0)) {
    puVar2 = operator_new(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_6605c060(puVar2);
    }
    *param_2 = piVar3;
    iVar1 = *piVar3;
    uVar4 = (**(code **)(*piVar5 + 0x24))();
    uVar4 = (**(code **)(*piVar5 + 0x20))(uVar4);
    (**(code **)(iVar1 + 0x10))(*param_2,uVar4);
    (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
    return 0;
  }
  return 0x80004005;
}


