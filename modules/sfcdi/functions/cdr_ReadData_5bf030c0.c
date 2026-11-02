/* Module: sfcdi.dll
   Function: cdr_ReadData
   Address: 5bf030c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_ReadData(struct HSFCD__ *,long (__stdcall*)(void *,unsigned char
   *,long),unsigned long,unsigned long,unsigned long,unsigned int,int (__stdcall*)(void *,unsigned
   int,long),void *) */

long cdr_ReadData(HSFCD__ *param_1,_func_long_void_ptr_uchar_ptr_long *param_2,ulong param_3,
                 ulong param_4,ulong param_5,uint param_6,_func_int_void_ptr_uint_long *param_7,
                 void *param_8)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  HGLOBAL pvVar4;
  uchar *pMem;
  int iVar5;
  HSFSCSIPORT__ *pHVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  uint local_1a8;
  int local_1a4;
  uint uStack_19c;
  uchar *puStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  ulong uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  ulong local_16c;
  undefined4 local_168 [4];
  tCDR_ERRORDATA atStack_158 [344];
  
                    /* 0x30c0  199  ?cdr_ReadData@@YGJPAUHSFCD__@@P6GJPAXPAEJ@ZKKKIP6GH1IJ@Z1@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  bVar2 = false;
  *(uint *)(param_1 + 0x2c6) = param_6;
  *(undefined4 *)param_1 = 0;
  if (param_5 == 0) {
    param_5 = 0x800;
  }
  uVar3 = SfScsi_GetDefIOBufferSize();
  pvVar4 = GlobalAlloc(0x42,uVar3);
  pMem = GlobalLock(pvVar4);
  if (pMem == (uchar *)0x0) {
    return -0x7ff8fff2;
  }
  local_1a8 = uVar3 / param_5;
  iVar5 = FUN_5bf01c20((int *)(param_1 + 4));
  if (iVar5 == 0) {
    if ((*(int *)(param_1 + 8) != -1) && (*(int *)(param_1 + 0xc) != -1)) {
      puVar10 = &local_16c;
      uVar3 = SfScsi_GetDefIOBufferSize();
      pHVar6 = SfScsi_Open(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),uVar3,puVar10);
      *(HSFSCSIPORT__ **)param_1 = pHVar6;
    }
    if (*(int *)param_1 == 0) {
      iVar5 = -0x7ffb1f3d;
      goto LAB_5bf03439;
    }
  }
  if (param_7 != (_func_int_void_ptr_uint_long *)0x0) {
    (*param_7)(param_8,0,param_4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x150);
  local_1a4 = 0;
  FUN_5bf02800(local_168,param_3,param_4,param_5,1);
  iVar7 = (*(code *)puVar1[0x1a])(*puVar1,5,param_1,local_168);
  if (iVar7 == 0) {
    iVar5 = 0;
    if (param_4 != 0) {
      do {
        if (param_4 <= local_1a8) {
          local_1a8 = param_4;
        }
        uStack_17c = param_3;
        uStack_18c = 0;
        uStack_184 = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_174 = 1;
        puStack_194 = pMem;
        uStack_178 = local_1a8;
        uStack_170 = param_5;
        iVar5 = (*(code *)puVar1[0x1a])(*puVar1,7,param_1,&puStack_194);
        if (iVar5 == 0) {
          if ((param_7 != (_func_int_void_ptr_uint_long *)0x0) &&
             (iVar5 = (*param_7)(param_8,1,local_1a4), iVar5 == 0)) {
            iVar5 = -0x7ffb1ff4;
            goto LAB_5bf033e7;
          }
          if ((param_2 != (_func_long_void_ptr_uchar_ptr_long *)0x0) &&
             (lVar9 = (*param_2)(param_8,pMem,local_1a8 * param_5), lVar9 != local_1a8 * param_5)) {
LAB_5bf03498:
            iVar5 = -0x7ffb1ff7;
            goto LAB_5bf033e7;
          }
          local_1a4 = local_1a4 + local_1a8;
          param_4 = param_4 - local_1a8;
          param_3 = param_3 + local_1a8;
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_5bf01bf0((int)param_1,iVar5);
          if ((iVar5 != -0x7ffb1ff4) && (uStack_19c = 0, local_1a8 != 0)) {
            do {
              uStack_17c = param_3;
              uStack_178 = 1;
              uStack_174 = 1;
              uStack_18c = 0;
              uStack_184 = 0;
              uStack_190 = 0;
              uStack_188 = 0;
              uStack_180 = 0;
              puStack_194 = pMem;
              uStack_170 = param_5;
              iVar5 = (*(code *)puVar1[0x1a])(*puVar1,7,param_1,&puStack_194);
              if (iVar5 != 0) {
                iVar5 = FUN_5bf01bf0((int)param_1,iVar5);
                goto LAB_5bf033e3;
              }
              if ((param_2 != (_func_long_void_ptr_uchar_ptr_long *)0x0) &&
                 (uVar8 = (*param_2)(param_8,pMem,param_5), uVar8 != param_5)) goto LAB_5bf03498;
              local_1a4 = local_1a4 + 1;
              param_4 = param_4 - 1;
              param_3 = param_3 + 1;
              uStack_19c = uStack_19c + 1;
            } while (uStack_19c < local_1a8);
            iVar5 = 0;
          }
        }
      } while (param_4 != 0);
LAB_5bf033e3:
      if (iVar5 != 0) {
LAB_5bf033e7:
        bVar2 = true;
        cdr_GetErrorState(param_1,atStack_158);
      }
    }
    iVar7 = (*(code *)puVar1[0x1a])(*puVar1,8,param_1,0);
    if (bVar2) {
      cdr_SetErrorState(param_1,atStack_158);
    }
    if (iVar5 != 0) goto LAB_5bf03439;
  }
  iVar5 = FUN_5bf01bf0((int)param_1,iVar7);
LAB_5bf03439:
  if (*(HSFSCSIPORT__ **)param_1 != (HSFSCSIPORT__ *)0x0) {
    SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
  }
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
  return iVar5;
}


