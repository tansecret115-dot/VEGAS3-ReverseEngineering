/* Module: pncrt.dll
   Function: fgetpos
   Address: 78026990
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  ulonglong uVar1;
  
                    /* 0x26990  603  fgetpos */
  uVar1 = FUN_78029190(&_File->_ptr);
  *_Pos = uVar1;
  if (((uint)*_Pos & *(uint *)((int)_Pos + 4)) != 0xffffffff) {
    return 0;
  }
  return -1;
}


