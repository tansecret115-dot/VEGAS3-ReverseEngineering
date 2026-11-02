/* Module: vegas30.exe
   Function: FUN_00441250
   Address: 00441250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00441250(int *param_1,int *param_2,undefined4 param_3,ISFCDINGAUDIO *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                undefined4 param_9,int *param_10)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int *piVar6;
  uchar *_Source;
  longlong lVar7;
  int unaff_retaddr;
  HSFCD__ *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  HWND__ *pHStack_4;
  
  local_24 = (HSFCD__ *)param_4;
  local_20 = param_5;
  local_18 = 0;
  local_1c = param_3;
  uVar1 = FUN_005b89b0(param_6);
  lVar7 = FUN_004411b0(uVar1);
  param_4 = (ISFCDINGAUDIO *)0x0;
  lVar2 = SfCDING_GetISFCDINGAUDIO(&param_4);
  if (param_4 == (ISFCDINGAUDIO *)0x0) {
    return lVar2;
  }
  iVar3 = (**(code **)(*(int *)param_4 + 0xc))(param_4,&local_24);
  if (iVar3 < 0) goto LAB_00441431;
  FUN_00441210(uVar1,lVar7 + 1);
  iVar3 = (**(code **)(*param_2 + 0x10))(param_2,pHStack_4,uVar1);
  FUN_00441210(uVar1,-1 - (int)lVar7,-1 - (int)((ulonglong)lVar7 >> 0x20));
  uVar1 = param_9;
  if (iVar3 != 0) goto LAB_00441431;
  if (param_8 == 0) {
    pvVar4 = GlobalAlloc(0x40,0x50);
    pvVar5 = GlobalLock(pvVar4);
    if ((pvVar5 != (LPVOID)0x0) &&
       (piVar6 = (int *)FUN_004407e0(param_4,param_5,param_6,param_7,lVar7), piVar6 != (int *)0x0))
    {
      iVar3 = (**(code **)(*piVar6 + 0xc))(piVar6);
      goto joined_r0x00441489;
    }
  }
  else {
    if (*param_10 != 0) {
      *(undefined4 *)(unaff_retaddr + 300) = 1;
      iVar3 = FUN_00440f60(param_4,param_9,unaff_retaddr);
      *(undefined4 *)(unaff_retaddr + 300) = 0;
      *param_10 = 0;
      if (iVar3 < 0) goto LAB_00441431;
    }
    pvVar4 = GlobalAlloc(0x40,0x148);
    pvVar5 = GlobalLock(pvVar4);
    if ((pvVar5 != (LPVOID)0x0) &&
       (piVar6 = (int *)FUN_00440b10(uVar1,param_5,param_6,lVar7), piVar6 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar6 + 0xc))(piVar6);
joined_r0x00441489:
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*param_1 + 0x14))(param_1,piVar6);
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      if (iVar3 == 0) {
        local_1c = 0;
        local_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        _Source = (uchar *)FUN_005b89c0(param_4);
        _mbscpy((uchar *)&local_1c,_Source);
        uStack_c = *(undefined4 *)(_Source + 0x104);
        iVar3 = (**(code **)(*param_2 + 0x18))(param_2,&local_1c);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*param_2 + 0x1c))(param_2,unaff_retaddr);
          SfCDUI_CD_ShowErrorBox(pHStack_4,iVar3,local_24,1);
        }
      }
      goto LAB_00441431;
    }
  }
  iVar3 = -0x7ff8fff2;
LAB_00441431:
  (**(code **)(*param_2 + 8))(param_2);
  return iVar3;
}


