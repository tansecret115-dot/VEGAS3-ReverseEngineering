/* Module: vegas30.exe
   Function: FUN_00421e10
   Address: 00421e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 local_4;
  
  if (DAT_0064bb04 != 0) {
    FUN_004043e0(DAT_0064763c,2);
    return;
  }
  DAT_0064bb04 = 1;
  uVar1 = *(undefined4 *)(param_5 + 8);
  uVar2 = *(undefined4 *)(param_5 + 0xc);
  local_4 = 0;
  iVar4 = param_5;
  pHVar3 = GetFocus();
  iVar4 = FUN_00421c30(DAT_00647624,uVar1,uVar2,param_1,param_2,param_3,param_4,param_6,pHVar3,iVar4
                       ,param_7);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 8) != 0)) {
    FUN_00403d90(*(int *)(iVar4 + 8),1,0,param_5,&local_4,0);
  }
  DAT_0064bb04 = 0;
  return;
}


