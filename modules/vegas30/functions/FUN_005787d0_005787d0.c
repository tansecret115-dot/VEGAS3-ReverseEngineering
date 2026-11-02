/* Module: vegas30.exe
   Function: FUN_005787d0
   Address: 005787d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005787d0(int *param_1)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  undefined1 local_28 [8];
  undefined1 auStack_20 [16];
  int iStack_10;
  int iStack_c;
  
  (**(code **)(*param_1 + 0x1c))(param_1,local_28);
  FUN_005786d0(&stack0xffffffd0,1,auStack_20);
  if (iStack_10 == 0) {
    iStack_10 = FUN_005797f0(1);
  }
  if (iStack_c == 0) {
    iStack_c = FUN_00579650(1);
  }
  if (((uint)(iStack_10 << 10) < unaff_retaddr) ||
     (uVar1 = 1, unaff_retaddr < (uint)(iStack_c << 10))) {
    uVar1 = 0;
  }
  return uVar1;
}


