/* Module: vidcap30.exe
   Function: riff64_SkipChunk
   Address: 004b7210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_SkipChunk,12 */

undefined8 riff64_SkipChunk(HANDLE param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
                    /* 0xb7210  765  _riff64_SkipChunk@12 */
  uVar1 = param_2 & 7;
  iVar2 = param_3;
  if (uVar1 != 0) {
    bVar3 = CARRY4(param_2,8 - uVar1);
    param_2 = param_2 + (8 - uVar1);
    iVar2 = (param_3 - (uint)(8 < uVar1)) + (uint)bVar3;
  }
  param_3 = iVar2;
  SetFilePointer(param_1,param_2,&param_3,1);
  return CONCAT44(iVar2,param_2);
}


