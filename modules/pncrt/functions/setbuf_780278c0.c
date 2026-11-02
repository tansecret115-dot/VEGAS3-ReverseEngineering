/* Module: pncrt.dll
   Function: setbuf
   Address: 780278c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl setbuf(FILE *_File,char *_Buffer)

{
                    /* 0x278c0  694  setbuf */
  if (_Buffer == (char *)0x0) {
    setvbuf(_File,(char *)0x0,4,0);
    return;
  }
  setvbuf(_File,_Buffer,0,0x200);
  return;
}


