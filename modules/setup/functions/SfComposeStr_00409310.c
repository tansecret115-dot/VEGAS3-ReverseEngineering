/* Module: Setup.exe
   Function: SfComposeStr
   Address: 00409310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl SfComposeStr(LPSTR param_1,DWORD param_2,LPCVOID param_3)

{
  va_list local_4;
  
                    /* 0x9310  85  SfComposeStr */
  local_4 = &stack0x00000010;
  FormatMessageA(0x400,param_3,0,0,param_1,param_2,&local_4);
  return;
}


