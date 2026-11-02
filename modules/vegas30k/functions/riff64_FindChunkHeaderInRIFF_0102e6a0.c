/* Module: vegas30k.dll
   Function: riff64_FindChunkHeaderInRIFF
   Address: 0102e6a0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_FindChunkHeaderInRIFF,28 */

int riff64_FindChunkHeaderInRIFF
              (HANDLE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
                    /* 0x2e6a0  1386  _riff64_FindChunkHeaderInRIFF@28 */
  if (param_7 != (undefined4 *)0x0) {
    local_28 = *param_7;
    local_24 = param_7[1];
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = riff64_ReadFileID(param_1,&local_20,local_10);
  if (-1 < iVar1) {
    local_28 = local_20;
    local_24 = local_1c;
    iVar1 = riff64_FindChunkHeader(param_1,param_2,param_3,param_4,param_5,&local_18,&local_28);
    if (iVar1 < 0) {
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = local_28;
        param_7[1] = local_24;
        return iVar1;
      }
    }
    else {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_18;
        param_6[1] = local_14;
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = local_28;
        param_7[1] = local_24;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



