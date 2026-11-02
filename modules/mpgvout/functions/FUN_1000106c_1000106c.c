/* Module: mpgvout.dll
   Function: FUN_1000106c
   Address: 1000106c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000106c(char *param_1)

{
  int iVar1;
  va_list _Args;
  CHAR local_404 [1024];
  
  if (DAT_10003000 == 0xffffffff) {
    DAT_10003000 = GetProfileIntA("Debug","MPGVOUT",0);
  }
  if (DAT_10003000 != 0) {
    lstrcpyA(local_404,"MPGVOUT:");
    _Args = &stack0x00000008;
    iVar1 = lstrlenA(local_404);
    vsprintf(local_404 + iVar1,param_1,_Args);
    lstrcatA(local_404,"\r\n");
    OutputDebugStringA(local_404);
  }
  return;
}


