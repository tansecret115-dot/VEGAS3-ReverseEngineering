/* Module: sfnetmedia.dll
   Function: FUN_004097d0
   Address: 004097d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004097d0(int param_1)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
  OleLockRunning(*(LPUNKNOWN *)(param_1 + 0x2c),1,0);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffff7;
  (**(code **)**(undefined4 **)(param_1 + 0x2c))
            (*(undefined4 **)(param_1 + 0x2c),&DAT_0043c8f0,param_1 + 0x3c);
  return 0;
}


