/* Module: vegas30.exe
   Function: FUN_005fba80
   Address: 005fba80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005fba80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,WPARAM param_4,LPARAM param_5
            )

{
  uint *puVar1;
  DWORD DVar2;
  
  DVar2 = GetCurrentThreadId();
  if (DVar2 != DAT_00647208) {
    DAT_0065e550 = 1;
    PostMessageA(DAT_00647624,0x616,param_4,param_5);
    return 0;
  }
  if (param_1[1] != 0) {
    FUN_004585d0(param_1[1]);
  }
  FUN_00573350(param_2,param_3,0,0);
  FUN_004e8800();
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    puVar1 = *(uint **)*param_1;
    *puVar1 = *puVar1 | 0x40000;
  }
  return 0;
}


