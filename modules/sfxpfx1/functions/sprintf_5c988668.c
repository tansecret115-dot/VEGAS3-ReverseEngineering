/* Module: sfxpfx1.dll
   Function: sprintf
   Address: 5c988668
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5c988668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sprintf(_Dest,_Format);
  return iVar1;
}


