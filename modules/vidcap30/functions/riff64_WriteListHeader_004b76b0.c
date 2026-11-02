/* Module: vidcap30.exe
   Function: riff64_WriteListHeader
   Address: 004b76b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_WriteListHeader,28 */

int riff64_WriteListHeader(HANDLE param_1)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
                    /* 0xb76b0  773  _riff64_WriteListHeader@28 */
  hFile = param_1;
  iVar1 = riff64_WriteChunkHeader
                    (param_1,DAT_00599f48,DAT_00599f4c,DAT_00599f50,DAT_00599f54,in_stack_00000018,
                     in_stack_0000001c);
  if (-1 < iVar1) {
    BVar2 = WriteFile(hFile,&stack0x00000008,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    iVar1 = (-(uint)(BVar2 != 0) & 0x7ffb1ff7) + 0x8004e009;
  }
  return iVar1;
}


