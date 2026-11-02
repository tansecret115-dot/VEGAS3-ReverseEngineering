/* Module: vegas30.exe
   Function: FUN_0052a490
   Address: 0052a490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052a490(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_124 [6];
  undefined1 *local_10c;
  undefined1 local_104 [260];
  
  piVar2 = local_124;
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_10c = local_104;
  SendMessageA(*(HWND *)(param_1 + 0xb0),0x60a,param_3 << 0x10 | param_2 & 0xffff,(LPARAM)local_124)
  ;
  if (local_124[2] != 0) {
    return *(undefined4 *)(*(int *)(*(int *)(local_124[2] + 8) + local_124[3] * 4) + 0xc);
  }
  return 0;
}


