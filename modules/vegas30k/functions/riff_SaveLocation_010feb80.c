/* Module: vegas30k.dll
   Function: riff_SaveLocation
   Address: 010feb80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_SaveLocation,8 */

undefined4 riff_SaveLocation(HANDLE param_1,DWORD *param_2)

{
  DWORD DVar1;
  
                    /* 0xfeb80  1429  _riff_SaveLocation@8 */
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  *param_2 = DVar1;
  return 0;
}


