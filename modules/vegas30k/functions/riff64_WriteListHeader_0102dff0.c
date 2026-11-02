/* Module: vegas30k.dll
   Function: riff64_WriteListHeader
   Address: 0102dff0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_WriteListHeader,28 */

int riff64_WriteListHeader(HANDLE param_1)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
                    /* 0x2dff0  1412  _riff64_WriteListHeader@28 */
  hFile = param_1;
  iVar1 = riff64_WriteChunkHeader
                    (param_1,DAT_011dbd80,DAT_011dbd84,DAT_011dbd88,DAT_011dbd8c,in_stack_00000018,
                     in_stack_0000001c);
  if (-1 < iVar1) {
    BVar2 = WriteFile(hFile,&stack0x00000008,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    iVar1 = (-(uint)(BVar2 != 0) & 0x7ffb1ff7) + 0x8004e009;
  }
  return iVar1;
}



