/* Module: pngu3266.dll
   Function: ImageChanged
   Address: 60617eef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNImageBorder::ImageChanged(void) */

void __thiscall CPNImageBorder::ImageChanged(CPNImageBorder *this)

{
  int iVar1;
  uint uVar2;
  CPNImageBorder *_Dst;
  
                    /* 0x27eef  1457  ?ImageChanged@CPNImageBorder@@IAEXXZ */
  if (*(int **)(this + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc) + 0x40))(this + 4);
    _Dst = this + 0x10;
    *(int *)(this + 8) = *(int *)(this + 8) / 4;
    memset(_Dst,0,0x10);
    iVar1 = (**(code **)(**(int **)(this + 0xc) + 0x60))();
    if ((iVar1 == 0) || (-1 < *(int *)(iVar1 + 8))) {
      uVar2 = 3;
      do {
        *(uint *)_Dst = *(int *)(this + 8) * uVar2;
        _Dst = _Dst + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 < 0x80000000);
    }
    else {
      iVar1 = 0;
      do {
        *(int *)_Dst = iVar1 * *(int *)(this + 8);
        iVar1 = iVar1 + 1;
        _Dst = _Dst + 4;
      } while (iVar1 < 4);
    }
    (**(code **)(**(int **)(this + 0xc) + 0x34))(0,0,this + 0x20);
  }
  return;
}


