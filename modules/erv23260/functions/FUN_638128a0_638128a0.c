/* Module: erv23260.dll
   Function: FUN_638128a0
   Address: 638128a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_638128a0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
  case 1:
    return *(int *)(param_1 + 0x510);
  default:
    return param_1;
  case 3:
    return *(int *)(param_1 + 0x514);
  case 4:
    return *(int *)(param_1 + 0x51c);
  case 5:
    return *(int *)(param_1 + 0x518);
  }
}


