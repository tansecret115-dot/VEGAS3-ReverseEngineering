/* Module: vegas30.exe
   Function: FUN_00468820
   Address: 00468820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468820(HDC param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  code *pcVar2;
  RECT local_10;
  
  pcVar2 = ExtTextOutA_exref;
  local_10.right = *param_3;
  local_10.left = *param_2;
  if (local_10.left < local_10.right) {
    local_10.top = param_3[1];
    local_10.bottom = param_3[3];
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  local_10.right = param_2[2];
  local_10.left = param_3[2];
  if (local_10.left < local_10.right) {
    local_10.top = param_3[1];
    local_10.bottom = param_3[3];
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  pcVar1 = ExtTextOutA_exref;
  local_10.bottom = param_2[3];
  local_10.top = param_3[3];
  if (local_10.top < local_10.bottom) {
    local_10.left = *param_2;
    local_10.right = param_2[2];
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    pcVar2 = pcVar1;
  }
  local_10.top = param_2[1];
  local_10.bottom = param_3[1];
  if (local_10.top < local_10.bottom) {
    local_10.left = *param_2;
    local_10.right = param_2[2];
    (*pcVar2)(param_1,0,0,2,&local_10,0,0,0);
  }
  return;
}


