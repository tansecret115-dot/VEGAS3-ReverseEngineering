/* Module: sfppack3.dll
   Function: FUN_5cc798c0
   Address: 5cc798c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc798c0(void *param_1)

{
  int iVar1;
  uint uVar2;
  HKEY__ local_8;
  uint local_4;
  
  iVar1 = FUN_5cc80660((int *)&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  uVar2 = FUN_5cc79ef0(param_1,&local_8);
  if ((int)uVar2 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < (uint)local_8.unused) {
    return 0x8004e130;
  }
  FUN_5cc7a0f0(param_1,local_4 - local_8.unused);
  FUN_5cc79e90(param_1);
  return 0;
}


