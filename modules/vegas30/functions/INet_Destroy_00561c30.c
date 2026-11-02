/* Module: vegas30.exe
   Function: INet_Destroy
   Address: 00561c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall INet_Destroy(struct inetsession_tag *) */

long INet_Destroy(inetsession_tag *param_1)

{
                    /* 0x161c30  11  ?INet_Destroy@@YGJPAUinetsession_tag@@@Z */
  if (*(int *)(param_1 + 0x104) != 0) {
    InternetCloseHandle(*(int *)(param_1 + 0x104));
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  return 0;
}


