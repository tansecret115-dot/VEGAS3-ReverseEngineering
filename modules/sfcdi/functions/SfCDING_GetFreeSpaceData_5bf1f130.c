/* Module: sfcdi.dll
   Function: SfCDING_GetFreeSpaceData
   Address: 5bf1f130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDING_GetFreeSpaceData(struct HSFCD__ *,unsigned long *,int) */

long SfCDING_GetFreeSpaceData(HSFCD__ *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  _mediainfo local_2c [28];
  int local_10;
  
                    /* 0x1f130  39  ?SfCDING_GetFreeSpaceData@@YGJPAUHSFCD__@@PAKH@Z */
  cdr_GetMediaInfo(param_1,local_2c);
  if ((((byte)local_2c[0] & 1) != 0) && (((byte)local_2c[0] & 2) == 0)) {
    if (param_3 != 0) {
      uVar1 = ftol(local_10 + -0x30a2,0);
      *param_2 = uVar1;
      return 0;
    }
    *param_2 = (local_10 + 0x1fd178) * 0x800;
  }
  return 0;
}


