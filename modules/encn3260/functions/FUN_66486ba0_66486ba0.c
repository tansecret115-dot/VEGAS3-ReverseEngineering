/* Module: encn3260.dll
   Function: FUN_66486ba0
   Address: 66486ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66486ba0(void *this,void *param_1)

{
  char *_Str;
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int local_8;
  
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  iVar1 = FUN_664bd670(param_1,s_Alert_664e2540);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)((int)param_1 + 0xc);
    pbVar6 = &DAT_664e253c;
  }
  else {
    iVar1 = FUN_664be4b0(iVar1);
    if ((iVar1 != 0) && (puVar2 = (undefined4 *)FUN_664be280(iVar1), puVar2 != (undefined4 *)0x0)) {
      _Str = (char *)*puVar2;
      puVar2 = (undefined4 *)FUN_664be2a0(iVar1);
      if (puVar2 != (undefined4 *)0x0) {
        uVar5 = *puVar2;
        iVar1 = **(int **)((int)this + 0x68);
        lVar3 = strtol(_Str,(char **)0x0,10);
        local_8 = (**(code **)(iVar1 + 0x4c))(*(undefined4 *)((int)this + 0x68),0,lVar3,uVar5);
      }
    }
    if (local_8 == 0) {
      uVar5 = *(undefined4 *)((int)param_1 + 0xc);
      pbVar6 = &DAT_664e2538;
    }
    else {
      uVar5 = *(undefined4 *)((int)param_1 + 0xc);
      pbVar6 = &DAT_664e253c;
    }
  }
  piVar4 = FUN_6648c780(uVar5,pbVar6);
  FUN_6648c8f0(this,piVar4,(char *)0x0,(char *)0x0);
  if (piVar4 != (int *)0x0) {
    (**(code **)*piVar4)(1);
  }
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return 0;
}


