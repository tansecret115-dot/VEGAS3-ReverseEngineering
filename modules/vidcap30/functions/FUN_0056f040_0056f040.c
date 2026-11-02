/* Module: vidcap30.exe
   Function: FUN_0056f040
   Address: 0056f040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0056f040(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  uint local_4;
  
  FUN_005760d0(&local_8);
  iVar1 = FUN_0056f0a0(&local_4);
  if (iVar1 < 0) {
    return 0x80070005;
  }
  if (local_8 < local_4) {
    return 0;
  }
  uVar2 = FUN_005727b0(0,&DAT_005a3864,4,&local_8,4,1,1);
  return uVar2;
}


