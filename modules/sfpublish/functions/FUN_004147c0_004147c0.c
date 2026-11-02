/* Module: sfpublish.dll
   Function: FUN_004147c0
   Address: 004147c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004147c0(undefined4 param_1,undefined4 param_2,HWND param_3)

{
  int iVar1;
  uint uVar2;
  
  SendMessageA(param_3,0xf0,0,0);
  uVar2 = 0x3f8;
  iVar1 = FUN_00401310();
  FUN_0041f590(iVar1,uVar2);
  return 0;
}


