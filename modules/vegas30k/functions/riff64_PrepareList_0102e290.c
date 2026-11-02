/* Module: vegas30k.dll
   Function: riff64_PrepareList
   Address: 0102e290
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_PrepareList,24 */

uint riff64_PrepareList(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
                    /* 0x2e290  1392  _riff64_PrepareList@24 */
  riff64_SaveLocation(param_1,param_6);
  iVar1 = riff64_WriteListHeader(param_1,param_2,param_3,param_4,param_5,0,0);
  return (-1 < iVar1) - 1 & 0x8004e009;
}



