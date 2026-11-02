/* Module: pncrt.dll
   Function: clearerr
   Address: 780268b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl clearerr(FILE *_File)

{
  byte *pbVar1;
  uint uVar2;
  
                    /* 0x268b0  588  clearerr */
  FUN_780094a0((uint)_File);
  uVar2 = _File->_file;
  _File->_flag = _File->_flag & 0xffffffcf;
  if (uVar2 != 0xffffffff) {
    pbVar1 = (byte *)((&__pioinfo)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24 + 4);
    *pbVar1 = *pbVar1 & 0xfd;
    FUN_78009510((uint)_File);
    return;
  }
  DAT_7803f3f4 = DAT_7803f3f4 & 0xfd;
  FUN_78009510((uint)_File);
  return;
}


