/* Module: vegas30k.dll
   Function: SfComposeStr
   Address: 0105a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void SfComposeStr(LPSTR param_1,DWORD param_2,LPCVOID param_3)

{
  va_list local_4;
  
                    /* 0x5a7f0  786  SfComposeStr */
  local_4 = &stack0x00000010;
  FormatMessageA(0x400,param_3,0,0,param_1,param_2,&local_4);
  return;
}


