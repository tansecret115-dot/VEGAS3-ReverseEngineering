/* Module: vidcap30.exe
   Function: riff64_WriteChunk
   Address: 004b7630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_WriteChunk,36 */

int riff64_WriteChunk(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,uint param_7,int param_8,int *param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_8;
                    /* 0xb7630  768  _riff64_WriteChunk@36 */
  uVar1 = param_7;
  iVar2 = riff64_WriteChunkHeader(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  if (-1 < iVar2) {
    iVar3 = riff64_WriteData(param_1,param_6,uVar1,iVar3,&param_7);
    if (iVar3 != 0) {
      return -0x7ffb1ff7;
    }
    if (param_9 != (int *)0x0) {
      *param_9 = param_7 + 0x18;
      param_9[1] = param_8 + (uint)(0xffffffe7 < param_7);
    }
    iVar2 = 0;
  }
  return iVar2;
}


