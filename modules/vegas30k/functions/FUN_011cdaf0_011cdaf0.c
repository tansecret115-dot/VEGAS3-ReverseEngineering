/* Module: vegas30k.dll
   Function: FUN_011cdaf0
   Address: 011cdaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_011cdaf0(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_14 = 0;
  local_10 = 0;
  if ((*(byte *)(param_1 + 0x24) & 6) == 0) {
    return 0;
  }
  local_c = 2;
  FUN_011cb5b0(*(undefined4 *)(param_1 + 0x2f4),&local_c,0xc,&local_14);
  return CONCAT44(local_10,local_14);
}


