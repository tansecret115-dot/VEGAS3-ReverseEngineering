/* Module: vegas30.exe
   Function: INet_CloseURL
   Address: 00561db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall INet_CloseURL(void *) */

long INet_CloseURL(void *param_1)

{
                    /* 0x161db0  9  ?INet_CloseURL@@YGJPAX@Z */
  InternetCloseHandle(param_1);
  return 0;
}


