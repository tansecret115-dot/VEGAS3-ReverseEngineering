/* Module: vegas30.exe
   Function: FUN_004e9120
   Address: 004e9120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e9120(HMENU param_1)

{
  int iVar1;
  int iVar2;
  uint uFlags;
  undefined1 local_134 [128];
  CHAR local_b4 [180];
  
  FUN_005b8630(DAT_0064b138);
  FUN_005b42d0();
  iVar1 = FUN_005b51d0();
  if (iVar1 != 0) {
    FUN_005b7c00(0,local_134,0x80);
  }
  else {
    local_134[0] = 0;
  }
  uFlags = (uint)(iVar1 == 0);
  FUN_004e9ef0(local_b4,local_134,1);
  ModifyMenuA(param_1,0x9d08,uFlags,0x9d08,local_b4);
  EnableMenuItem(param_1,0xa1bb,uFlags);
  iVar2 = FUN_005b51d0();
  if (iVar2 != 0) {
    FUN_005b7c00(0,local_134,0x80);
  }
  else {
    local_134[0] = 0;
  }
  FUN_004e9ef0(local_b4,local_134,0);
  ModifyMenuA(param_1,0x9d09,(uint)(iVar2 == 0),0x9d09,local_b4);
  EnableMenuItem(param_1,0xa1bc,(uint)(iVar1 + iVar2 == 0));
  return;
}


