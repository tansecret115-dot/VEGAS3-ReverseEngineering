/* Module: vegas30k.dll
   Function: SfCdiGetProgramChainInfo
   Address: 010858a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetProgramChainInfo(struct tagPGCI_GI *,unsigned long,unsigned int,struct
   tagSFIFO_PGCI *) */

long SfCdiGetProgramChainInfo(tagPGCI_GI *param_1,ulong param_2,uint param_3,tagSFIFO_PGCI *param_4)

{
  ushort uVar1;
  tagPGCI_GI *ptVar2;
  tagPGC_CMDTI *ptVar3;
  ushort uVar4;
  tagPGC_CMDTI *ptVar5;
  tagC_PBI *ptVar6;
  tagC_POSI *ptVar7;
  long lVar8;
  
                    /* 0x858a0  306
                       ?SfCdiGetProgramChainInfo@@YGJPAUtagPGCI_GI@@KIPAUtagSFIFO_PGCI@@@Z */
  ptVar2 = param_1;
  lVar8 = 0;
  SfCdiSwap_PGCI_GI(param_1);
  *(ulong *)param_4 = param_2;
  *(uint *)(param_4 + 4) = param_3;
  *(tagPGCI_GI *)(param_4 + 0xb) = param_1[3];
  *(tagPGCI_GI *)(param_4 + 0xc) = param_1[2];
  *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(param_4 + 0xa8) = *(undefined2 *)(param_1 + 0x9c);
  *(undefined2 *)(param_4 + 0xaa) = *(undefined2 *)(param_1 + 0x9e);
  *(undefined2 *)(param_4 + 0xac) = *(undefined2 *)(param_1 + 0xa0);
  *(tagPGCI_GI *)(param_4 + 9) = param_1[0xa2];
  *(tagPGCI_GI *)(param_4 + 0xae) = param_1[0xa3];
  param_4[8] = (tagSFIFO_PGCI)0x1;
  memmove(param_4 + 0x18,param_1 + 0xc,0x10);
  memmove(param_4 + 0x28,param_1 + 0x1c,0x80);
  memmove(param_4 + 0xaf,param_1 + 0xa4,0x40);
  _SfList_DeleteList_16(*(undefined4 *)(param_4 + 0xf0),0,0xffffffff,1);
  _SfList_DeleteList_16(*(undefined4 *)(param_4 + 0xf4),0,0xffffffff,1);
  _SfList_DeleteList_16(*(undefined4 *)(param_4 + 0xf8),0,0xffffffff,1);
  _SfList_DeleteList_16(*(undefined4 *)(param_4 + 0x110),0,0xffffffff,1);
  _SfList_DeleteList_16(*(undefined4 *)(param_4 + 0x114),0,0xffffffff,1);
  _SfList_DeleteList_16(*(undefined4 *)(param_4 + 0x118),0,0xffffffff,1);
  if (*(ushort *)(param_1 + 0xe4) != 0) {
    ptVar3 = (tagPGC_CMDTI *)(param_1 + *(ushort *)(param_1 + 0xe4));
    SfCdiSwap_PGC_CMDTI(ptVar3);
    ptVar5 = ptVar3 + 8;
    param_1 = (tagPGCI_GI *)0x0;
    if (*(short *)ptVar3 != 0) {
      do {
        if (*ptVar5 == (tagPGC_CMDTI)0x30) {
          *(undefined4 *)(param_4 + 0xfc) = 1;
        }
        if (*ptVar5 == (tagPGC_CMDTI)0x42) {
          *(undefined4 *)(param_4 + 0x10c) = 1;
        }
        lVar8 = _SfList_InsertList_16(*(undefined4 *)(param_4 + 0xf0),0xffffffff,ptVar5,1);
        if (lVar8 < 0) break;
        param_1 = param_1 + 1;
        ptVar5 = ptVar5 + 8;
      } while ((ushort)param_1 < *(ushort *)ptVar3);
    }
    param_1 = (tagPGCI_GI *)0x0;
    if (*(short *)(ptVar3 + 2) != 0) {
      do {
        if (*ptVar5 == (tagPGC_CMDTI)0x30) {
          *(undefined4 *)(param_4 + 0x100) = 1;
        }
        if (*ptVar5 == (tagPGC_CMDTI)0x42) {
          *(undefined4 *)(param_4 + 0x10c) = 1;
        }
        lVar8 = _SfList_InsertList_16(*(undefined4 *)(param_4 + 0xf4),0xffffffff,ptVar5,1);
        if (lVar8 < 0) break;
        param_1 = param_1 + 1;
        ptVar5 = ptVar5 + 8;
      } while ((ushort)param_1 < *(ushort *)(ptVar3 + 2));
    }
    param_1 = (tagPGCI_GI *)0x0;
    if (*(short *)(ptVar3 + 4) != 0) {
      do {
        if (*ptVar5 == (tagPGC_CMDTI)0x20) {
          *(undefined4 *)(param_4 + 0x108) = 1;
        }
        if (*ptVar5 == (tagPGC_CMDTI)0x30) {
          *(undefined4 *)(param_4 + 0x104) = 1;
        }
        if (*ptVar5 == (tagPGC_CMDTI)0x42) {
          *(undefined4 *)(param_4 + 0x10c) = 1;
        }
        lVar8 = _SfList_InsertList_16(*(undefined4 *)(param_4 + 0xf8),0xffffffff,ptVar5,1);
        if (lVar8 < 0) break;
        param_1 = param_1 + 1;
        ptVar5 = ptVar5 + 8;
      } while ((ushort)param_1 < *(ushort *)(ptVar3 + 4));
    }
  }
  if (*(ushort *)(ptVar2 + 0xe8) != 0) {
    ptVar6 = (tagC_PBI *)(ptVar2 + *(ushort *)(ptVar2 + 0xe8));
    param_1 = (tagPGCI_GI *)0x0;
    if (ptVar2[3] != (tagPGCI_GI)0x0) {
      do {
        SfCdiSwap_C_PBI(ptVar6);
        if ((((byte)*ptVar6 & 0x30) == 0x10) && (((byte)*ptVar6 & 0xc0) != 0x40)) {
          param_4[8] = (tagSFIFO_PGCI)((char)param_4[8] + '\x01');
        }
        lVar8 = _SfList_InsertList_16(*(undefined4 *)(param_4 + 0x114),0xffffffff,ptVar6,1);
        if (lVar8 < 0) break;
        ptVar6 = ptVar6 + 0x18;
        param_1 = param_1 + 1;
      } while ((ushort)param_1 < (ushort)(byte)ptVar2[3]);
    }
  }
  if (*(ushort *)(ptVar2 + 0xea) != 0) {
    ptVar7 = (tagC_POSI *)(ptVar2 + *(ushort *)(ptVar2 + 0xea));
    param_1 = (tagPGCI_GI *)0x0;
    if (ptVar2[3] != (tagPGCI_GI)0x0) {
      do {
        SfCdiSwap_C_POSI(ptVar7);
        lVar8 = _SfList_InsertList_16(*(undefined4 *)(param_4 + 0x118),0xffffffff,ptVar7,1);
        if (lVar8 < 0) break;
        ptVar7 = ptVar7 + 4;
        param_1 = param_1 + 1;
      } while ((ushort)param_1 < (ushort)(byte)ptVar2[3]);
    }
  }
  uVar1 = *(ushort *)(ptVar2 + 0xe6);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (ptVar2[2] != (tagPGCI_GI)0x0) {
      while (lVar8 = _SfList_InsertList_16
                               (*(undefined4 *)(param_4 + 0x110),(uint)uVar4,
                                ptVar2 + (uint)uVar4 + (uint)uVar1,1), -1 < lVar8) {
        uVar4 = uVar4 + 1;
        if ((byte)ptVar2[2] <= uVar4) {
          return lVar8;
        }
      }
    }
  }
  return lVar8;
}


