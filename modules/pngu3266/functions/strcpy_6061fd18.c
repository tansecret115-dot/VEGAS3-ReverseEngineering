/* Module: pngu3266.dll
   Function: strcpy
   Address: 6061fd18
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6061fd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}


