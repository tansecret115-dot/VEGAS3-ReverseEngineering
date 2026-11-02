/* Module: pncrt.dll
   Function: mktime
   Address: 7802e340
   Source: Ghidra pseudocode (Stage 10 batch) */


time_t __cdecl mktime(tm *_Tm)

{
  int iVar1;
  undefined4 extraout_EDX;
  
                    /* 0x2e340  676  mktime */
  iVar1 = FUN_7802e350(&_Tm->tm_sec,1);
  return CONCAT44(extraout_EDX,iVar1);
}


