/* Module: vegas30.exe
   Function: FUN_00418bc0
   Address: 00418bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418bc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  FUN_00418a40(param_1,&local_4,&param_1,&local_8);
  *(undefined4 *)(iVar2 + 500) = DAT_0064b320;
  uVar1 = DAT_0064b324;
  *(int *)(iVar2 + 0x208) = param_1;
  *(undefined4 *)(iVar2 + 0x1f8) = uVar1;
  *(undefined4 *)(iVar2 + 0x20c) = local_8;
  FUN_0043bc10(*(undefined4 *)(iVar2 + 0x1c8),0xcb,local_4,param_1,0);
  return;
}


