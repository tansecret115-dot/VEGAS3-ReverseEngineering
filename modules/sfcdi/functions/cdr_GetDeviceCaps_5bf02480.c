/* Module: sfcdi.dll
   Function: cdr_GetDeviceCaps
   Address: 5bf02480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetDeviceCaps(struct HSFCD__ *,struct cdrcaps_tag *) */

long cdr_GetDeviceCaps(HSFCD__ *param_1,cdrcaps_tag *param_2)

{
  uint uVar1;
  long lVar2;
  
                    /* 0x2480  173  ?cdr_GetDeviceCaps@@YGJPAUHSFCD__@@PAUcdrcaps_tag@@@Z */
  if (param_2 == (cdrcaps_tag *)0x0) {
    return -0x7fffbffd;
  }
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  uVar1 = FUN_5bf01e80(param_1);
  if (uVar1 != 0) {
    cdr_GetInterfaceCaps(*(int *)(param_1 + 4),param_2);
    return uVar1;
  }
  lVar2 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                    (**(undefined4 **)(param_1 + 0x150),1,param_1,param_2);
  if (*(int *)param_1 != 0) {
    lVar2 = FUN_5bf01bf0((int)param_1,lVar2);
    SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
  }
  return lVar2;
}


