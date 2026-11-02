/* Module: vidcap30.exe
   Function: riff64_WriteFileID
   Address: 004b79a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_WriteFileID,28 */

int riff64_WriteFileID(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
                    /* 0xb79a0  772  _riff64_WriteFileID@28 */
  hFile = param_1;
  riff64_WriteChunkHeader
            (param_1,DAT_00599f38,DAT_00599f3c,DAT_00599f40,DAT_00599f44,in_stack_00000018,
             in_stack_0000001c);
  BVar1 = WriteFile(hFile,&stack0x00000008,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


