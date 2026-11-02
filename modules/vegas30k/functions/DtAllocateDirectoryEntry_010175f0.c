/* Module: vegas30k.dll
   Function: DtAllocateDirectoryEntry
   Address: 010175f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtAllocateDirectoryEntry(struct tagDIR_TREE *,struct tagDIR_ENTRY *,char const
   *,char const *,char const *,unsigned __int64,unsigned __int64,unsigned long,int,struct
   tagDIR_ENTRY * *) */

long DtAllocateDirectoryEntry
               (tagDIR_TREE *param_1,tagDIR_ENTRY *param_2,char *param_3,char *param_4,char *param_5
               ,__uint64 param_6,__uint64 param_7,ulong param_8,int param_9,tagDIR_ENTRY **param_10)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  tagDIR_ENTRY *ptVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  int in_stack_00000018;
  tagDIR_ENTRY *local_204;
  undefined1 local_200 [512];
  
                    /* 0x175f0  40
                       ?DtAllocateDirectoryEntry@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@PBD22_K3KHPAPAU2@@Z
                        */
  FUN_01016830(param_1,0);
  if (param_2 == (tagDIR_ENTRY *)0x0) {
    ptVar4 = calloc(1,0x358);
    if (ptVar4 != (tagDIR_ENTRY *)0x0) {
      local_204 = (tagDIR_ENTRY *)0xffffffff;
LAB_0101768b:
      *(undefined4 *)ptVar4 = 0xfacefeed;
      *(undefined4 *)(ptVar4 + 4) = 0x358;
      *(undefined4 *)(ptVar4 + 8) = param_7._4_4_;
      *(tagDIR_ENTRY **)(ptVar4 + 0x21c) = param_2;
      *(tagDIR_ENTRY **)(ptVar4 + 0x220) = local_204;
      if (param_3 != (char *)0x0) {
        _mbscpy((uchar *)(ptVar4 + 0xc),(uchar *)param_3);
      }
      _mbscpy((uchar *)(ptVar4 + 0x110),(uchar *)param_4);
      if ((param_7 & 0x1000000000) == 0) {
        if (param_5 != (char *)0x0) {
          _mbscpy((uchar *)(ptVar4 + 0x224),(uchar *)param_5);
        }
        *(undefined4 *)(ptVar4 + 0x330) = param_6._4_4_;
        *(undefined4 *)(ptVar4 + 0x334) = (undefined4)param_7;
        if ((in_stack_00000018 != 0) || ((int)param_6 != 0)) {
          *(int *)(ptVar4 + 0x328) = in_stack_00000018;
          *(int *)(ptVar4 + 0x32c) = (int)param_6;
          *(uint *)(ptVar4 + 0x218) = *(uint *)(ptVar4 + 0x218) | 1;
        }
        uVar2 = *(uint *)(param_1 + 0x18);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        uVar3 = *(uint *)(ptVar4 + 0x330);
        iVar7 = *(int *)(ptVar4 + 0x334);
        *(uint *)(param_1 + 0x18) = uVar2 + uVar3;
        *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar7 + (uint)CARRY4(uVar2,uVar3);
        lVar5 = FUN_01016980(param_1,ptVar4);
        if (lVar5 < 0) goto LAB_0101785e;
      }
      else {
        lVar5 = _SfList_CreateExZ_32(ptVar4 + 0x214,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
        if (lVar5 < 0) {
LAB_0101785e:
          uVar6 = _SfGetString2_8(DAT_0120e5c8,0x1083);
          SfPrintF(local_200,uVar6);
          FUN_01016830(param_1,local_200);
          goto LAB_01017888;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      if ((*(uint *)(param_1 + 8) & 1) == 0) {
        lVar5 = DtPrepareDirEntry(param_1,ptVar4);
        if (lVar5 < 0) goto LAB_0101788c;
      }
      if ((param_8 != 0) && (*(int *)(ptVar4 + 0x21c) != 0)) {
        lVar5 = DtSortDirEntry(param_1,param_2);
      }
      goto LAB_01017888;
    }
LAB_0101782d:
    uVar6 = _SfGetString2_8(DAT_0120e5c8,0x1083);
    SfPrintF(local_200,uVar6);
    FUN_01016830(param_1,local_200);
    lVar5 = -0x7ff8fff2;
  }
  else {
    lVar5 = _SfList_AllocAndInsertItem_20
                      (*(undefined4 *)(param_2 + 0x214),0,0x358,0xffffffff,&local_204);
    if (-1 < lVar5) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar1;
      }
      if (((int)local_204 < 0) || (iVar7 + -1 < (int)local_204)) {
        ptVar4 = (tagDIR_ENTRY *)0x0;
      }
      else {
        ptVar4 = *(tagDIR_ENTRY **)(piVar1[2] + (int)local_204 * 4);
      }
      if (ptVar4 == (tagDIR_ENTRY *)0x0) goto LAB_0101782d;
      goto LAB_0101768b;
    }
    uVar6 = _SfGetString2_8(DAT_0120e5c8,0x1083);
    SfPrintF(local_200,uVar6);
    FUN_01016830(param_1,local_200);
    ptVar4 = local_204;
LAB_01017888:
    if (-1 < lVar5) goto LAB_01017895;
  }
LAB_0101788c:
  FUN_010179a0(param_1,ptVar4);
  ptVar4 = (tagDIR_ENTRY *)0x0;
LAB_01017895:
  if (param_9 != 0) {
    *(tagDIR_ENTRY **)param_9 = ptVar4;
  }
  return lVar5;
}


