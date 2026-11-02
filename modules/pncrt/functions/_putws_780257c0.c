/* Module: pncrt.dll
   Function: _putws
   Address: 780257c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _putws(wchar_t *_Str)

{
  wchar_t wVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
                    /* 0x257c0  416  _putws */
  iVar4 = 0xffff;
  FUN_780094e0(1,0x7803f818);
  iVar2 = FUN_7800e8c0(&DAT_7803f818);
  wVar1 = *_Str;
  uVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),wVar1);
  while (wVar1 != L'\0') {
    _Str = _Str + 1;
    uVar3 = FUN_78026d40(uVar3,(FILE *)&DAT_7803f818);
    if ((short)uVar3 == -1) goto LAB_78025828;
    wVar1 = *_Str;
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),wVar1);
  }
  uVar3 = FUN_78026d40(10,(FILE *)&DAT_7803f818);
  if ((short)uVar3 != -1) {
    iVar4 = 0;
  }
LAB_78025828:
  FUN_7800e970(iVar2,&DAT_7803f818);
  FUN_78009550(1,0x7803f818);
  return iVar4;
}


