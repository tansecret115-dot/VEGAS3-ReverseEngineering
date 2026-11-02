/* Module: sfs4rw.dll
   Function: FUN_0043c360
   Address: 0043c360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0043c360(void *param_1)

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
      FUN_0043c2e0(param_1,(char *)((int)param_1 + 0x468),uVar2,local_104);
      bVar1 = FUN_0041d070((LPCSTR)local_104);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        FUN_0043c400(param_1,0xaaaaaaad,(uchar *)"ValidateMultiVolume",local_104);
        return 0x8004e00d;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)((int)param_1 + 0x898));
  }
  return 0;
}


