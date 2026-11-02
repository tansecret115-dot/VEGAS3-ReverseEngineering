/* Module: pncrt.dll
   Function: what
   Address: 7800ab00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual char const * __thiscall exception::what(void)const  */

char * __thiscall exception::what(exception *this)

{
  char *pcVar1;
  
                    /* 0xab00  48  ?what@exception@@UBEPBDXZ */
  pcVar1 = *(char **)(this + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


