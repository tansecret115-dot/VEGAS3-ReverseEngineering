/* Module: pngu3266.dll
   Function: SetColorTableIndex
   Address: 605f503f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNBitmapImage::SetColorTableIndex(long,long,long) */

int __thiscall
CPNBitmapImage::SetColorTableIndex(CPNBitmapImage *this,long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  int local_8;
  
                    /* 0x503f  1872  ?SetColorTableIndex@CPNBitmapImage@@IAEHJJJ@Z */
  local_8 = 0;
  lVar1 = GetByteOffsetIntoBits(this,param_1,param_2,&local_8);
  if (lVar1 == -1) {
    iVar2 = 0;
  }
  else {
    bVar3 = *(byte *)(lVar1 + *(int *)(this + 0x2f));
    if (*(short *)(*(int *)(this + 0x2b) + 0xe) == 4) {
      if (local_8 == 0) {
        bVar3 = bVar3 & 0xf | (byte)param_3 << 4;
      }
      else {
        bVar3 = bVar3 & 0xf0 | (byte)param_3;
      }
    }
    else if (*(short *)(*(int *)(this + 0x2b) + 0xe) == 8) {
      bVar3 = (byte)param_3;
    }
    *(byte *)(lVar1 + *(int *)(this + 0x2f)) = bVar3;
    iVar2 = 1;
  }
  return iVar2;
}


