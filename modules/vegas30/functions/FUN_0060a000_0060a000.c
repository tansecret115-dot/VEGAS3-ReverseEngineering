/* Module: vegas30.exe
   Function: FUN_0060a000
   Address: 0060a000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 FUN_0060a000(DWORD param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  short sVar1;
  int iVar2;
  undefined1 local_3c [10];
  undefined2 local_32;
  undefined2 local_2c;
  DWORD local_24;
  int local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  sVar1 = FUN_00609e10(local_3c);
  if (sVar1 != 0) {
    return 0xffdd;
  }
  local_32 = 0x4103;
  if (param_1 == 0) {
    param_1 = GetCurrentProcessId();
  }
  local_24 = param_1;
  iVar2 = FUN_00609ce0(local_3c);
  if (iVar2 != 0) {
    return local_2c;
  }
  if (local_1c == 0) {
    return 0xd8dc;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_18;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_1c;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  return 0;
}


