/* Module: sfcdi.dll
   Function: cdr_PlayAudio
   Address: 5bf03e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_PlayAudio(struct HSFCD__ *,struct tSFCDPLAYAUDIO *) */

long cdr_PlayAudio(HSFCD__ *param_1,tSFCDPLAYAUDIO *param_2)

{
  uint uVar1;
  
                    /* 0x3e40  194  ?cdr_PlayAudio@@YGJPAUHSFCD__@@PAUtSFCDPLAYAUDIO@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_2 != (tSFCDPLAYAUDIO *)0x0) {
    uVar1 = FUN_5bf01e80(param_1);
    if ((uVar1 == 0) &&
       (uVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                          (**(undefined4 **)(param_1 + 0x150),0x11,param_1,param_2),
       *(int *)param_1 != 0)) {
      uVar1 = FUN_5bf01bf0((int)param_1,uVar1);
      SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
    }
    return uVar1;
  }
  return -0x7fffbffd;
}


