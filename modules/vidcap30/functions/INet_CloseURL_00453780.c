/* Module: vidcap30.exe
   Function: INet_CloseURL
   Address: 00453780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall INet_CloseURL(void *) */

long INet_CloseURL(void *param_1)

{
                    /* 0x53780  46  ?INet_CloseURL@@YGJPAX@Z */
  InternetCloseHandle(param_1);
  return 0;
}


