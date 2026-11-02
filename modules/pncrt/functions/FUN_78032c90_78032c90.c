/* Module: pncrt.dll
   Function: FUN_78032c90
   Address: 78032c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78032c90(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_c [3];
  
  uVar2 = param_1[4];
  param_1[4] = uVar2 | 1;
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    param_1[4] = uVar2 & 0xffffffe5 | 5;
    puVar1 = (undefined4 *)FUN_780330f0(local_c,param_2,param_3);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar1 + 2);
    return;
  case 8:
  case 0x1f:
    param_1[4] = uVar2 & 0xfffffffe;
    return;
  case 9:
    break;
  case 10:
    param_1[4] = uVar2 & 0xffffffe9 | 9;
    *(undefined2 *)param_1 = **(undefined2 **)(param_2 + 0x14);
    return;
  case 0xb:
    param_1[4] = uVar2 & 0xffffffeb | 0xb;
    *param_1 = **(undefined4 **)(param_2 + 0x14);
    return;
  case 0xc:
    param_1[4] = uVar2 & 0xffffffed | 0xd;
    puVar1 = *(undefined4 **)(param_2 + 0x14);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    return;
  case 0xd:
    param_1[4] = uVar2 & 0xffffffe1 | 1;
    *param_1 = **(undefined4 **)(param_2 + 0x14);
    return;
  case 0xe:
    param_1[4] = uVar2 & 0xffffffe3 | 3;
    puVar1 = *(undefined4 **)(param_2 + 0x14);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    return;
  case 0xf:
    param_1[4] = uVar2 & 0xffffffe5 | 5;
    puVar1 = *(undefined4 **)(param_2 + 0x14);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar1 + 2);
    return;
  case 0x10:
    param_1[4] = uVar2 & 0xfffffff5 | 0x15;
    puVar1 = *(undefined4 **)(param_2 + 0x14);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar1 + 2);
    return;
  case 0x11:
    param_1[4] = uVar2 & 0xffffffe5 | 5;
    *param_1 = DAT_78042720;
    param_1[1] = DAT_78042724;
    *(undefined2 *)(param_1 + 2) = DAT_78042728;
    return;
  default:
    return;
  }
  param_1[4] = uVar2 & 0xfffffff7 | 0x17;
  uVar2 = *(uint *)(param_2 + 4) >> 8 & 5 | *(uint *)(param_2 + 4) >> 5 & 8;
  if (uVar2 == 0) {
    *param_1 = 1;
    return;
  }
  if (uVar2 == 1) {
    *param_1 = 2;
    return;
  }
  if (uVar2 == 0x100) {
    *param_1 = 0;
    return;
  }
  *param_1 = 3;
  return;
}


