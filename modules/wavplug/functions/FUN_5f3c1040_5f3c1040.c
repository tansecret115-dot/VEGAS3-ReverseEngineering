/* Module: wavplug.dll
   Function: FUN_5f3c1040
   Address: 5f3c1040
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_5f3c1040(void *this,char *param_1)

{
  uint uVar1;
  DWORD local_8;
  byte local_4 [4];
  
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  local_8 = 4;
  uVar1 = FUN_5f3c04d0(this,param_1,"2",(LPDWORD)&param_1,local_4,&local_8);
  return -1 < (int)uVar1;
}


