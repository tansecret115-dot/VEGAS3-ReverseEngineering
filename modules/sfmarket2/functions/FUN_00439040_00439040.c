/* Module: sfmarket2.dll
   Function: FUN_00439040
   Address: 00439040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00439040(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  uchar local_104 [260];
  
  if (*(uint *)((int)param_1 + 0x898) < 2) {
    return 1;
  }
  uVar2 = 2;
  if (1 < *(uint *)((int)param_1 + 0x898)) {
    do {
      FUN_00438fc0(param_1,(char *)((int)param_1 + 0x468),uVar2,local_104);
      bVar1 = FUN_00420b70((LPCSTR)local_104);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        FUN_004390e0(param_1,0xaaaaaaad,(uchar *)"ValidateMultiVolume",local_104);
        return 0x8004e00d;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)((int)param_1 + 0x898));
  }
  return 0;
}


