/* Module: sfppack1.dll
   Function: FUN_5ce0e790
   Address: 5ce0e790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0e790(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint local_3c [15];
  
  FUN_5ce0a300(param_1,local_3c + 6);
  FUN_5ce0a0d0((int)(local_3c + 6),param_1 + 0xc,local_3c);
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 4;
    *(uint *)((int)local_3c + iVar3 + 0xc) =
         *(uint *)(param_1 + iVar3) ^ *(uint *)((int)local_3c + iVar3);
    iVar3 = iVar2;
  } while (iVar2 < 0xc);
  FUN_5ce09e60((int)(local_3c + 3),local_3c + 9);
  FUN_5ce09dc0(local_3c + 9);
  if (*param_3 == 0) {
    iVar3 = 0;
    do {
      *(uint *)(iVar3 + param_2) =
           *(uint *)((int)local_3c + iVar3 + 0x24) ^ *(uint *)((int)local_3c + iVar3 + 0xc);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0xc);
  }
  else {
    iVar3 = 0;
    do {
      param_3 = param_3 + 1;
      *(uint *)(iVar3 + param_2) =
           *(uint *)((int)local_3c + iVar3 + 0x24) ^ *(uint *)((int)local_3c + iVar3 + 0xc) ^
           *param_3;
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0xc);
  }
  FUN_5ce0ea90(local_3c);
  iVar3 = 0;
  do {
    *(uint *)((int)local_3c + iVar3) =
         *(uint *)((int)local_3c + iVar3) ^ *(uint *)((int)local_3c + iVar3 + 0xc);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0xc);
  FUN_5ce0a0d0((int)local_3c,param_2,local_3c + 0xc);
  FUN_5ce09e60(param_1,local_3c + 6);
  FUN_5ce09dc0(local_3c + 6);
  puVar4 = (uint *)(param_2 + 0xc);
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 0x30;
    iVar1 = iVar3 + 0x18;
    iVar3 = iVar3 + 4;
    *puVar4 = *(uint *)((int)local_3c + iVar2) ^ *(uint *)((int)local_3c + iVar1);
    puVar4 = puVar4 + 1;
  } while (iVar3 < 0xc);
  return;
}


