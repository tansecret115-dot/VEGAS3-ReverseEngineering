/* Module: vegas30.exe
   Function: SfImageList_BltToDibSection
   Address: 00549380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfImageList_BltToDibSection(struct tSFIMAGELIST const *,long,long,struct
   tSFDIBSECTION const *,long,long,struct tagRECT *,float) */

long SfImageList_BltToDibSection
               (tSFIMAGELIST *param_1,long param_2,long param_3,tSFDIBSECTION *param_4,long param_5,
               long param_6,tagRECT *param_7,float param_8)

{
  ushort uVar1;
  int *piVar2;
  HGDIOBJ h;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  long local_c;
  int local_8;
  int local_4;
  
                    /* 0x149380  22
                       ?SfImageList_BltToDibSection@@YGJPBUtSFIMAGELIST@@JJPBUtSFDIBSECTION@@JJPAUtagRECT@@M@Z
                        */
  local_8 = *(int *)param_1;
  local_20 = local_8 * param_2;
  local_4 = *(int *)(param_1 + 4);
  local_1c = local_4 * param_3;
  local_18 = (param_2 + 1) * local_8;
  local_14 = (param_3 + 1) * local_4;
  local_10 = param_5;
  local_8 = local_8 + param_5;
  local_c = param_6;
  local_4 = local_4 + param_6;
  local_24 = 0;
  local_30 = 0x10;
  local_2c = 4;
  local_28 = param_8;
  h = SelectObject(*(HDC *)(param_4 + 0x42c),*(HGDIOBJ *)(param_4 + 0x428));
  piVar2 = *(int **)(param_1 + 0x444);
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00549453;
    iVar5 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar2[4] == 3) {
      piVar4 = piVar2 + 0xd;
      goto LAB_0054945d;
    }
LAB_00549453:
    iVar5 = piVar2[8];
  }
  piVar4 = (int *)(*piVar2 + iVar5 * 4 + (int)piVar2);
LAB_0054945d:
  lVar3 = _SfDibComposite_40(param_4,*(undefined4 *)(param_4 + 0x430),&local_10,0,piVar2,piVar4,
                             &local_20,0,&local_30,3);
  SelectObject(*(HDC *)(param_4 + 0x42c),h);
  return lVar3;
}


