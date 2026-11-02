/* Module: vegas30.exe
   Function: FUN_00423de0
   Address: 00423de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423de0(HWND param_1,int param_2,HMENU param_3,int *param_4)

{
  LONG LVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  UINT uIDItem;
  int local_a4;
  tagPOINT local_9c;
  int local_94;
  int local_90;
  TPMPARAMS local_8c;
  tagPOINT local_78;
  uint local_70;
  int local_6c [2];
  CHAR local_64 [100];
  
  local_9c.x = *param_4;
  local_9c.y = param_4[1];
  uIDItem = 0;
  local_94 = param_4[2];
  local_90 = param_4[3];
  MapWindowPoints(param_1,(HWND)0x0,&local_9c,2);
  LVar1 = local_9c.x;
  iVar6 = 0;
  local_a4 = local_9c.x;
  local_70 = 0;
  iVar2 = GetMenuItemCount(param_3);
  pvVar3 = GetStockObject(0x11);
  if (0 < iVar2) {
    do {
      iVar4 = GetMenuStringA(param_3,uIDItem,local_64,100,0x400);
      _SfGetTextExtent_16(pvVar3,local_64,iVar4,local_6c);
      if (iVar6 < local_6c[0]) {
        iVar6 = local_6c[0];
      }
      uIDItem = uIDItem + 1;
    } while ((int)uIDItem < iVar2);
  }
  local_78.x = param_2;
  local_78.y = 0;
  MapWindowPoints(param_1,(HWND)0x0,&local_78,1);
  uVar5 = local_70;
  if (local_78.x < iVar6 + 0x37 + LVar1) {
    local_a4 = local_94;
    uVar5 = 8;
  }
  local_8c.cbSize = 0x14;
  local_8c.rcExclude.right = local_94;
  local_8c.rcExclude.left = local_9c.x;
  local_8c.rcExclude.bottom = local_90;
  local_8c.rcExclude.top = local_9c.y;
  TrackPopupMenuEx(param_3,uVar5 | 0x42,local_a4,local_90,param_1,&local_8c);
  return;
}


