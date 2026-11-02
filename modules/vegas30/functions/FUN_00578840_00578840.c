/* Module: vegas30.exe
   Function: FUN_00578840
   Address: 00578840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00578840(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  undefined1 local_28 [8];
  undefined1 auStack_20 [16];
  uint uStack_10;
  uint uStack_c;
  
  (**(code **)(*param_1 + 0x1c))(param_1,local_28);
  FUN_005786d0(&stack0xffffffd0,1,auStack_20);
  uVar1 = uStack_10;
  if (uStack_10 == 0) {
    uVar1 = FUN_005797f0(0);
  }
  if (uStack_c == 0) {
    uStack_c = FUN_00579650(0);
  }
  if ((uVar1 < unaff_retaddr) || (uVar2 = 1, unaff_retaddr < uStack_c)) {
    uVar2 = 0;
  }
  return uVar2;
}


