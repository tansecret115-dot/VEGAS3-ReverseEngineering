/* Module: rmme3260.dll
   Function: FUN_662198c0
   Address: 662198c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662198c0(void *this,short param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = 0;
  if (*(ushort *)((int)this + 0x4c) != 0) {
    do {
      if (bVar1) {
        return;
      }
      if (*(short *)(*(int *)((int)this + 0x4e) + iVar2 * 2) == param_1) {
        bVar1 = true;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x4c));
  }
  return;
}


