/* Module: pncrt.dll
   Function: gets
   Address: 78027660
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl gets(char *_Buffer)

{
  uint uVar1;
  char *pcVar2;
  
                    /* 0x27660  629  gets */
  FUN_780094e0(0,0x7803f7f8);
  pcVar2 = _Buffer;
  while( true ) {
    DAT_7803f7fc = DAT_7803f7fc + -1;
    if (DAT_7803f7fc < 0) {
      uVar1 = _filbuf((FILE *)&_iob);
    }
    else {
      uVar1 = (uint)(byte)*_iob;
      _iob = _iob + 1;
    }
    if (uVar1 == 10) goto LAB_780276cc;
    if (uVar1 == 0xffffffff) break;
    *pcVar2 = (char)uVar1;
    pcVar2 = pcVar2 + 1;
  }
  if (pcVar2 == _Buffer) {
    FUN_78009550(0,0x7803f7f8);
    return (char *)0x0;
  }
LAB_780276cc:
  *pcVar2 = '\0';
  FUN_78009550(0,0x7803f7f8);
  return _Buffer;
}


