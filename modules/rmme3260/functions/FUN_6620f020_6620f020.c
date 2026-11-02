/* Module: rmme3260.dll
   Function: FUN_6620f020
   Address: 6620f020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6620f020(void *this,uint param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  undefined4 local_8;
  
  uVar5 = 0;
  local_8 = 0;
  if (param_2 == (ushort *)0x0) {
    return 0;
  }
  bVar2 = false;
  bVar3 = false;
  if (*(int *)((int)this + 0xf4) != 0) {
    do {
      if (bVar2) {
        return local_8;
      }
      uVar4 = 0;
      uVar1 = *(uint *)(*(int *)((int)this + 0x100) + (uint)uVar5 * 0x14);
      if (uVar1 != 0) {
        do {
          if (bVar2) break;
          bVar2 = bVar3;
          if (param_1 ==
              *(ushort *)
               (*(int *)(*(int *)((int)this + 0x100) + 4 + (uint)uVar5 * 0x14) + 2 + uVar4 * 4)) {
            local_8 = 1;
            *param_2 = uVar5;
            bVar2 = true;
          }
          uVar4 = uVar4 + 1;
          bVar3 = bVar2;
        } while (uVar4 < uVar1);
      }
      uVar5 = uVar5 + 1;
    } while ((uint)uVar5 < *(uint *)((int)this + 0xf4));
  }
  return local_8;
}


