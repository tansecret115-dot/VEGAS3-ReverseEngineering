/* Module: sfcdi.dll
   Function: SfCDDrivePlay_GetStatus
   Address: 5bf15840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDDrivePlay_GetStatus(struct HSFCD__ *,struct tSFCDPLAYAUDIO *) */

int SfCDDrivePlay_GetStatus(HSFCD__ *param_1,tSFCDPLAYAUDIO *param_2)

{
  long lVar1;
  
                    /* 0x15840  32  ?SfCDDrivePlay_GetStatus@@YGHPAUHSFCD__@@PAUtSFCDPLAYAUDIO@@@Z
                        */
  *(undefined4 *)param_2 = 4;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  lVar1 = cdr_PlayAudio(param_1,param_2);
  return lVar1;
}


