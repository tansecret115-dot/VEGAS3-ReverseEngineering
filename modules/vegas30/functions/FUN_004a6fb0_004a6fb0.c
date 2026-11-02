/* Module: vegas30.exe
   Function: FUN_004a6fb0
   Address: 004a6fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a7047) */

void FUN_004a6fb0(int param_1,HMENU param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  UINT_PTR uIDNewItem;
  LPCSTR lpNewItem;
  int iVar4;
  longlong lVar5;
  
  iVar3 = param_1;
  lVar5 = ftol();
  plVar1 = (longlong *)(param_1 + 0xb88);
  param_1 = 0;
  lVar5 = (lVar5 - *(longlong *)(param_3 + 0x18)) + *plVar1;
  iVar4 = (int)((ulonglong)lVar5 >> 0x20);
  if (((lVar5 < 0) || (*(int *)(param_3 + 0x7c) < iVar4)) ||
     ((*(int *)(param_3 + 0x7c) <= iVar4 && (*(uint *)(param_3 + 0x78) < (uint)lVar5)))) {
    iVar2 = *(int *)(param_3 + 0x24);
    if (((CONCAT44((iVar2 - *(int *)(param_3 + 0x84)) -
                   (uint)(*(uint *)(param_3 + 0x20) < *(uint *)(param_3 + 0x80)),
                   *(uint *)(param_3 + 0x20) - *(uint *)(param_3 + 0x80)) <= lVar5) &&
        (iVar4 <= iVar2)) && ((iVar4 < iVar2 || ((uint)lVar5 <= *(uint *)(param_3 + 0x20))))) {
      param_1 = 3;
    }
  }
  else {
    param_1 = 1;
  }
  uIDNewItem = FUN_004765b0(iVar3,param_3,lVar5,param_1,param_5);
  if (uIDNewItem != 0) {
    lpNewItem = (LPCSTR)_SfGetString_8(DAT_00647204,0x4ff6);
    InsertMenuA(param_2,0,0x410,uIDNewItem,lpNewItem);
    return;
  }
  *param_5 = 0;
  return;
}


