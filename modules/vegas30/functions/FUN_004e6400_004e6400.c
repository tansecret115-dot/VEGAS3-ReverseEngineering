/* Module: vegas30.exe
   Function: FUN_004e6400
   Address: 004e6400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6400(int param_1,HDC param_2,int param_3,int param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  HDC hdc;
  HRGN hrgn;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  hdc = param_2;
  iVar3 = param_1;
  local_14 = *(int *)(param_1 + 0xe74);
  iVar4 = param_1 + 0xe20;
  iVar7 = param_4 - param_3;
  iVar6 = 0x8000 >> ((byte)((int)(*(uint *)(param_1 + 0x678) + 1) / 2) & 0x1f);
  if ((*(uint *)(param_1 + 0x678) & 1) != 0) {
    iVar6 = iVar6 + iVar6 / 2;
  }
  iVar5 = *(int *)(param_1 + 0xe3c);
  iVar2 = *(int *)(param_1 + 0xe40);
  if (iVar5 < iVar2) {
    if (iVar5 < param_3) {
      param_3 = iVar2 + -1;
    }
    if (param_4 < iVar2) {
      param_4 = iVar5;
    }
  }
  PatBlt(param_2,param_3,0,iVar7,*(int *)(param_1 + 0xe34),0xff0062);
  SetBkColor(param_2,0);
  iVar7 = *(int *)(param_1 + 0xe34) / *(int *)(param_1 + 0xe6c);
  param_1 = 1;
  iVar5 = iVar7 / 2;
  if (0 < iVar6 / iVar5) {
    param_1 = iVar6 / iVar5;
  }
  if ((2 < iVar7) && (param_2 = (HDC)0x0, iVar6 = 0, 0 < *(int *)(iVar3 + 0xe6c))) {
    do {
      hrgn = CreateRectRgn(0,iVar6,*(int *)(iVar3 + 0xe30),iVar7 + iVar6);
      SelectClipRgn(hdc,hrgn);
      DeleteObject(hrgn);
      dVar1 = *(double *)(iVar3 + 0xe60);
      if (dVar1 <= _DAT_006106d0) {
        uStack_4 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_8 = SUB84(dVar1,0);
        FUN_004e67e0(hdc,local_14,*(undefined4 *)(iVar3 + 0xe6c),local_8,uStack_4,iVar5,param_1,0,
                     param_3,param_4);
      }
      else {
        FUN_004e65e0(hdc,iVar4,param_2,iVar5,param_1,0,param_3,param_4);
      }
      SelectClipRgn(hdc,(HRGN)0x0);
      iVar5 = iVar5 + iVar7;
      param_2 = (HDC)((int)param_2 + 1);
      local_14 = local_14 + 4;
      iVar6 = iVar7 + iVar6;
    } while ((int)param_2 < *(int *)(iVar3 + 0xe6c));
  }
  iVar4 = *(int *)(iVar3 + 0xe3c);
  if (param_3 <= *(int *)(iVar3 + 0xe3c)) {
    iVar4 = param_3;
  }
  *(int *)(iVar3 + 0xe3c) = iVar4;
  if (*(int *)(iVar3 + 0xe40) <= param_4) {
    *(int *)(iVar3 + 0xe40) = param_4;
    *(undefined4 *)(iVar3 + 0xe44) = 0;
    return;
  }
  *(int *)(iVar3 + 0xe40) = *(int *)(iVar3 + 0xe40);
  *(undefined4 *)(iVar3 + 0xe44) = 0;
  return;
}


