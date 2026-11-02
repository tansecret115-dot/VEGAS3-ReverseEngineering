/* Module: vegas30.exe
   Function: SfImageList_CreateFromTGA
   Address: 00548f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfImageList_CreateFromTGA(struct tSFIMAGELIST * *,unsigned int,long,long) */

long SfImageList_CreateFromTGA(tSFIMAGELIST **param_1,uint param_2,long param_3,long param_4)

{
  byte bVar1;
  tSFIMAGELIST *ptVar2;
  HGLOBAL hResData;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  tSFIMAGELIST *ptVar6;
  uint uVar7;
  int local_434;
  uint local_430;
  int local_42c;
  undefined1 local_428 [1064];
  
                    /* 0x148f90  25  ?SfImageList_CreateFromTGA@@YGJPAPAUtSFIMAGELIST@@IJJ@Z */
  *param_1 = (tSFIMAGELIST *)0x0;
  ptVar2 = calloc(1,0x448);
  if (ptVar2 == (tSFIMAGELIST *)0x0) {
    local_434 = -0x7ff8fff2;
    goto LAB_00549136;
  }
  ptVar6 = ptVar2;
  for (iVar5 = 0x112; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)ptVar6 = 0;
    ptVar6 = ptVar6 + 4;
  }
  iVar5 = _SfFindResource_12(DAT_00647204,param_2 & 0xffff,"TGAFILE");
  if (iVar5 == 0) {
LAB_00549177:
    local_434 = -0x7ff8ffa9;
  }
  else {
    hResData = (HGLOBAL)_SfLoadResource_8(DAT_00647204,iVar5);
    uVar4 = local_430;
    uVar7 = local_430;
    if (hResData != (HGLOBAL)0x0) {
      pvVar3 = LockResource(hResData);
      uVar4 = _SfSizeofResource_8(DAT_00647204,iVar5);
      if ((((uVar4 < 0x13) || (*(char *)((int)pvVar3 + 2) != '\x02')) ||
          (*(char *)((int)pvVar3 + 0x10) != ' ')) ||
         (bVar1 = *(byte *)((int)pvVar3 + 0x11) >> 4, (bVar1 & 1) != 0)) goto LAB_00549177;
      uVar7 = (uint)*(ushort *)((int)pvVar3 + 0xc);
      local_42c = (int)pvVar3 + 0x12;
      uVar4 = (uint)*(ushort *)((int)pvVar3 + 0xe);
      local_430 = uVar7 * 4;
      if ((bVar1 & 3) == 2) {
        local_42c = local_42c + (uVar4 - 1) * local_430;
        local_430 = uVar7 * -4;
      }
    }
    ptVar6 = ptVar2 + 0x444;
    local_434 = _SfDibAlloc_28(ptVar6,0x1c,uVar7,uVar4,0,0,0);
    if (-1 < local_434) {
      _SfVideo_InitBitmapInfo_28(local_428,0x1c,uVar7,uVar4,0,0,0);
      _SfDibCopy_36(*(int *)ptVar6,0,0,0,local_428,local_42c,0,local_430,3);
      *(long *)ptVar2 = param_3;
      *(long *)(ptVar2 + 4) = param_4;
      *(int *)(ptVar2 + 8) = *(int *)(*(int *)ptVar6 + 8) / param_4;
      *(int *)(ptVar2 + 0xc) = *(int *)(*(int *)ptVar6 + 4) / param_3;
      *param_1 = ptVar2;
      local_434 = FUN_00548ec0(ptVar2 + 0x10,param_3,param_4,0x1c);
      if (-1 < local_434) {
        return local_434;
      }
    }
  }
LAB_00549136:
  if (*(int *)(ptVar2 + 0x444) != 0) {
    _SfDibFree_8(*(int *)(ptVar2 + 0x444),0);
  }
  FUN_00548f50(ptVar2 + 0x10);
  for (iVar5 = 0x112; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)ptVar2 = 0;
    ptVar2 = ptVar2 + 4;
  }
  return local_434;
}


