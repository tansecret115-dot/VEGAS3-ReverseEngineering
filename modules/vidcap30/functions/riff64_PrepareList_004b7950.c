/* Module: vidcap30.exe
   Function: riff64_PrepareList
   Address: 004b7950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_PrepareList,24 */

uint riff64_PrepareList(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
                    /* 0xb7950  753  _riff64_PrepareList@24 */
  riff64_SaveLocation(param_1,param_6);
  iVar1 = riff64_WriteListHeader(param_1,param_2,param_3,param_4,param_5,0,0);
  return (-1 < iVar1) - 1 & 0x8004e009;
}


