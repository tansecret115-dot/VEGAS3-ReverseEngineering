/* Module: sftrkfx1.dll
   Function: FUN_5cba9ee0
   Address: 5cba9ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cba9ee0(int param_1,int param_2,int param_3,int param_4)

{
  POINT pt;
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  RECT local_10;
  
  local_10.left = param_3 + -7;
  local_10.right = param_3 + 7;
  uVar2 = 0;
  local_10.top = param_4 + -7;
  local_10.bottom = param_4 + 7;
  if (*(int *)(param_2 + 0x28) != 0) {
    iVar3 = param_2 + 0x30;
    do {
      FUN_5cba9850(param_1,param_2,iVar3,&param_3);
      pt.y = param_4;
      pt.x = param_3;
      BVar1 = PtInRect(&local_10,pt);
      if (BVar1 != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (uVar2 < *(uint *)(param_2 + 0x28));
  }
  return 0xffffffff;
}


