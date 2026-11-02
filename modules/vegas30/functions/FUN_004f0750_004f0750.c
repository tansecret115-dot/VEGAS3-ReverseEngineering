/* Module: vegas30.exe
   Function: FUN_004f0750
   Address: 004f0750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f0750(char *param_1)

{
  ulong uVar1;
  
  uVar1 = strtoul(param_1,(char **)0x0,0x10);
  if (uVar1 == 0x411) {
    DAT_0064dd20 = 1;
  }
  return;
}


