/* Module: rmme3260.dll
   Function: FUN_662182b0
   Address: 662182b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662182b0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_8;
  
  uVar1 = param_1[-2];
  local_8 = 0;
  if ((char)uVar1 != '\0') {
    puVar2 = operator_new(uVar1 & 0xff);
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = 0x8007000e;
    }
    else {
      puVar5 = param_1;
      puVar6 = puVar2;
      for (uVar4 = (uVar1 & 0xff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(char *)((int)this + 0x34) = (char)uVar1;
      if (*(void **)((int)this + 0x35) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0x35));
      }
      *(undefined4 **)((int)this + 0x35) = puVar2;
      iVar3 = FUN_66217e90((int)this + 0xc);
      *(int *)((int)this + 0x10) = iVar3;
    }
  }
  FUN_66250210((int *)&param_1);
  return local_8;
}


