/* Module: sftrkfx1.dll
   Function: FUN_5cc01c50
   Address: 5cc01c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc01c50(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_3c [15];
  
  FUN_5cbfd7b0(param_1,local_3c + 6);
  FUN_5cbfd580((int)(local_3c + 6),param_1 + 0xc,local_3c);
  uVar4 = 0;
  do {
    uVar3 = uVar4 + 4;
    *(uint *)((int)local_3c + uVar4 + 0xc) =
         *(uint *)(param_1 + uVar4) ^ *(uint *)((int)local_3c + uVar4);
    uVar4 = uVar3;
  } while (uVar3 < 0xc);
  FUN_5cbfd310((int)(local_3c + 3),local_3c + 9);
  FUN_5cbfd270(local_3c + 9);
  if (*param_3 == 0) {
    uVar4 = 0;
    do {
      *(uint *)(uVar4 + param_2) =
           *(uint *)((int)local_3c + uVar4 + 0x24) ^ *(uint *)((int)local_3c + uVar4 + 0xc);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0xc);
  }
  else {
    uVar4 = 0;
    do {
      param_3 = param_3 + 1;
      *(uint *)(uVar4 + param_2) =
           *(uint *)((int)local_3c + uVar4 + 0x24) ^ *(uint *)((int)local_3c + uVar4 + 0xc) ^
           *param_3;
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0xc);
  }
  FUN_5cc01f50(local_3c);
  uVar4 = 0;
  do {
    *(uint *)((int)local_3c + uVar4) =
         *(uint *)((int)local_3c + uVar4) ^ *(uint *)((int)local_3c + uVar4 + 0xc);
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0xc);
  FUN_5cbfd580((int)local_3c,param_2,local_3c + 0xc);
  FUN_5cbfd310(param_1,local_3c + 6);
  FUN_5cbfd270(local_3c + 6);
  puVar5 = (uint *)(param_2 + 0xc);
  uVar4 = 0;
  do {
    iVar1 = uVar4 + 0x30;
    iVar2 = uVar4 + 0x18;
    uVar4 = uVar4 + 4;
    *puVar5 = *(uint *)((int)local_3c + iVar1) ^ *(uint *)((int)local_3c + iVar2);
    puVar5 = puVar5 + 1;
  } while (uVar4 < 0xc);
  return;
}


