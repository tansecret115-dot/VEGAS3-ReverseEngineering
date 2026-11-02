/* Module: sfcdi.dll
   Function: cdr_ReadTOC
   Address: 5bf02630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_ReadTOC(struct HSFCD__ *,struct _toc *,unsigned int,int (__stdcall*)(void
   *,unsigned int,long)) */

long cdr_ReadTOC(HSFCD__ *param_1,_toc *param_2,uint param_3,_func_int_void_ptr_uint_long *param_4)

{
  uint uVar1;
  int iVar2;
  _toc *p_Var3;
  _toc *p_Var4;
  _toc *local_8;
  uint local_4;
  
                    /* 0x2630  200  ?cdr_ReadTOC@@YGJPAUHSFCD__@@PAU_toc@@IP6GHPAXIJ@Z@Z */
  if (param_1 != (HSFCD__ *)0x0) {
    uVar1 = FUN_5bf01e80(param_1);
    if (uVar1 == 0) {
      p_Var4 = param_2 + 0xc;
      p_Var3 = p_Var4;
      for (iVar2 = 0x75b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)p_Var3 = 0;
        p_Var3 = p_Var3 + 4;
      }
      *(uint *)p_Var4 = 99;
      uVar1 = FUN_5bf2bd00((int *)p_Var4);
      if (uVar1 == 0) {
        *(_func_int_void_ptr_uint_long **)(param_1 + 0x154) = param_4;
        local_8 = param_2;
        local_4 = param_3;
        uVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                          (**(undefined4 **)(param_1 + 0x150),4,param_1,&local_8);
        if (uVar1 == 0) {
          *(uint *)p_Var4 = (*(int *)(param_2 + 4) - *(int *)param_2) + 1;
          uVar1 = FUN_5bf2bd40((int)p_Var4);
          if ((uVar1 == 0) && (uVar1 = FUN_5bf2bfe0((int)param_2), uVar1 == 0)) {
            uVar1 = FUN_5bf2bf60((int)param_2);
            FUN_5bf2bf00((int)param_2);
          }
        }
      }
      if (*(int *)param_1 != 0) {
        uVar1 = FUN_5bf01bf0((int)param_1,uVar1);
        SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
      }
      if (uVar1 != 0) {
        FUN_5bf2bd60((uint *)p_Var4);
        for (iVar2 = 0x75b; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)p_Var4 = 0;
          p_Var4 = p_Var4 + 4;
        }
      }
    }
    return uVar1;
  }
  return -0x7ff8ffa9;
}


