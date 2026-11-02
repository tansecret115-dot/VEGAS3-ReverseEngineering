/* Module: vegas30.exe
   Function: FUN_0057cfc0
   Address: 0057cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0057cfc0(int param_1,ushort param_2)

{
  short sVar1;
  uint local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 4);
  local_8 = (uint)param_2;
  sVar1 = FUN_0057d600(param_1 + 0x14,param_1 + 0xb0,1,9,0x502,&local_8);
  return -(uint)(sVar1 != 0) & 0x80004005;
}


