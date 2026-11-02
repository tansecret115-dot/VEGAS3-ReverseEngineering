/* Module: vegas30.exe
   Function: FUN_0042f020
   Address: 0042f020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f020(undefined4 param_1,HMENU param_2)

{
  uint uVar1;
  
  uVar1 = DAT_00648690;
  CheckMenuItem(param_2,0xa280,DAT_00648690 >> 0x1a & 8);
  CheckMenuItem(param_2,0xa281,uVar1 >> 0x1b & 8);
  uVar1 = DAT_0064869c;
  CheckMenuItem(param_2,0xa287,(DAT_0064869c & 1) << 3);
  CheckMenuItem(param_2,0xa286,(uVar1 & 2) << 2);
  uVar1 = DAT_00648694;
  CheckMenuItem(param_2,0xa284,(DAT_00648694 & 2) << 2);
  CheckMenuItem(param_2,0xa282,uVar1 & 8);
  CheckMenuItem(param_2,0xa283,(uVar1 & 4) << 1);
  return;
}


