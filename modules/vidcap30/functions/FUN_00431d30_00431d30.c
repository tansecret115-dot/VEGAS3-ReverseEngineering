/* Module: vidcap30.exe
   Function: FUN_00431d30
   Address: 00431d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00431d30(HWND param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_2c [11];
  
  if ((param_1 != (HWND)0x0) && (param_2 != 0)) {
    piVar2 = local_2c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    local_2c[0] = 0x2c;
    local_2c[2] = param_2;
    local_2c[1] = 0x100;
    local_2c[3] = param_3;
    SendMessageA(param_1,0x405,0,(LPARAM)local_2c);
    return 1;
  }
  return 0;
}


