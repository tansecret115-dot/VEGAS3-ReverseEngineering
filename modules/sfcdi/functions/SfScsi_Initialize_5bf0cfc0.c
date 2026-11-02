/* Module: sfcdi.dll
   Function: SfScsi_Initialize
   Address: 5bf0cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfScsi_Initialize(unsigned long) */

long SfScsi_Initialize(ulong param_1)

{
  long lVar1;
  uint unaff_ESI;
  char unaff_retaddr;
  
                    /* 0xcfc0  116  ?SfScsi_Initialize@@YGJK@Z */
  _DAT_5bf631c0 = param_1;
  _DAT_5bf6312c = 0x94;
  GetVersionExA((LPOSVERSIONINFOA)&DAT_5bf6312c);
  DAT_5bf63128 = (uint)(DAT_5bf6313c == 2);
  lVar1 = FUN_5bf0bcb0(~param_1 >> 2 & 1,unaff_ESI,unaff_retaddr);
  return lVar1;
}


