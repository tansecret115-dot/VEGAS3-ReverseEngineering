/* Module: vegas30.exe
   Function: FUN_005ffe20
   Address: 005ffe20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ffe20(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  uint local_4;
  
  FUN_00606b80(&local_8);
  iVar1 = FUN_005ffe80(&local_4);
  if (iVar1 < 0) {
    return 0x80070005;
  }
  if (local_8 < local_4) {
    return 0;
  }
  uVar2 = FUN_00603590(0,&DAT_006312b4,4,&local_8,4,1,1);
  return uVar2;
}


