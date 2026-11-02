/* Module: sfcdi.dll
   Function: SfCDDrivePlay_Play
   Address: 5bf15780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDDrivePlay_Play(struct HSFCD__ *,unsigned long,unsigned long) */

int SfCDDrivePlay_Play(HSFCD__ *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined4 local_14 [2];
  ulong local_c;
  ulong local_8;
  
                    /* 0x15780  34  ?SfCDDrivePlay_Play@@YGHPAUHSFCD__@@KK@Z */
  local_c = param_2;
  local_14[0] = 0;
  local_8 = param_3;
  lVar1 = cdr_PlayAudio(param_1,(tSFCDPLAYAUDIO *)local_14);
  return lVar1;
}


