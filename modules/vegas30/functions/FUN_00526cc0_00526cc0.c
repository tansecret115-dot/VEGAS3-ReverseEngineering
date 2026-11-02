/* Module: vegas30.exe
   Function: FUN_00526cc0
   Address: 00526cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00526cc0(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 0:
  case 1:
    uVar1 = FUN_00526be0(param_1);
    return uVar1;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    return 0;
  default:
    return 0x80004001;
  }
}


