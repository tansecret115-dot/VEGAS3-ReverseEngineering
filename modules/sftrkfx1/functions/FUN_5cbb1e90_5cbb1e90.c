/* Module: sftrkfx1.dll
   Function: FUN_5cbb1e90
   Address: 5cbb1e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5cbb1e90(int *param_1,int *param_2,int param_3,undefined4 param_4,HDC param_5,RECT *param_6)

{
  HBRUSH hbr;
  int iVar1;
  HDC hdc;
  uint uVar2;
  RECT local_10;
  
  hbr = GetStockObject(0);
  FillRect(param_5,param_6,hbr);
  if (*(int *)(param_3 + 0x28) == 0) {
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_3 + 0x1c);
    iVar1 = FUN_5cbb10d0(param_3,*(undefined8 *)(param_3 + 0x18));
    if (iVar1 == 0) {
      FUN_5cbb1260(param_5,(RECT *)(param_3 + 8),0xff);
      return 0;
    }
  }
  FUN_5cbb1b40(param_1,*param_2,(int *)param_2[1],1000);
  SetBkColor(param_5,0);
  uVar2 = 1;
  do {
    FUN_5cbb1df0(param_5,&param_6->left,uVar2,*(int *)(param_2[1] + uVar2 * 4),1000);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x3e9);
  hdc = CreateCompatibleDC((HDC)0x0);
  SelectObject(hdc,*(HGDIOBJ *)(param_3 + 0x28));
  BitBlt(param_5,param_6->left,param_6->top,*(int *)(param_3 + 0x20),*(int *)(param_3 + 0x24),hdc,0,
         0,0xee0086);
  DeleteDC(hdc);
  SetBkColor(param_5,0);
  local_10.left = param_6->left;
  local_10.right = param_6->right;
  local_10.top = (param_6->bottom + param_6->top) / 2;
  local_10.bottom = local_10.top + 1;
  ExtTextOutA(param_5,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return 1;
}


