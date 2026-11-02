/* Module: vegas30k.dll
   Function: FUN_01137300
   Address: 01137300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x01137557 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

int __thiscall FUN_01137300(undefined4 param_1,IStream *param_2,ULONG *param_3)

{
  char cVar1;
  LARGE_INTEGER dlibMove;
  LARGE_INTEGER dlibMove_00;
  IStream *This;
  HRESULT HVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int *unaff_EBX;
  uint unaff_EBP;
  ULARGE_INTEGER *unaff_EDI;
  bool bVar7;
  ULARGE_INTEGER *plibNewPosition;
  ULARGE_INTEGER *plibNewPosition_00;
  undefined4 uStack_7c;
  ULARGE_INTEGER *pUStack_78;
  undefined4 *puVar8;
  uint uVar9;
  ULONG *pcbRead;
  int *local_4c;
  ULARGE_INTEGER local_48;
  int *local_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulong uStack_20;
  int *piStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined1 auStack_10 [6];
  ushort uStack_a;
  uint uStack_8;
  uint uStack_4;
  
  This = param_2;
  local_4c = (int *)0x0;
  local_48.s.LowPart = param_1;
  (*param_2->lpVtbl->Read)(param_2,&local_40,4,(ULONG *)&local_4c);
  (*This->lpVtbl->Read)(This,(IStream *)(param_1 + 0x3c),(ULONG)local_40,(ULONG *)&local_4c);
  ReadClassStm(This,(CLSID *)auStack_10);
  iStack_38 = 0;
  puStack_34 = (undefined4 *)0x0;
  (*This->lpVtbl->Read)(This,&iStack_38,4,(ULONG *)&local_4c);
  param_2 = (LPVOID)0x0;
  local_48.s.HighPart = 0;
  _fpreset();
  pUStack_78 = (ULARGE_INTEGER *)0x1137389;
  HVar2 = CoCreateInstance((IID *)auStack_10,(LPUNKNOWN)0x0,5,(IID *)&DAT_011f0ee0,&param_2);
  bVar7 = HVar2 == 0;
  if (HVar2 < 0) {
    uStack_20 = auStack_10._0_4_;
    uStack_18 = uStack_8;
    bVar6 = 0;
    uStack_30 = 0xaa000000;
    uStack_2c = 0xbaa26b00;
    piStack_1c = stack0xfffffff4;
    uStack_14 = uStack_4;
    if (((short)stack0xfffffff4 == 0xf56) && (uStack_a == 0x11d2)) {
      iVar3 = 0;
      do {
        cVar1 = *(char *)((int)&uStack_18 + iVar3);
        if (cVar1 != (&DAT_01205928)[iVar3]) {
          bVar6 = bVar6 | 1;
        }
        if (cVar1 != (&DAT_01205920)[iVar3]) {
          bVar6 = bVar6 | 2;
        }
        if (cVar1 != (&DAT_01205918)[iVar3]) {
          bVar6 = bVar6 | 4;
        }
        if (bVar6 == 7) goto LAB_01137414;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
      uStack_30 = 0xa0000000;
      uStack_2c = 0x5b7269c9;
    }
LAB_01137414:
    if (((uStack_4 & 0x7abe8f00) == 0x7abe8f00) || ((uStack_4 & 0xb6de8f00) == 0xb6de8f00)) {
      uStack_8 = uStack_8 & 0xffff | uStack_30;
      uStack_4 = uStack_2c;
    }
    pUStack_78 = (ULARGE_INTEGER *)0x1137471;
    HVar2 = CoCreateInstance((IID *)auStack_10,(LPUNKNOWN)0x0,5,(IID *)&DAT_011f0ee0,&param_2);
    bVar7 = HVar2 == 0;
    if (HVar2 < 0) {
      iVar3 = _SfGraph_MapFxGUID_OriginalToVegasVideo_4();
      if (-1 < iVar3) {
        pUStack_78 = (ULARGE_INTEGER *)0x1137497;
        HVar2 = CoCreateInstance((IID *)auStack_10,(LPUNKNOWN)0x0,3,(IID *)&DAT_011f0ee0,&param_2);
        bVar7 = HVar2 == 0;
        if (-1 < HVar2) goto LAB_011374c3;
      }
      iVar3 = _SfGraph_MapFxGUID_VegasVideoToOriginal_4();
      if (iVar3 < 0) goto LAB_01137618;
      pUStack_78 = (ULARGE_INTEGER *)0x11374c1;
      HVar2 = CoCreateInstance((IID *)auStack_10,(LPUNKNOWN)0x0,3,(IID *)&DAT_011f0ee0,&param_2);
      bVar7 = HVar2 == 0;
    }
  }
LAB_011374c3:
  if (bVar7) {
    uStack_30 = 0;
    uStack_2c = 0;
    pUStack_78 = (ULARGE_INTEGER *)0x11374e4;
    (*This->lpVtbl->Seek)(This,(LARGE_INTEGER)0x100000000,(DWORD)&uStack_30,unaff_EDI);
    local_4c = (int *)0x0;
    iVar3 = FUN_01165660();
    if (-1 < iVar3) {
      uVar9 = 2;
      (**(code **)(*local_4c + 0x3c))();
      pUStack_78 = (ULARGE_INTEGER *)0x0;
      uStack_7c = 1;
      puVar8 = puStack_34;
      uVar5 = uStack_30;
      iVar3 = iStack_38;
      (**(code **)(*unaff_EBX + 0x38))(unaff_EBX);
      uVar4 = (**(code **)(*piStack_1c + 0x14))(piStack_1c,uVar5);
      plibNewPosition = &local_48;
      plibNewPosition_00 = pUStack_78;
      (**(code **)((pUStack_78->s).LowPart + 0x14))(pUStack_78,0,0,1);
      (*(code *)((IStream *)(local_48.s.LowPart + 8))->lpVtbl)();
      (*This->lpVtbl->Seek)(This,(LARGE_INTEGER)0x200000000,(DWORD)&stack0xffffff98,plibNewPosition)
      ;
      uVar5 = iVar3 + uVar5 + (uint)CARRY4(uStack_3c,(uint)puVar8);
      if ((uVar9 <= uVar5) && ((uVar9 < uVar5 || (uVar4 <= uStack_3c + (int)puVar8)))) {
        uVar5 = unaff_EBP;
      }
      dlibMove.s.HighPart = 0;
      dlibMove.s.LowPart = uVar5;
      (*This->lpVtbl->Seek)(This,dlibMove,0,plibNewPosition_00);
      iVar3 = (**(code **)*puStack_34)(puStack_34,&DAT_011ed320,&uStack_7c);
      param_1 = local_48.s.HighPart;
      if ((-1 < iVar3) && (iVar3 = iStack_38, iStack_38 < 0)) {
        iVar3 = 0x4e009;
      }
    }
    pcbRead = param_3;
    (**(code **)(*param_3 + 8))();
    if ((iVar3 == 0) || (iVar3 == 0x4e009)) {
      (*((IStream *)param_1)->lpVtbl->Read)
                ((IStream *)param_1,(void *)local_48.s.HighPart,(ULONG)(param_1 + 0x3c),pcbRead);
      (**(code **)(*local_40 + 8))();
      (*This->lpVtbl->Read)(This,(IStream *)(param_1 + 0x34),4,(ULONG *)&local_4c);
    }
    return iVar3;
  }
LAB_01137618:
  pUStack_78 = (ULARGE_INTEGER *)0x113762b;
  dlibMove_00.s.HighPart = 1;
  dlibMove_00.s.LowPart = (DWORD)puStack_34;
  (*This->lpVtbl->Seek)(This,dlibMove_00,0,unaff_EDI);
  (*This->lpVtbl->Read)(This,(IStream *)(param_1 + 0x34),4,(ULONG *)&local_48);
  return -0x7ffb1f7c;
}


