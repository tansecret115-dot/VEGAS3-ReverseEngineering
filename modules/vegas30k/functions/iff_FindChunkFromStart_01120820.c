/* Module: vegas30k.dll
   Function: iff_FindChunkFromStart
   Address: 01120820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_FindChunkFromStart,12 */

uint iff_FindChunkFromStart(HANDLE param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  LONG local_c;
  int local_8 [2];
  
                    /* 0x120820  1368  _iff_FindChunkFromStart@12 */
  puVar1 = param_3;
  local_14 = 0;
  *param_3 = 0;
  local_10 = 0;
  local_c = 0;
  SetFilePointer(param_1,0,&local_c,0);
  uVar2 = iff_ReadChunkHdr(param_1,local_8);
  if (uVar2 == 0) {
    if (local_8[0] != 0x464f524d) {
      return 0x8004e080;
    }
    ReadFile(param_1,&local_14,4,(LPDWORD)&param_3,(LPOVERLAPPED)0x0);
    if (param_3 != (undefined4 *)&DAT_00000004) {
      return 0x8004e080;
    }
    iVar3 = iff_SeekChunkHeader(param_1,param_2,puVar1);
    uVar2 = (-1 < iVar3) - 1 & 0x8004e00a;
  }
  return uVar2;
}


