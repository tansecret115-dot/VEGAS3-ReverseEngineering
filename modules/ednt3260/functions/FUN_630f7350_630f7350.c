/* Module: ednt3260.dll
   Function: FUN_630f7350
   Address: 630f7350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f7350(void *this,short *param_1,short param_2,short param_3)

{
  ushort uVar1;
  short sVar2;
  
  if (0x10 < param_3) {
    FUN_630f92d0();
  }
  _param_2 = (int)param_2;
  if (0 < _param_2) {
    do {
      uVar1 = *param_1 << (0x10U - (char)param_3 & 0x1f) & *(ushort *)(&DAT_631019e8 + param_3 * 2);
      *(ushort *)((int)this + 0x62fe) =
           *(ushort *)((int)this + 0x62fe) | uVar1 >> ((byte)*(short *)((int)this + 0x6300) & 0x1f);
      sVar2 = *(short *)((int)this + 0x6300) + param_3;
      *(short *)((int)this + 0x6300) = sVar2;
      if (0xf < sVar2) {
        **(undefined2 **)((int)this + 0x62fa) = *(undefined2 *)((int)this + 0x62fe);
        *(short *)((int)this + 0x6300) = *(short *)((int)this + 0x6300) + -0x10;
        *(int *)((int)this + 0x62fa) = *(int *)((int)this + 0x62fa) + 2;
        *(ushort *)((int)this + 0x62fe) =
             uVar1 << ((char)param_3 - (char)*(undefined2 *)((int)this + 0x6300) & 0x1fU);
      }
      param_1 = param_1 + 1;
      _param_2 = _param_2 + -1;
    } while (_param_2 != 0);
  }
  return;
}


