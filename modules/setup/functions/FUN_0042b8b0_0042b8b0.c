/* Module: Setup.exe
   Function: FUN_0042b8b0
   Address: 0042b8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_0042b8b0(void *this,char *param_1)

{
  uint uVar1;
  DWORD local_8;
  byte local_4 [4];
  
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  local_8 = 4;
  uVar1 = FUN_0042ad40(this,param_1,"2",(LPDWORD)&param_1,local_4,&local_8);
  return -1 < (int)uVar1;
}


