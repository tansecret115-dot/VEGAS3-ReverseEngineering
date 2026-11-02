/* Module: vegas30.exe
   Function: FUN_0043fd30
   Address: 0043fd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043fd30(HSFCD__ *param_1,int param_2)

{
  _mediainfo local_2c [44];
  
  cdr_GetMediaInfo(param_1,local_2c);
  if (((byte)local_2c[0] & 1) == 0) {
    return 0x80004005;
  }
  if (((byte)local_2c[0] & 2) != 0) {
    return 0x8004e0ca;
  }
  if ((param_2 != 0) && (((byte)local_2c[0] & 4) != 0)) {
    return 0x8004e0ca;
  }
  return 0;
}


