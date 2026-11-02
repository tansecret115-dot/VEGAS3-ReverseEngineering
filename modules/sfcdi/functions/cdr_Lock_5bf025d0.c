/* Module: sfcdi.dll
   Function: cdr_Lock
   Address: 5bf025d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_Lock(struct HSFCD__ *,int) */

long cdr_Lock(HSFCD__ *param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x25d0  192  ?cdr_Lock@@YGJPAUHSFCD__@@H@Z */
  if (param_1 != (HSFCD__ *)0x0) {
    uVar1 = FUN_5bf01e80(param_1);
    if ((uVar1 == 0) &&
       (uVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                          (**(undefined4 **)(param_1 + 0x150),0x12,param_1,param_2),
       *(int *)param_1 != 0)) {
      uVar1 = FUN_5bf01bf0((int)param_1,uVar1);
      SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
    }
    return uVar1;
  }
  return -0x7ff8ffa9;
}


