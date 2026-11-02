/* Module: vegas30.exe
   Function: FUN_00526d10
   Address: 00526d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00526d10(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_11c [4];
  CHAR local_10c [259];
  undefined1 local_9;
  uint local_8;
  
  puVar4 = local_11c;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = param_3[0x46];
  local_11c[0] = *param_3;
  local_11c[1] = param_3[1];
  local_11c[2] = param_3[2];
  local_11c[3] = param_3[3];
  lstrcpynA(local_10c,(LPCSTR)(param_3 + 4),0x104);
  local_9 = 0;
  uVar2 = local_8 | 0x80;
  if ((uVar1 & 2) != 0) {
    uVar2 = local_8 | 0x81;
  }
  local_8 = uVar2;
  iVar3 = FUN_00509a00(param_2,local_11c,0);
  *(undefined4 *)(param_1 + 0x100) = 1;
  FUN_00525460(param_1);
  return (-(uint)(iVar3 != 0) & 0x7ff8ffa9) + 0x80070057;
}


