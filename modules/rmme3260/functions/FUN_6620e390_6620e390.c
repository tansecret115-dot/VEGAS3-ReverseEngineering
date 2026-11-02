/* Module: rmme3260.dll
   Function: FUN_6620e390
   Address: 6620e390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6620e390(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    iVar3 = (param_2 & 0xffff) * 0x10 + iVar1;
    puVar4 = *(ushort **)(iVar3 + 0xc);
    if (puVar4 == (ushort *)0x0) {
      return *(undefined4 *)(iVar3 + 8);
    }
    uVar2 = *puVar4;
    if (uVar2 != 0xffff) {
      do {
        if (*(int *)((uint)uVar2 * 0x10 + 8 + iVar1) == 0) {
          return 0;
        }
        uVar2 = puVar4[1];
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0xffff);
      return 1;
    }
  }
  return 1;
}


