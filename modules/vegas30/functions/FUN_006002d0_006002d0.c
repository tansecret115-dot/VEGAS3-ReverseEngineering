/* Module: vegas30.exe
   Function: FUN_006002d0
   Address: 006002d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_006002d0(void)

{
  int iVar1;
  undefined4 local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_c = 4;
  iVar1 = FUN_00603420(0,&DAT_0061a5ac,local_4,&local_8,&local_c);
  if (iVar1 < 0) {
    return false;
  }
  return local_8 == 1;
}


