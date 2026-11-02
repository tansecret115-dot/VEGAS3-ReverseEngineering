/* Module: vegas30.exe
   Function: FUN_005b5990
   Address: 005b5990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b5990(int param_1,undefined4 *param_2)

{
  undefined4 *lpBuffer;
  BOOL BVar1;
  
  lpBuffer = param_2;
  *param_2 = 0x5453494c;
  param_2[2] = 0x74696465;
  param_2[3] = 0x20746d66;
  param_2[4] = 0x98;
  param_2 = (undefined4 *)0x0;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x118),lpBuffer,0xac,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if ((BVar1 != 0) && (param_2 == (undefined4 *)0xac)) {
    return 0;
  }
  return 0x8004e009;
}


