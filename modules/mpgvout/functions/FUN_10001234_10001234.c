/* Module: mpgvout.dll
   Function: FUN_10001234
   Address: 10001234
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10001234(uint param_1,char *param_2)

{
  int iVar1;
  va_list _Args;
  CHAR local_404 [1024];
  
  if (DAT_10003010 == 0xffffffff) {
    DAT_10003010 = GetProfileIntA("Debug","MPGVOUT",0);
  }
  if ((DAT_10003010 & param_1) != 0) {
    lstrcpyA(local_404,"MPGVOUT:");
    _Args = &stack0x0000000c;
    iVar1 = lstrlenA(local_404);
    vsprintf(local_404 + iVar1,param_2,_Args);
    lstrcatA(local_404,"\r\n");
    OutputDebugStringA(local_404);
  }
  return;
}


