/* Module: erv33260.dll
   Function: FUN_6707d2e0
   Address: 6707d2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6707d2e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  
  puVar8 = (undefined4 *)(param_1 + (param_3 + -1) * param_4);
  iVar4 = param_2;
  do {
    uVar1 = *puVar8;
    uVar6 = puVar8[1];
    iVar2 = param_5;
    puVar10 = puVar8;
    do {
      *(undefined4 *)(param_4 + (int)puVar10) = uVar1;
      *(undefined4 *)(param_4 + 4 + (int)puVar10) = uVar6;
      puVar10 = (undefined4 *)((int)puVar10 + param_4);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar8 = puVar8 + 2;
    iVar4 = iVar4 + -8;
  } while (iVar4 != 0);
  iVar4 = param_3 + param_5;
  puVar10 = puVar10 + 2;
  puVar9 = (undefined1 *)((int)puVar10 - param_2);
  do {
    uVar5 = CONCAT11(*(undefined1 *)((int)puVar10 + -1),*(undefined1 *)((int)puVar10 + -1));
    uVar1 = CONCAT22(CONCAT11(*puVar9,*puVar9),CONCAT11(*puVar9,*puVar9));
    uVar6 = CONCAT22(uVar5,uVar5);
    iVar2 = param_5;
    puVar8 = puVar10;
    puVar7 = puVar9;
    do {
      *(undefined4 *)(puVar7 + -4) = uVar1;
      *(undefined4 *)(puVar7 + -8) = uVar1;
      *puVar8 = uVar6;
      puVar8[1] = uVar6;
      puVar7 = puVar7 + -8;
      puVar8 = puVar8 + 2;
      iVar2 = iVar2 + -8;
    } while (iVar2 != 0);
    puVar9 = puVar9 + -param_4;
    puVar10 = (undefined4 *)((int)puVar10 - param_4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar2 = -param_4;
  puVar8 = (undefined4 *)(puVar9 + (param_4 - param_5));
  iVar4 = param_2 + param_5 * 2;
  do {
    uVar1 = *puVar8;
    uVar6 = puVar8[1];
    iVar3 = param_5;
    puVar10 = puVar8;
    do {
      *(undefined4 *)(iVar2 + (int)puVar10) = uVar1;
      *(undefined4 *)(iVar2 + 4 + (int)puVar10) = uVar6;
      puVar10 = (undefined4 *)((int)puVar10 + iVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar8 = puVar8 + 2;
    iVar4 = iVar4 + -8;
  } while (iVar4 != 0);
  return;
}


