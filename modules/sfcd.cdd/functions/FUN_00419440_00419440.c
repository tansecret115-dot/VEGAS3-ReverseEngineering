/* Module: sfcd.cdd
   Function: FUN_00419440
   Address: 00419440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419440(int param_1)

{
  undefined1 local_100 [256];
  
  if (*(code **)(param_1 + 0x1bc) != (code *)0x0) {
    (**(code **)(param_1 + 0x1bc))(param_1 + 100,local_100,0x100);
  }
  return 0;
}


