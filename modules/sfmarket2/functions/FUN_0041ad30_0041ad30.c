/* Module: sfmarket2.dll
   Function: FUN_0041ad30
   Address: 0041ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041ad30(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  DWORD local_114;
  int local_110 [3];
  byte local_104 [260];
  
  local_110[1] = 4;
  local_114 = 4;
  local_110[2] = 0x104;
  uVar1 = FUN_00418840(param_1,(char *)0x0,"11",&local_114,(byte *)local_110,
                       (LPDWORD)(local_110 + 1));
  if (-1 < (int)uVar1) {
    local_104[0] = 0;
    local_114 = 1;
    uVar1 = FUN_00418840(param_1,(char *)0x0,"10",&local_114,local_104,(LPDWORD)(local_110 + 2));
    if (-1 < (int)uVar1) {
      if (local_110[0] != 0) {
        FUN_0041ae00(param_1,local_104,param_2,param_3);
        return;
      }
      goto LAB_0041adaa;
    }
  }
  local_110[0] = 0;
LAB_0041adaa:
  FUN_0041ac10(param_1,param_2,param_3);
  return;
}


