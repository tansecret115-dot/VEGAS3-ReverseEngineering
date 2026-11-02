/* Module: sfcdi.dll
   Function: SfCDDrivePlay_SetVolume
   Address: 5bf15750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDDrivePlay_SetVolume(struct HSFCD__ *,unsigned int) */

int SfCDDrivePlay_SetVolume(HSFCD__ *param_1,uint param_2)

{
  long lVar1;
  undefined4 local_14 [2];
  uint local_c;
  
                    /* 0x15750  36  ?SfCDDrivePlay_SetVolume@@YGHPAUHSFCD__@@I@Z */
  local_14[0] = 5;
  local_c = param_2;
  lVar1 = cdr_PlayAudio(param_1,(tSFCDPLAYAUDIO *)local_14);
  return lVar1;
}


