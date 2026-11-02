/* Module: vidcap30.exe
   Function: FUN_00466380
   Address: 00466380
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00466380(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = (*param_1 ^ *param_2) & 0x7f ^ *param_2;
  *param_1 = bVar1;
  *param_1 = (*param_2 ^ bVar1) & 0x40 ^ bVar1;
  param_1[1] = (param_1[1] ^ param_2[1]) & 0x7f ^ param_2[1];
  param_1[2] = (param_1[2] ^ param_2[2]) & 0x7f ^ param_2[2];
  param_1[3] = (param_1[3] ^ param_2[3]) & 0x3f ^ param_2[3];
  return *(int *)param_1 == *(int *)param_2;
}


