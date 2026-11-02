/* Module: vegas30k.dll
   Function: riff64_SaveLocation
   Address: 0102dae0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_SaveLocation,8 */

undefined4 riff64_SaveLocation(HANDLE param_1,DWORD *param_2)

{
  DWORD DVar1;
  DWORD local_4;
  
                    /* 0x2dae0  1400  _riff64_SaveLocation@8 */
  local_4 = 0;
  DVar1 = SetFilePointer(param_1,0,(PLONG)&local_4,1);
  *param_2 = DVar1;
  param_2[1] = local_4;
  return 0;
}



