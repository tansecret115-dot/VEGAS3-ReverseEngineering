/* Module: rmto3260.dll
   Function: FUN_662dffa0
   Address: 662dffa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662dffa0(void *this,int param_1,short *param_2,undefined4 *param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  
  sVar3 = 0;
  if (param_2 != (short *)0x0) {
    sVar3 = *(short *)(*(int *)((int)this + 0x58) + param_1 * 2);
    *param_2 = sVar3;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = 0;
    *param_3 = 0;
    bVar1 = false;
    if (*(short *)((int)this + 0x4c) != 0) {
      do {
        if (bVar1) {
          return 0;
        }
        if (sVar3 == *(short *)(*(int *)((int)this + 0x4e) + (uint)uVar2 * 2)) {
          *param_3 = *(undefined4 *)(*(int *)((int)this + 0x52) + (uint)uVar2 * 4);
          bVar1 = true;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)((int)this + 0x4c));
    }
  }
  return 0;
}


