/* Module: vidcap30.exe
   Function: riff64_SeekListEntry
   Address: 004b80f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_SeekListEntry,12 */

int riff64_SeekListEntry(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined1 local_10 [16];
  
                    /* 0xb80f0  763  _riff64_SeekListEntry@12 */
  uVar4 = CONCAT44(local_18._4_4_,(undefined4)local_18);
  iVar3 = 0;
  while( true ) {
    if (param_2 == iVar3) {
      return 0;
    }
    if ((param_3 != (uint *)0x0) &&
       (((int)param_3[1] < 0 || (((int)param_3[1] < 1 && (*param_3 < 0x18)))))) break;
    local_18 = uVar4;
    iVar2 = riff64_ReadChunkHeader(param_1,local_10,&local_18);
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      *param_3 = uVar1 - 0x18;
      param_3[1] = (param_3[1] - 1) + (uint)(0x17 < uVar1);
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar4 = riff64_SkipChunk(param_1,local_18);
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      *param_3 = uVar1 - (uint)uVar4;
      param_3[1] = (param_3[1] - (int)((ulonglong)uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4);
    }
    iVar3 = iVar3 + 1;
  }
  return -0x7ffb1ff6;
}


