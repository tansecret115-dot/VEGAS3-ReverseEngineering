/* Module: sfcdi.dll
   Function: SfCDING_GetFreeSpaceAudio
   Address: 5bf1f0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDING_GetFreeSpaceAudio(struct HSFCD__ *,struct _cdrmsf *) */

long SfCDING_GetFreeSpaceAudio(HSFCD__ *param_1,_cdrmsf *param_2)

{
  uint uVar1;
  _mediainfo local_2c [28];
  int local_10;
  
                    /* 0x1f0f0  38  ?SfCDING_GetFreeSpaceAudio@@YGJPAUHSFCD__@@PAU_cdrmsf@@@Z */
  cdr_GetMediaInfo(param_1,local_2c);
  uVar1 = 0;
  if ((((byte)local_2c[0] & 1) != 0) && (((byte)local_2c[0] & 2) == 0)) {
    uVar1 = local_10 - 0x2e88;
  }
  FUN_5bf2b5e0((uint *)param_2,uVar1);
  return 0;
}


