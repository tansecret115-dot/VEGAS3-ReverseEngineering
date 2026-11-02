/* Module: encn3260.dll
   Function: FUN_664904f0
   Address: 664904f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664904f0(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (0xffff < uVar1) {
    return 0x80004005;
  }
  puVar2 = operator_new(uVar1 + 4);
  *(undefined1 *)puVar2 = 0x24;
  *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)this + 0x94);
  *(char *)((int)puVar2 + 2) = (char)(uVar1 >> 8);
  *(char *)((int)puVar2 + 3) = (char)uVar1;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x1c))(param_1);
  puVar6 = puVar2;
  for (uVar5 = uVar1 >> 2; puVar6 = puVar6 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,puVar2,uVar1 + 4);
  uVar4 = (**(code **)(**(int **)((int)this + 0x90) + 0x20))(*(int **)((int)this + 0x90),param_1);
  operator_delete(puVar2);
  return uVar4;
}


