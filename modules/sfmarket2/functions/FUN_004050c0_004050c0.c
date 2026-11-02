/* Module: sfmarket2.dll
   Function: FUN_004050c0
   Address: 004050c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004050c0(int param_1)

{
  BOOL BVar1;
  uint uVar2;
  int *local_d54;
  uchar local_d50 [260];
  uchar local_c4c [260];
  uchar local_b48 [260];
  CHAR local_a44 [260];
  undefined4 local_940 [592];
  
  _mbscpy(local_c4c,(uchar *)(param_1 + 0x1d10));
  FUN_004203c0(local_c4c,0x104);
  GetTempPathA(0x104,local_a44);
  FUN_00424a60(local_d50,"%s%s");
  FUN_004203c0(local_d50,0x104);
  BVar1 = FUN_00421080(local_d50,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    FUN_00424a60(local_b48,"%s%s");
    uVar2 = FUN_0043bba0((LPCSTR)local_b48,2,&local_d54);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_0043b8b0(local_d54,(LPCSTR)local_d50);
      FUN_0043a1c0(local_d54);
      if (-1 < (int)uVar2) {
        return;
      }
    }
    FUN_004317f0(local_940);
    uVar2 = FUN_004318c0(local_940,(LPCSTR)local_b48,1,0);
    if (-1 < (int)uVar2) {
      FUN_00435d90(local_940,local_d50,0);
      FUN_00431a50(local_940);
    }
    FUN_00431890(local_940);
  }
  return;
}


