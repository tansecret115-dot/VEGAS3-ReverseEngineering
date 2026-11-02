/* Module: sfcd.cdd
   Function: FUN_004193d0
   Address: 004193d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004193d0(int param_1,int param_2,int param_3)

{
  int local_4;
  
  local_4 = 100;
  if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c0))
              (*(byte *)(param_2 + 0x16) & 0xf,*(undefined1 *)(param_2 + 0x20),
               *(undefined1 *)(param_2 + 0x21),0,&local_4);
  }
  return param_3 == local_4;
}


