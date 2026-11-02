/* Module: sfcdi.dll
   Function: cdr_GetMediaInfo
   Address: 5bf02500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetMediaInfo(struct HSFCD__ *,struct _mediainfo *) */

long cdr_GetMediaInfo(HSFCD__ *param_1,_mediainfo *param_2)

{
  uint uVar1;
  int iVar2;
  _mediainfo *p_Var3;
  
                    /* 0x2500  181  ?cdr_GetMediaInfo@@YGJPAUHSFCD__@@PAU_mediainfo@@@Z */
  if (param_2 == (_mediainfo *)0x0) {
    return -0x7fffbffd;
  }
  if (param_1 != (HSFCD__ *)0x0) {
    uVar1 = FUN_5bf01e80(param_1);
    if (uVar1 == 0) {
      p_Var3 = param_2;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)p_Var3 = 0;
        p_Var3 = p_Var3 + 4;
      }
      uVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                        (**(undefined4 **)(param_1 + 0x150),2,param_1,param_2);
      if (*(int *)param_1 != 0) {
        uVar1 = FUN_5bf01bf0((int)param_1,uVar1);
        SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
      }
    }
    return uVar1;
  }
  return -0x7ff8ffa9;
}


