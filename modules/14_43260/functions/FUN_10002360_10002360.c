/* Module: 14_43260.dll
   Function: FUN_10002360
   Address: 10002360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10002360(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_88;
  undefined4 local_84 [10];
  undefined4 local_5c;
  ushort local_58 [2];
  undefined4 local_54 [15];
  ushort local_18 [10];
  
  iVar2 = (int)local_18 - (int)param_1;
  iVar5 = 10;
  do {
    *(ushort *)(param_1 + iVar2) = CONCAT11(*param_1,param_1[1]);
    param_1 = param_1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_10002680(local_18,&local_88);
  *param_2 = local_5c;
  puVar6 = local_84;
  puVar1 = param_2;
  for (iVar2 = 10; puVar1 = puVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  puVar1 = param_2 + 0xb;
  puVar3 = local_58;
  do {
    puVar4 = puVar3 + 8;
    *puVar1 = *(undefined4 *)puVar3;
    puVar1[1] = *(undefined4 *)(puVar3 + 4);
    puVar1[2] = *(undefined4 *)(puVar3 + 6);
    puVar1[3] = *(undefined4 *)(puVar3 + 2);
    puVar1 = puVar1 + 4;
    puVar3 = puVar4;
  } while (puVar4 < local_18);
  return;
}


