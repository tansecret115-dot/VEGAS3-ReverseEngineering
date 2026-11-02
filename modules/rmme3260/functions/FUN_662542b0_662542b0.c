/* Module: rmme3260.dll
   Function: FUN_662542b0
   Address: 662542b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662542b0(void *this,int param_1)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined ***)this = &PTR_FUN_6626cb48;
  *(undefined4 *)((int)this + 0x804) = 0;
  *(undefined4 *)((int)this + 0x808) = 0;
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined4 *)((int)this + 0x818) = 1;
  FUN_662654e0((undefined4 *)((int)this + 0x810));
  *(undefined4 *)((int)this + 0x814) = 0;
  puVar5 = this;
  for (iVar4 = 0x200; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
  }
  if (param_1 == 0) {
    puVar1 = operator_new(0x14);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      *puVar1 = 10000;
      puVar1[1] = 0x1389;
      puVar1[2] = 0;
      puVar1[3] = 9999;
      pvVar2 = operator_new(40000);
      puVar1[4] = (uint)pvVar2;
      uVar3 = 0;
      if (*puVar1 != 0) {
        do {
          uVar3 = uVar3 + 1;
          *(undefined4 *)((puVar1[4] - 4) + uVar3 * 4) = 0;
        } while (uVar3 < *puVar1);
      }
    }
    *(uint **)((int)this + 0x820) = puVar1;
    *(undefined4 *)((int)this + 0x824) = 1;
    return this;
  }
  *(int *)((int)this + 0x820) = param_1;
  *(undefined4 *)((int)this + 0x824) = 0;
  return this;
}


