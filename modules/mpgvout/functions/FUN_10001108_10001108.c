/* Module: mpgvout.dll
   Function: FUN_10001108
   Address: 10001108
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10001108(char *param_1)

{
  int iVar1;
  va_list _Args;
  CHAR local_404 [1024];
  
  if (DAT_10003004 == 0xffffffff) {
    DAT_10003004 = GetProfileIntA("Debug","MPGVOUT",0);
  }
  if (DAT_10003004 != 0) {
    lstrcpyA(local_404,"MPGVOUT:ERR:");
    _Args = &stack0x00000008;
    iVar1 = lstrlenA(local_404);
    vsprintf(local_404 + iVar1,param_1,_Args);
    lstrcatA(local_404,"\r\n");
    OutputDebugStringA(local_404);
  }
  return;
}


