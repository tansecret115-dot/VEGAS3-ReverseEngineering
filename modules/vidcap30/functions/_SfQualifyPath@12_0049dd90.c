/* Module: vidcap30.exe
   Function: _SfQualifyPath@12
   Address: 0049dd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfQualifyPath_12(LPCSTR param_1,LPSTR param_2,uint param_3)

{
  DWORD DVar1;
  
                    /* 0x9dd90  586  _SfQualifyPath@12 */
  if (param_3 != 0) {
    DVar1 = GetFullPathNameA(param_1,param_3,param_2,(LPSTR *)0x0);
    if ((DVar1 != 0) && (DVar1 <= param_3)) {
      return 1;
    }
  }
  return 0;
}


