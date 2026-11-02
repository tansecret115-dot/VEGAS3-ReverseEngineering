/* Module: vegas30.exe
   Function: FUN_00480790
   Address: 00480790
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00480790(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  POINT pt;
  LONG LVar2;
  BOOL BVar3;
  RECT local_10;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x218) + 0x1c);
  if ((iVar1 < 1) && ((iVar1 < 0 || (*(int *)(*(int *)(param_2 + 0x218) + 0x18) == 0)))) {
    return false;
  }
  local_10.left = param_3 + -8;
  local_10.right = param_3 + 3;
  local_10.top = param_4 + -1;
  local_10.bottom = param_4 + 8;
  LVar2 = FUN_0047f900(param_1,param_2,*(undefined4 *)(param_2 + 0x40),
                       *(undefined4 *)(param_2 + 0x44));
  pt.y = *(int *)(*(int *)(param_2 + 0x218) + 0x2c) + -1;
  pt.x = LVar2;
  BVar3 = PtInRect(&local_10,pt);
  return BVar3 != 0;
}


