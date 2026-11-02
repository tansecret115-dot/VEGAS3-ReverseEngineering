/* Module: pncrt.dll
   Function: _fsopen
   Address: 78024ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl _fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  undefined4 *puVar1;
  FILE *pFVar2;
  
                    /* 0x24ff0  247  _fsopen */
  puVar1 = FUN_780282f0();
  if (puVar1 == (undefined4 *)0x0) {
    return (FILE *)0x0;
  }
  pFVar2 = (FILE *)FUN_780283d0(_Filename,_Mode,_ShFlag,puVar1);
  FUN_78009510((uint)puVar1);
  return pFVar2;
}


