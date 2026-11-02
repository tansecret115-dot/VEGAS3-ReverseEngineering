/* Module: vidcap30.exe
   Function: SfComposeStr
   Address: 0047a110
   Source: Ghidra pseudocode (Stage 10 batch) */


void SfComposeStr(LPSTR param_1,DWORD param_2,LPCVOID param_3)

{
  va_list local_4;
  
                    /* 0x7a110  264  SfComposeStr */
  local_4 = &stack0x00000010;
  FormatMessageA(0x400,param_3,0,0,param_1,param_2,&local_4);
  return;
}


