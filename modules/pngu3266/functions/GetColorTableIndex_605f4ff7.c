/* Module: pngu3266.dll
   Function: GetColorTableIndex
   Address: 605f4ff7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall CPNBitmapImage::GetColorTableIndex(long,long) */

long __thiscall CPNBitmapImage::GetColorTableIndex(CPNBitmapImage *this,long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int local_8;
  
                    /* 0x4ff7  1143  ?GetColorTableIndex@CPNBitmapImage@@IAEJJJ@Z */
  local_8 = 0;
  lVar2 = GetByteOffsetIntoBits(this,param_1,param_2,&local_8);
  if (lVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    bVar1 = *(byte *)(*(int *)(this + 0x2f) + lVar2);
    if (*(short *)(*(int *)(this + 0x2b) + 0xe) == 4) {
      if (local_8 == 0) {
        bVar1 = bVar1 >> 4;
      }
      else {
        bVar1 = bVar1 & 0xf;
      }
    }
    uVar3 = (uint)bVar1;
  }
  return uVar3;
}


