/* Module: vegas30.exe
   Function: FUN_0057d010
   Address: 0057d010
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0057d010(int param_1)

{
  short sVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 4);
  local_8 = 0xff;
  sVar1 = FUN_0057d600(param_1 + 0x14,param_1 + 0xb0,1,9,0x501,&local_8);
  return -(uint)(sVar1 != 0) & 0x80004005;
}


