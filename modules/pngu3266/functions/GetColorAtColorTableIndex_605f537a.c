/* Module: pngu3266.dll
   Function: GetColorAtColorTableIndex
   Address: 605f537a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::GetColorAtColorTableIndex(long,class CPNColor &)
    */

int __thiscall
CPNBitmapImage::GetColorAtColorTableIndex(CPNBitmapImage *this,long param_1,CPNColor *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
                    /* 0x537a  1139  ?GetColorAtColorTableIndex@CPNBitmapImage@@UAEHJAAVCPNColor@@@Z
                        */
  iVar2 = *(int *)(this + 0x2b);
  if ((*(int *)(iVar2 + 0x20) == 0) && (*(ushort *)(iVar2 + 0xe) < 9)) {
    uVar3 = 1 << ((byte)*(ushort *)(iVar2 + 0xe) & 0x1f);
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x20);
  }
  if ((param_1 < 0) || ((int)((uVar3 & 0xffff) * 4) <= param_1)) {
    iVar2 = 0;
  }
  else {
    iVar1 = iVar2 + param_1 * 4;
    CPNColor::Set(param_2,*(uchar *)(iVar1 + 0x2a),*(uchar *)(iVar1 + 0x29),
                  *(uchar *)(iVar2 + 0x28 + param_1 * 4));
    iVar2 = 1;
  }
  return iVar2;
}


