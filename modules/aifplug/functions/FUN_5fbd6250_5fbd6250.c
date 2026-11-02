/* Module: aifplug.dll
   Function: FUN_5fbd6250
   Address: 5fbd6250
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbd6250(HANDLE param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  uint uVar2;
  LONG local_20 [2];
  int local_18;
  undefined2 local_14;
  DWORD DStack_12;
  undefined2 uStack_e;
  short local_c [6];
  
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  local_c[3] = 0;
  local_c[4] = 0;
  local_14 = *(undefined2 *)(param_2 + 2);
  uStack_e = *(undefined2 *)(param_2 + 0xe);
  uVar2 = *(ushort *)(param_2 + 0xc) * param_3;
  DStack_12 = param_3;
  FUN_5fbd63a0(*(uint *)(param_2 + 4),local_c);
  FUN_5fbdc320((undefined1 *)&local_14,1);
  FUN_5fbdc350((undefined1 *)&DStack_12,1);
  FUN_5fbdc320((undefined1 *)&uStack_e,1);
  FUN_5fbdc320((undefined1 *)local_c,5);
  local_20[0] = 0;
  SetFilePointer(param_1,0,local_20,0);
  param_2 = uVar2 + 0x2e;
  if ((uVar2 & 1) != 0) {
    param_2 = uVar2 + 0x2f;
  }
  uVar1 = FUN_5fbd6460(param_1,param_2,0x41494646);
  if (-1 < (int)uVar1) {
    local_18 = 0x12;
    local_20[1] = 0x434f4d4d;
    uVar1 = FUN_5fbdbdb0(param_1,local_20 + 1);
    if (-1 < (int)uVar1) {
      WriteFile(param_1,&local_14,0x12,&param_3,(LPOVERLAPPED)0x0);
      local_18 = uVar2 + 8;
      local_20[1] = 0x53534e44;
      uVar1 = FUN_5fbdbdb0(param_1,local_20 + 1);
      if (-1 < (int)uVar1) {
        param_2 = 0;
        WriteFile(param_1,&param_2,4,&param_3,(LPOVERLAPPED)0x0);
        WriteFile(param_1,&param_2,4,&param_3,(LPOVERLAPPED)0x0);
      }
    }
  }
  return uVar1;
}


