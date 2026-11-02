/* Module: vegas30k.dll
   Function: FUN_010fe270
   Address: 010fe270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010fe270(int param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0x4c:
  case 0x4d:
    return 0;
  case 0x4e:
    iVar1 = GetSystemMetrics(0);
    return iVar1;
  case 0x4f:
    param_1 = 1;
    break;
  case 0x50:
  case 0x51:
    return 1;
  }
  iVar1 = GetSystemMetrics(param_1);
  return iVar1;
}


