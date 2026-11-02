/* Module: vegas30.exe
   Function: INet_CloseHandle
   Address: 00561da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall INet_CloseHandle(void *) */

long INet_CloseHandle(void *param_1)

{
                    /* 0x161da0  8  ?INet_CloseHandle@@YGJPAX@Z */
  InternetCloseHandle(param_1);
  return 0;
}


