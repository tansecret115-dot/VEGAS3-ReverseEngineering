/* Module: sfcdi.dll
   Function: cdr_ReadAudioOld
   Address: 5bf02c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_ReadAudioOld(struct HSFCD__ *,long (__stdcall*)(void *,unsigned char
   *,long),long (__stdcall*)(void *,unsigned char *,long),long (__stdcall*)(void *,unsigned char
   *,long),unsigned long,unsigned long,unsigned int,int (__stdcall*)(void *,unsigned int,long),void
   *,class CSfCDIProgress *) */

long cdr_ReadAudioOld(HSFCD__ *param_1,_func_long_void_ptr_uchar_ptr_long *param_2,
                     _func_long_void_ptr_uchar_ptr_long *param_3,
                     _func_long_void_ptr_uchar_ptr_long *param_4,ulong param_5,ulong param_6,
                     uint param_7,_func_int_void_ptr_uint_long *param_8,void *param_9,
                     CSfCDIProgress *param_10)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  HGLOBAL pvVar4;
  uchar *pMem;
  uchar *pMem_00;
  uchar *pMem_01;
  int iVar5;
  HSFSCSIPORT__ *pHVar6;
  LPSTR pCVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  undefined4 uVar12;
  int iStack_1a8;
  uchar *puStack_194;
  undefined4 uStack_190;
  uchar *puStack_18c;
  int iStack_188;
  uchar *puStack_184;
  int iStack_180;
  ulong uStack_17c;
  uint uStack_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 auStack_16c [2];
  uint uStack_164;
  ulong local_15c;
  tCDR_ERRORDATA atStack_158 [344];
  
                    /* 0x2c30  196
                       ?cdr_ReadAudioOld@@YGJPAUHSFCD__@@P6GJPAXPAEJ@Z33KKIP6GH1IJ@Z1PAVCSfCDIProgress@@@Z
                        */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  bVar2 = false;
  *(uint *)(param_1 + 0x2c6) = param_7;
  *(undefined4 *)param_1 = 0;
  uVar3 = SfScsi_GetDefIOBufferSize();
  pvVar4 = GlobalAlloc(0x42,uVar3);
  pMem = GlobalLock(pvVar4);
  if (pMem == (uchar *)0x0) {
    return -0x7ff8fff2;
  }
  uVar10 = uVar3 / 0xa56;
  pvVar4 = GlobalAlloc(0x42,uVar10 << 4);
  pMem_00 = GlobalLock(pvVar4);
  if (pMem_00 == (uchar *)0x0) {
    return -0x7ff8fff2;
  }
  pvVar4 = GlobalAlloc(0x42,uVar10 * 0x126);
  pMem_01 = GlobalLock(pvVar4);
  if (pMem_01 == (uchar *)0x0) {
    return -0x7ff8fff2;
  }
  iVar5 = FUN_5bf01c20((int *)(param_1 + 4));
  if (iVar5 == 0) {
    if ((*(int *)(param_1 + 8) != -1) && (*(int *)(param_1 + 0xc) != -1)) {
      puVar11 = &local_15c;
      uVar3 = SfScsi_GetDefIOBufferSize();
      pHVar6 = SfScsi_Open(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),uVar3,puVar11);
      *(HSFSCSIPORT__ **)param_1 = pHVar6;
    }
    if (*(int *)param_1 == 0) {
      iVar5 = -0x7ffb1f3d;
      goto LAB_5bf03021;
    }
  }
  if (param_10 != (CSfCDIProgress *)0x0) {
    iVar5 = *(int *)param_10;
    uVar12 = 0;
    uVar3 = param_6;
    pCVar7 = FUN_5bf283e0(DAT_5bf65fc4,0x4b3);
    (**(code **)(iVar5 + 4))(pCVar7,uVar3,uVar12);
  }
  if (param_8 != (_func_int_void_ptr_uint_long *)0x0) {
    (*param_8)(param_9,0,param_6);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x150);
  iStack_1a8 = 0;
  *(void **)(param_1 + 0x158) = param_9;
  FUN_5bf02800(auStack_16c,param_5,param_6,0x930,0);
  if (param_3 != (_func_long_void_ptr_uchar_ptr_long *)0x0) {
    uStack_164 = uStack_164 | 2;
  }
  if (param_4 != (_func_long_void_ptr_uchar_ptr_long *)0x0) {
    uStack_164 = uStack_164 | 4;
  }
  iVar8 = (*(code *)puVar1[0x1a])(*puVar1,5,param_1,auStack_16c);
  if (iVar8 == 0) {
    iVar5 = 0;
    if (param_6 != 0) {
      do {
        if (param_6 < uVar10) {
          uVar10 = param_6;
        }
        uStack_17c = param_5;
        uStack_190 = 0;
        iStack_188 = 0;
        iStack_180 = 0;
        uStack_170 = 0x930;
        uStack_174 = 0;
        if (param_3 != (_func_long_void_ptr_uchar_ptr_long *)0x0) {
          uStack_174 = 2;
        }
        if (param_4 != (_func_long_void_ptr_uchar_ptr_long *)0x0) {
          uStack_174 = uStack_174 | 4;
        }
        puStack_194 = pMem;
        puStack_18c = pMem_00;
        puStack_184 = pMem_01;
        uStack_178 = uVar10;
        iVar5 = (*(code *)puVar1[0x1a])(*puVar1,6,param_1,&puStack_194);
        if (iVar5 != 0) {
          iVar5 = FUN_5bf01bf0((int)param_1,iVar5);
          if (iVar5 != 0) {
LAB_5bf02fc8:
            bVar2 = true;
            cdr_GetErrorState(param_1,atStack_158);
          }
          goto LAB_5bf02fe6;
        }
        if (((param_10 != (CSfCDIProgress *)0x0) &&
            (iVar5 = (**(code **)(*(int *)param_10 + 0x10))(iStack_1a8,0), iVar5 == 0)) ||
           ((param_8 != (_func_int_void_ptr_uint_long *)0x0 &&
            (iVar5 = (*param_8)(param_9,1,iStack_1a8), iVar5 == 0)))) {
          iVar5 = -0x7ffb1ff4;
          goto LAB_5bf02fc8;
        }
        if ((param_2 != (_func_long_void_ptr_uchar_ptr_long *)0x0) &&
           (lVar9 = (*param_2)(param_9,pMem,uVar10 * 0x930), lVar9 != uVar10 * 0x930)) {
          iVar5 = -0x7ffb1ff7;
          goto LAB_5bf02fc8;
        }
        if ((param_3 != (_func_long_void_ptr_uchar_ptr_long *)0x0) && (iStack_188 != 0)) {
          (*param_3)(param_9,pMem_00,iStack_188);
        }
        if ((param_4 != (_func_long_void_ptr_uchar_ptr_long *)0x0) && (iStack_180 != 0)) {
          (*param_4)(param_9,pMem_01,iStack_180);
        }
        param_6 = param_6 - uVar10;
        iStack_1a8 = iStack_1a8 + uVar10;
        param_5 = param_5 + uVar10;
      } while (param_6 != 0);
      iVar5 = 0;
    }
LAB_5bf02fe6:
    iVar8 = (*(code *)puVar1[0x1a])(*puVar1,8,param_1,0);
    if (bVar2) {
      cdr_SetErrorState(param_1,atStack_158);
    }
    if (iVar5 != 0) goto LAB_5bf03021;
  }
  iVar5 = FUN_5bf01bf0((int)param_1,iVar8);
LAB_5bf03021:
  if (*(HSFSCSIPORT__ **)param_1 != (HSFSCSIPORT__ *)0x0) {
    SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
  }
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
  pvVar4 = GlobalHandle(pMem_00);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem_00);
  GlobalFree(pvVar4);
  pvVar4 = GlobalHandle(pMem_01);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem_01);
  GlobalFree(pvVar4);
  if (param_10 != (CSfCDIProgress *)0x0) {
    (**(code **)(*(int *)param_10 + 0x18))(iVar5);
  }
  return iVar5;
}


