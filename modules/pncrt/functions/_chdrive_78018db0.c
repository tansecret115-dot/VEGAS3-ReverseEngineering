/* Module: pncrt.dll
   Function: _chdrive
   Address: 78018db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _chdrive(int _Drive)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  int *piVar5;
  ulong *puVar6;
  
                    /* 0x18db0  184  _chdrive */
  iVar1 = _Drive;
  if ((0 < _Drive) && (_Drive < 0x20)) {
    _lock(0xc);
    iVar2 = _Drive;
    _Drive = CONCAT31(0x3a,(char)iVar1 + '@');
    iVar1 = _Drive;
    _Drive._3_1_ = SUB41(iVar2,3);
    _Drive._0_3_ = (uint3)(ushort)iVar1;
    BVar3 = SetCurrentDirectoryA((LPCSTR)&_Drive);
    if (BVar3 != 0) {
      _unlock(0xc);
      return 0;
    }
    DVar4 = GetLastError();
    FUN_7800a870(DVar4);
    _unlock(0xc);
    return -1;
  }
  piVar5 = _errno();
  *piVar5 = 0xd;
  puVar6 = __doserrno();
  *puVar6 = 0xf;
  return -1;
}


