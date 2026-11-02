/* Module: sfcdi.dll
   Function: SfCDDrivePlay_Pause
   Address: 5bf157e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDDrivePlay_Pause(struct HSFCD__ *) */

int SfCDDrivePlay_Pause(HSFCD__ *param_1)

{
  long lVar1;
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x157e0  33  ?SfCDDrivePlay_Pause@@YGHPAUHSFCD__@@@Z */
  local_c = 0;
  local_8 = 0;
  local_14[0] = 2;
  lVar1 = cdr_PlayAudio(param_1,(tSFCDPLAYAUDIO *)local_14);
  return lVar1;
}


