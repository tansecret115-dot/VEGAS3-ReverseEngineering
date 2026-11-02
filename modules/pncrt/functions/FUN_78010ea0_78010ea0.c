/* Module: pncrt.dll
   Function: FUN_78010ea0
   Address: 78010ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78010ea0(uint param_1)

{
  ushort _C;
  int iVar1;
  size_t sVar2;
  undefined2 uVar3;
  WCHAR local_2;
  
  _C = (ushort)param_1;
  if (_C == 0xffff) {
    return param_1;
  }
  if (DAT_78042438 == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return param_1 + 0xffe0;
    }
  }
  else {
    if (_C < 0x100) {
      iVar1 = iswctype(_C,2);
      if (iVar1 == 0) {
        return param_1 & 0xffff;
      }
    }
    sVar2 = FUN_7800d530(DAT_78042438,0x200,(LPCWSTR)&param_1,(char *)0x1,&local_2,1,0);
    uVar3 = (undefined2)(sVar2 >> 0x10);
    param_1 = CONCAT22(uVar3,(undefined2)param_1);
    if (sVar2 != 0) {
      param_1 = CONCAT22(uVar3,local_2);
    }
  }
  return param_1;
}


