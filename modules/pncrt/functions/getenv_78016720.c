/* Module: pncrt.dll
   Function: getenv
   Address: 78016720
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl getenv(char *_VarName)

{
  char *pcVar1;
  
                    /* 0x16720  628  getenv */
  _lock(0xc);
  pcVar1 = (char *)FUN_78016750((uchar *)_VarName);
  _unlock(0xc);
  return pcVar1;
}


