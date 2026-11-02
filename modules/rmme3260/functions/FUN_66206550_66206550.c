/* Module: rmme3260.dll
   Function: FUN_66206550
   Address: 66206550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66206550(void *this,short param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x80004005;
  *param_2 = 0;
  if (*(int *)((int)this + 0x46) != 0) {
    iVar2 = 0;
    if (*(short *)((int)this + 0x50) != 0) {
      do {
        if (param_1 == *(short *)(*(int *)((int)this + 0x46) + iVar2 * 2)) {
          *param_2 = 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x50));
    }
    uVar1 = 0;
  }
  return uVar1;
}


