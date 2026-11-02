/* Module: sfcdi.dll
   Function: SfCDDrivePlay_Resume
   Address: 5bf15810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDDrivePlay_Resume(struct HSFCD__ *) */

int SfCDDrivePlay_Resume(HSFCD__ *param_1)

{
  long lVar1;
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x15810  35  ?SfCDDrivePlay_Resume@@YGHPAUHSFCD__@@@Z */
  local_c = 0;
  local_8 = 0;
  local_14[0] = 3;
  lVar1 = cdr_PlayAudio(param_1,(tSFCDPLAYAUDIO *)local_14);
  return lVar1;
}


