/* Module: encn3260.dll
   Function: FUN_66498880
   Address: 66498880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66498880(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  while( true ) {
    if ((int *)(param_1 + 0x2a) == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x3a);
    }
    if (iVar7 < 1) {
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x22);
    piVar3 = *(int **)(*(int *)(param_1 + 0x2e) + 8);
    iVar7 = puVar2[3];
    iVar4 = puVar2[2];
    uVar1 = *(ushort *)(puVar2 + 6);
    if (iVar7 - iVar4 < 0) {
      uVar8 = (uint)*(ushort *)(puVar2 + 5);
    }
    else {
      uVar8 = 0;
    }
    uVar5 = (**(code **)*puVar2)();
    uVar6 = (**(code **)(*piVar3 + 0x18))(piVar3);
    if ((ushort)((ulonglong)(((uint)uVar1 - ((iVar7 - iVar4) + uVar8)) - 1 & 0xffff) /
                (ulonglong)(longlong)(int)(uint)uVar5) <= uVar6) break;
    iVar7 = **(int **)(param_1 + 0x22);
    uVar9 = (**(code **)(*piVar3 + 0x18))(piVar3);
    uVar9 = (**(code **)(*piVar3 + 0x1c))(piVar3,uVar9);
    (**(code **)(iVar7 + 0x10))(uVar9);
    (**(code **)(*piVar3 + 8))(piVar3);
    FUN_664ba9f0((int *)(param_1 + 0x2a));
  }
  return;
}


