/* Module: pngu3266.dll
   Function: GetByteOffsetIntoBits
   Address: 605f4f74
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall CPNBitmapImage::GetByteOffsetIntoBits(long,long,int &) */

long __thiscall
CPNBitmapImage::GetByteOffsetIntoBits(CPNBitmapImage *this,long param_1,long param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
                    /* 0x4f74  1119  ?GetByteOffsetIntoBits@CPNBitmapImage@@IAEJJJAAH@Z */
  iVar2 = *(int *)(this + 0x2b);
  if (((iVar2 == 0) || (*(int *)(this + 0x2f) == 0)) ||
     (uVar1 = *(ushort *)(iVar2 + 0xe), 8 < uVar1)) {
    lVar3 = -1;
  }
  else {
    if (0 < *(int *)(iVar2 + 8)) {
      param_2 = (*(int *)(this + 0x10) - param_2) + -1;
    }
    lVar3 = (int)(param_1 * (uint)uVar1) / 8 +
            param_2 * ((uint)(ushort)(*(short *)(iVar2 + 0xc) * uVar1) * *(int *)(this + 0xc) + 0x1f
                       >> 3 & 0x1ffffffc);
    *param_3 = (uint)((int)(param_1 * (uint)uVar1) % 8 != 0);
  }
  return lVar3;
}


