/* Module: vegas30.exe
   Function: FUN_005a4370
   Address: 005a4370
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_005a4370(tSFLIST **param_1,HGLOBAL param_2,undefined4 param_3,undefined4 param_4,
                    double param_5,ULONG param_6,int param_7)

{
  tSFLIST **pptVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  HRESULT HVar5;
  LPSTREAM local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined1 auStack_10 [16];
  
  pptVar1 = param_1;
  HVar5 = -0x7ff8ffa9;
  local_24 = (IStream *)0x0;
  if (param_6 != 0) {
    _SfVideoPlugin_DestroyCacheList_4(*param_1);
    *param_1 = (tSFLIST *)0x0;
  }
  if (((*param_1 != (tSFLIST *)0x0) ||
      (HVar5 = _SfVideoPlugin_CreateCacheList_4(param_1), *param_1 != (tSFLIST *)0x0)) &&
     (param_2 != (HGLOBAL)0x0)) {
    HVar5 = CreateStreamOnHGlobal(param_2,1,&local_24);
    if (local_24 == (IStream *)0x0) {
      return HVar5;
    }
    if (-1 < HVar5) {
      param_2 = (HGLOBAL)0x1;
      HVar5 = (*local_24->lpVtbl->Read)(local_24,&param_2,4,&param_6);
      if (((HVar5 < 0) || (param_6 != 4)) ||
         ((HVar5 = (*local_24->lpVtbl->Read)(local_24,&iStack_20,4,&param_6), uVar3 = param_4,
          uVar2 = param_3, HVar5 < 0 || (param_6 != 4)))) {
LAB_005a45c2:
        HVar5 = -0x7ffb1ff8;
      }
      else {
        param_1 = (tSFLIST **)0x0;
        if (0 < iStack_20) {
          do {
            HVar5 = (*local_24->lpVtbl->Read)(local_24,auStack_10,0x10,&param_6);
            if (((HVar5 < 0) || (param_6 != 0x10)) ||
               ((HVar5 = (*local_24->lpVtbl->Read)(local_24,&iStack_1c,4,&param_6), HVar5 < 0 ||
                (param_6 != 4)))) goto LAB_005a45c2;
            if (iStack_1c == 0) {
              iVar4 = FUN_005a24e0(pptVar1,auStack_10,DAT_0064b50c,0xffffff9c,0);
              if (iVar4 != 0) {
                goto LAB_005a450d;
              }
            }
            else {
              HVar5 = tSFVIDEOFILTERCACHE::Create
                                (local_24,0,pptVar1,(tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,
                                 DAT_00646c90,(_GUID *)0x0);
              if (HVar5 < 0) goto LAB_005a45c7;
              iVar4 = *(int *)(*(int *)(*pptVar1 + 8) + -4 + *(int *)*pptVar1 * 4);
LAB_005a450d:
              HVar5 = FUN_005a5060(iVar4,uVar2,uVar3,param_5._0_4_,param_5._4_4_);
            }
            param_1 = (tSFLIST **)((int)param_1 + 1);
          } while ((int)param_1 < iStack_20);
        }
        if (-1 < HVar5) {
          iStack_18 = 0;
          iStack_14 = 0;
          HVar5 = (*local_24->lpVtbl->Read)(local_24,&iStack_18,8,&param_6);
          if (((param_7 != 0) && ((iStack_18 != 0 || (iStack_14 != 0)))) &&
             ((iStack_18 != -1 || (iStack_14 != 0x7fffffff)))) {
            if ((((param_5._0_4_ != 0) || (param_5._4_4_ != 0)) &&
                ((param_5._0_4_ != -1 || (param_5._4_4_ != 0x7fffffff)))) &&
               ((param_5._0_4_ != iStack_18 || (param_5._4_4_ != iStack_14)))) {
              param_5 = (double)(longlong)param_5 / (double)CONCAT44(iStack_14,iStack_18);
              HVar5 = FUN_0044ad60(*pptVar1,param_5);
            }
          }
        }
      }
    }
  }
LAB_005a45c7:
  if (local_24 != (IStream *)0x0) {
    (*local_24->lpVtbl->Release)(local_24);
  }
  return HVar5;
}


