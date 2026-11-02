/* Module: vegas30.exe
   Function: FUN_00551c60
   Address: 00551c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00551c60(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_4;
  
  uVar1 = DAT_0064b138;
  local_4 = 0;
  FUN_005bad20(DAT_0064b138);
  FUN_005b83b0(uVar1,1);
  iVar2 = FUN_004e9f70(uVar1,0x21e,param_1);
  if (-1 < iVar2) {
    iVar2 = FUN_004eb0f0(uVar1,0x26,0);
    if (-1 < iVar2) {
      iVar2 = FUN_005ec8a0(param_1,&local_4,0,0);
      if (-1 < iVar2) {
        DAT_0064767c = DAT_0064767c | 0x100;
      }
      FUN_004ea040(uVar1,0);
    }
  }
  FUN_005b84d0(uVar1,1);
  return iVar2;
}


