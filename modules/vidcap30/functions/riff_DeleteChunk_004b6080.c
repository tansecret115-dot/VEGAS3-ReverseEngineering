/* Module: vidcap30.exe
   Function: riff_DeleteChunk
   Address: 004b6080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_DeleteChunk,16 */

int riff_DeleteChunk(uint param_1,int param_2,DWORD param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  BOOL BVar2;
  int unaff_retaddr;
  HANDLE in_stack_00001024;
  undefined4 in_stack_00001028;
  int *in_stack_0000102c;
  int in_stack_00001030;
  
                    /* 0xb6080  775  _riff_DeleteChunk@16 */
  FUN_00579db0();
  if (in_stack_0000102c != (int *)0x0) {
    *in_stack_0000102c = 0;
  }
  SetFilePointer(in_stack_00001024,0,(PLONG)0x0,0);
  riff_ReadFileID(in_stack_00001024,&param_5,&stack0x0000001c);
  param_4 = param_5;
  if (in_stack_00001030 == 0) {
    iVar1 = riff_FindChunkHeader(in_stack_00001024,in_stack_00001028,&param_1,&param_4);
  }
  else {
    iVar1 = riff_FindListChunk(in_stack_00001024,in_stack_00001028,&param_1,&param_4);
  }
  if (-1 < iVar1) {
    if ((param_1 & 1) != 0) {
      param_1 = param_1 + 1;
    }
    iVar1 = param_1 + 8;
    if (in_stack_00001030 != 0) {
      iVar1 = param_1 + 0xc;
    }
    param_1 = iVar1;
    riff_SaveLocation(in_stack_00001024,&stack0x00000000);
    iVar1 = unaff_retaddr + -8;
    if (in_stack_00001030 != 0) {
      iVar1 = unaff_retaddr + -0xc;
    }
    param_2 = iVar1 + param_1;
    riff_RestoreLocation(in_stack_00001024,param_2);
    while( true ) {
      BVar2 = ReadFile(in_stack_00001024,&stack0x00000020,0x1000,&param_3,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff8;
      }
      riff_SaveLocation(in_stack_00001024,&param_2);
      riff_RestoreLocation(in_stack_00001024,iVar1);
      BVar2 = WriteFile(in_stack_00001024,&stack0x00000020,param_3,(LPDWORD)&stack0x00000018,
                        (LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff7;
      }
      riff_SaveLocation(in_stack_00001024,&stack0x00000000);
      if (param_3 < 0x1000) break;
      riff_RestoreLocation(in_stack_00001024,param_2);
    }
    SetEndOfFile(in_stack_00001024);
    riff_UpdateRIFFSize(in_stack_00001024,-param_1);
    if (in_stack_0000102c != (int *)0x0) {
      *in_stack_0000102c = param_1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


