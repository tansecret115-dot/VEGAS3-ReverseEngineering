/* Module: sfcdi.dll
   Function: SfCDDrivePlay_Stop
   Address: 5bf157b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDDrivePlay_Stop(struct HSFCD__ *) */

int SfCDDrivePlay_Stop(HSFCD__ *param_1)

{
  long lVar1;
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x157b0  37  ?SfCDDrivePlay_Stop@@YGHPAUHSFCD__@@@Z */
  local_c = 0;
  local_8 = 0;
  local_14[0] = 1;
  lVar1 = cdr_PlayAudio(param_1,(tSFCDPLAYAUDIO *)local_14);
  return lVar1;
}


