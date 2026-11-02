/* Module: vidcap30.exe
   Function: INet_CloseHandle
   Address: 00453770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall INet_CloseHandle(void *) */

long INet_CloseHandle(void *param_1)

{
                    /* 0x53770  45  ?INet_CloseHandle@@YGJPAX@Z */
  InternetCloseHandle(param_1);
  return 0;
}


