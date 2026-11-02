/* Module: vegas30.exe
   Function: FUN_00505c10
   Address: 00505c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00505c10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 local_4;
  
  if (DAT_0064e50c != 0) {
    FUN_004043e0(DAT_0064763c,2);
    return;
  }
  DAT_0064e50c = 1;
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  local_4 = 0;
  iVar4 = param_3;
  pHVar3 = GetFocus();
  iVar4 = FUN_004211d0(DAT_00647624,uVar1,uVar2,param_1,param_2,99,param_4,pHVar3,iVar4,param_5);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 8) != 0)) {
    FUN_00403d90(*(int *)(iVar4 + 8),1,0,param_3,&local_4,0);
  }
  DAT_0064e50c = 0;
  return;
}


