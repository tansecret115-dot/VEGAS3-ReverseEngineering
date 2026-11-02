/* Module: sfcdi.dll
   Function: cdr_Eject
   Address: 5bf02570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_Eject(struct HSFCD__ *,int) */

long cdr_Eject(HSFCD__ *param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x2570  165  ?cdr_Eject@@YGJPAUHSFCD__@@H@Z */
  if (param_1 != (HSFCD__ *)0x0) {
    uVar1 = FUN_5bf01e80(param_1);
    if ((uVar1 == 0) &&
       (uVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                          (**(undefined4 **)(param_1 + 0x150),3,param_1,param_2),
       *(int *)param_1 != 0)) {
      uVar1 = FUN_5bf01bf0((int)param_1,uVar1);
      SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
    }
    return uVar1;
  }
  return -0x7ff8ffa9;
}


