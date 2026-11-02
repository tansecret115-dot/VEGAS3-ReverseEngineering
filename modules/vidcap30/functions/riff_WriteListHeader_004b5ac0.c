/* Module: vidcap30.exe
   Function: riff_WriteListHeader
   Address: 004b5ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_WriteListHeader,12 */

int riff_WriteListHeader(HANDLE param_1,undefined4 param_2,DWORD param_3)

{
  int iVar1;
  BOOL BVar2;
  
                    /* 0xb5ac0  801  _riff_WriteListHeader@12 */
  iVar1 = riff_WriteChunkHeader(param_1,0x5453494c,param_3);
  if (-1 < iVar1) {
    BVar2 = WriteFile(param_1,&param_2,4,&param_3,(LPOVERLAPPED)0x0);
    iVar1 = (-(uint)(BVar2 != 0) & 0x7ffb1ff7) + 0x8004e009;
  }
  return iVar1;
}


