/* Module: sfcdi.dll
   Function: cdr_ReadBarCode
   Address: 5bf02720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_ReadBarCode(struct HSFCD__ *,struct tCDRPARAMS_READBARCODE *,int
   (__stdcall*)(void *,unsigned int,long)) */

long cdr_ReadBarCode(HSFCD__ *param_1,tCDRPARAMS_READBARCODE *param_2,
                    _func_int_void_ptr_uint_long *param_3)

{
  uint uVar1;
  
                    /* 0x2720  197
                       ?cdr_ReadBarCode@@YGJPAUHSFCD__@@PAUtCDRPARAMS_READBARCODE@@P6GHPAXIJ@Z@Z */
  if (param_1 != (HSFCD__ *)0x0) {
    uVar1 = FUN_5bf01e80(param_1);
    if ((uVar1 == 0) &&
       (uVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                          (**(undefined4 **)(param_1 + 0x150),0x13,param_1,param_2),
       *(int *)param_1 != 0)) {
      uVar1 = FUN_5bf01bf0((int)param_1,uVar1);
      SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
    }
    return uVar1;
  }
  return -0x7ff8ffa9;
}


