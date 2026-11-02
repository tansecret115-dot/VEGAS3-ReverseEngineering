/* Module: mcplugrw.dll
   Function: FUN_00416df0
   Address: 00416df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416df0(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  DWORD local_114;
  int local_110 [3];
  byte local_104 [260];
  
  local_110[1] = 4;
  local_114 = 4;
  local_110[2] = 0x104;
  uVar1 = FUN_00414900(param_1,(char *)0x0,"11",&local_114,(byte *)local_110,
                       (LPDWORD)(local_110 + 1));
  if (-1 < (int)uVar1) {
    local_104[0] = 0;
    local_114 = 1;
    uVar1 = FUN_00414900(param_1,(char *)0x0,"10",&local_114,local_104,(LPDWORD)(local_110 + 2));
    if (-1 < (int)uVar1) {
      if (local_110[0] != 0) {
        FUN_00416ec0(param_1,local_104,param_2,param_3);
        return;
      }
      goto LAB_00416e6a;
    }
  }
  local_110[0] = 0;
LAB_00416e6a:
  FUN_00416cd0(param_1,param_2,param_3);
  return;
}


