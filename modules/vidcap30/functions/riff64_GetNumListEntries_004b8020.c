/* Module: vidcap30.exe
   Function: riff64_GetNumListEntries
   Address: 004b8020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_GetNumListEntries,12 */

int riff64_GetNumListEntries(undefined4 param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
                    /* 0xb8020  750  _riff64_GetNumListEntries@12 */
  *param_2 = 0;
  riff64_SaveLocation(param_1,&local_18);
  uVar3 = CONCAT44(local_20._4_4_,(undefined4)local_20);
  while( true ) {
    local_20 = uVar3;
    if ((param_3 != (uint *)0x0) &&
       (((int)param_3[1] < 0 || (((int)param_3[1] < 1 && (*param_3 < 0x18)))))) {
      riff64_RestoreLocation(param_1,local_18,local_14);
      return 0;
    }
    iVar2 = riff64_ReadChunkHeader(param_1,local_10,&local_20);
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      *param_3 = uVar1 - 0x18;
      param_3[1] = (param_3[1] - 1) + (uint)(0x17 < uVar1);
    }
    if (iVar2 != 0) break;
    uVar3 = riff64_SkipChunk(param_1,local_20);
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      *param_3 = uVar1 - (uint)uVar3;
      param_3[1] = (param_3[1] - (int)((ulonglong)uVar3 >> 0x20)) - (uint)(uVar1 < (uint)uVar3);
    }
    *param_2 = *param_2 + 1;
  }
  riff64_RestoreLocation(param_1,local_18,local_14);
  return iVar2;
}


