/* Module: vidcap30.exe
   Function: FUN_0056f4f0
   Address: 0056f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0056f4f0(void)

{
  int iVar1;
  undefined4 local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_c = 4;
  iVar1 = FUN_00572640(0,&DAT_005a3870,local_4,&local_8,&local_c);
  if (iVar1 < 0) {
    return false;
  }
  return local_8 == 1;
}


