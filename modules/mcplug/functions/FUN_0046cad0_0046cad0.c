/* Module: mcplug.dll
   Function: FUN_0046cad0
   Address: 0046cad0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_0046cad0(void *this,char *param_1)

{
  uint uVar1;
  DWORD local_8;
  byte local_4 [4];
  
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  local_8 = 4;
  uVar1 = FUN_0046bf60(this,param_1,"2",(LPDWORD)&param_1,local_4,&local_8);
  return -1 < (int)uVar1;
}


