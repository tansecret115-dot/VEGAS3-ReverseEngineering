/* Module: vegas30k.dll
   Function: riff64_SkipChunk
   Address: 0102db50
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_SkipChunk,12 */

undefined8 riff64_SkipChunk(HANDLE param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
                    /* 0x2db50  1404  _riff64_SkipChunk@12 */
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



