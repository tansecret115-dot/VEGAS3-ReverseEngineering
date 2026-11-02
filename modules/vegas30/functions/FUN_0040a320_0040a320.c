/* Module: vegas30.exe
   Function: FUN_0040a320
   Address: 0040a320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a320(int param_1)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
  OleLockRunning(*(LPUNKNOWN *)(param_1 + 0x2c),1,0);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffff7;
  (**(code **)**(undefined4 **)(param_1 + 0x2c))
            (*(undefined4 **)(param_1 + 0x2c),&DAT_00633698,param_1 + 0x3c);
  return 0;
}


