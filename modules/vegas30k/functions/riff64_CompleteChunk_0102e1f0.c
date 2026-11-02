/* Module: vegas30k.dll
   Function: riff64_CompleteChunk
   Address: 0102e1f0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_CompleteChunk,12 */

undefined4 riff64_CompleteChunk(HANDLE param_1,uint param_2,int param_3)

{
  HANDLE hFile;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 local_8;
  
  iVar2 = param_3;
  uVar1 = param_2;
                    /* 0x2e1f0  1384  _riff64_CompleteChunk@12 */
  hFile = param_1;
  riff64_Pad(param_1,param_2,param_3);
  local_8 = riff64_AmountWritten(hFile,uVar1,iVar2);
  riff64_SaveLocation(hFile,&param_2);
  riff64_RestoreLocation(hFile,uVar1 + 0x10,iVar2 + (uint)(0xffffffef < uVar1));
  BVar3 = WriteFile(hFile,&local_8,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    riff64_RestoreLocation(hFile,param_2,param_3);
    return 0x8004e009;
  }
  riff64_RestoreLocation(hFile,param_2,param_3);
  return 0;
}



