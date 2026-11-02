/* Module: pncrt.dll
   Function: _isctype
   Address: 78010d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _isctype(int _C,int _Type)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
                    /* 0x10d70  287  _isctype */
  iVar1 = _C;
  if (_C + 1U < 0x101) {
    return (uint)*(ushort *)(_pctype + _C * 2) & _Type;
  }
  if ((_pctype[(_C >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    _C._0_2_ = (ushort)(byte)_C;
    iVar1 = 1;
  }
  else {
    _C._0_2_ = CONCAT11((byte)_C,(char)((uint)_C >> 8));
    _C._3_1_ = SUB41(iVar1,3);
    _C._0_3_ = (uint3)(ushort)_C;
    iVar1 = 2;
  }
  BVar2 = FUN_7800db00(1,(LPCSTR)&_C,iVar1,(LPWORD)&local_4,0,0,1);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & _Type;
}


