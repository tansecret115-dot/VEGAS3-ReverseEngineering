/* Module: sfcdi.dll
   Function: cdr_Close
   Address: 5bf02410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_Close(struct HSFCD__ *) */

long cdr_Close(HSFCD__ *param_1)

{
  uint uVar1;
  HGLOBAL pvVar2;
  
                    /* 0x2410  163  ?cdr_Close@@YGJPAUHSFCD__@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return 0;
  }
  uVar1 = FUN_5bf01e80(param_1);
  if (uVar1 == 0) {
    uVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                      (**(undefined4 **)(param_1 + 0x150),0xd,param_1,0);
    if (*(int *)param_1 != 0) {
      uVar1 = FUN_5bf01bf0((int)param_1,uVar1);
      SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
    }
  }
  FUN_5bf01080((int)param_1);
  pvVar2 = GlobalHandle(param_1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_1);
  GlobalFree(pvVar2);
  return uVar1;
}


