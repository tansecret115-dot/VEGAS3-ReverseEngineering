/* Module: vegas30k.dll
   Function: FUN_011d2fd0
   Address: 011d2fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_011d2fd0(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x154) & 6) == 0) {
    return 0;
  }
  local_c = 2;
  FUN_011d18a0(*(undefined4 *)(param_1 + 0x3c),&local_c,0xc,&local_14);
  return CONCAT44(local_10,local_14);
}


