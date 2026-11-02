/* Module: vegas30.exe
   Function: FUN_005ff0a0
   Address: 005ff0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005ff0a0(int param_1,LPCSTR param_2,undefined4 *param_3)

{
  LPCSTR pCVar1;
  undefined4 *puVar2;
  int iVar3;
  uint3 local_4;
  undefined1 uStack_1;
  
  _local_4 = param_1;
  puVar2 = (undefined4 *)FUN_0040bfa0(0x30);
  pCVar1 = param_2;
  if (puVar2 == (undefined4 *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x30);
  lstrcpynA((LPSTR)&local_4,param_2,3);
  local_4 = (uint3)(ushort)local_4;
  iVar3 = FUN_00607be0(&local_4,0);
  if (iVar3 == *(int *)(param_1 + 0x30)) {
    iVar3 = FUN_005ff260(pCVar1,1,1,0,puVar2);
    if (-1 < iVar3) {
      iVar3 = FUN_005ff350(1,0,puVar2);
      if (-1 < iVar3) goto LAB_005ff1b7;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar3 = FUN_005ff260(pCVar1,0,1,0,puVar2);
      if (-1 < iVar3) {
        iVar3 = FUN_005ff350(1,0,puVar2);
        if (-1 < iVar3) goto LAB_005ff1b7;
      }
    }
    FUN_005fee70(&param_2,3);
    iVar3 = FUN_005ff260(pCVar1,1,1,&param_2,puVar2);
    if (-1 < iVar3) {
      iVar3 = FUN_005ff350(1,&param_2,puVar2);
      if (-1 < iVar3) {
        puVar2[0xb] = 1;
        *param_3 = puVar2;
        return iVar3;
      }
    }
  }
  else {
    iVar3 = -0x7ffb1ecd;
  }
  FUN_0040bfc0(puVar2);
  puVar2 = (undefined4 *)0x0;
LAB_005ff1b7:
  *param_3 = puVar2;
  return iVar3;
}


