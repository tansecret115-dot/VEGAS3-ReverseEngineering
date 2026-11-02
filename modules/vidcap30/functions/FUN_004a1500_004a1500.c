/* Module: vidcap30.exe
   Function: FUN_004a1500
   Address: 004a1500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a1500(uint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  switch(*(undefined4 *)param_1[3]) {
  case 1:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xe:
    if ((*param_1 & 0x10000) != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


