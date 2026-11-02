/* Module: encn3260.dll
   Function: FUN_66493d00
   Address: 66493d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66493d00(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (0xffff < param_2) {
    return -0x7fffbffb;
  }
  puVar1 = operator_new(param_2 + 4);
  *(undefined1 *)puVar1 = 0x24;
  *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)this + 0x74);
  *(char *)((int)puVar1 + 2) = (char)(param_2 >> 8);
  *(char *)((int)puVar1 + 3) = (char)param_2;
  puVar6 = param_1;
  puVar2 = puVar1;
  for (uVar5 = param_2 >> 2; puVar2 = puVar2 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar2 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_664bad50(puVar2);
  }
  (**(code **)(*piVar3 + 4))(piVar3);
  (**(code **)(*piVar3 + 0x10))(piVar3,puVar1,param_2 + 4);
  iVar4 = (**(code **)(**(int **)((int)this + 0x70) + 0x20))(*(int **)((int)this + 0x70),piVar3);
  if (iVar4 != 0) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x2c))(*(int **)((int)this + 0x14),0x80040043);
  }
  (**(code **)(*piVar3 + 8))(piVar3);
  operator_delete(puVar1);
  operator_delete(param_1);
  return iVar4;
}


